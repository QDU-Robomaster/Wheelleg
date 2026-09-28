# Wheelleg

轮腿底盘控制器：四个达妙关节电机驱动左右两条五连杆腿，两个大疆轮毂电机驱动左右轮。

## 工作方式

构造时模块在四条 CAN 总线参数上各创建一个 `DMMotor`（MIT 模式，默认 DM8009，CAN ID 1/2/4/3），
轮电机使用传入的两个 `RMMotor`（力矩模式，减速比 15.765），并用 `vmc_left_param` /
`vmc_right_param` 在内部创建左右两个 `LegVmc` 解算对象。

控制线程 `WheellegThread`（优先级 MEDIUM，栈深 `task_stack_depth`）每 2 ms 运行一次：

1. 读取订阅的 topic（异步订阅，只取最新值）：
   - `chassis_cmd`（`CMD::ChassisCMD`）：底盘运动命令，`self_define` 中 `BOOST` 为加速/恢复
     默认腿长，`STRETCH` 为伸腿（持续约 200 个周期后进入上台阶准备）。
   - `atomimu_eulr`、`atomimu_gyro`、`atomimu_absaccl`：机体姿态、角速度和加速度，由
     `QDU-Robomaster/AtomImuCan` 发布。
   - `yawmotor_angle`（`float`，rad）：云台 yaw 电机角度，需要由系统中其他模块发布。

   订阅在线程内按名称等待 topic 出现，任一 topic 不存在时控制线程会一直等待。
2. 更新电机反馈，用 `LegVmc` 解算两条腿的腿长、摆角，估计机体速度（轮速与 IMU 自适应融合）
   和地面支持力。
3. `STAND` / `ROTOR` / `JUMP` 下按左右腿长用 `k_poly_coefficient` 插值 LQR 增益，结合腿长 PID
   和 roll PID 计算关节力矩与轮力矩；`RESET` / `STAIR` 下用摆角 PID 和腿长 PID 把腿摆到目标
   位置。关节力矩限幅 ±35 N·m。最大速度按腿长和超级电容能量
   （`SuperPower::GetCapEnergy()`）降低，`BOOST` 且能量足够时提高 15%。
4. 按当前模式输出电机命令。

模式：`RELAX`（轮电机放松、关节电机失能）、`RESET`（收腿复位，满足腿长、摆角和 pitch
条件后自动进入 `STAND`）、`STAND`、`ROTOR`（小陀螺）、`JUMP`、`STAIR`（上台阶）。
`STAND` / `ROTOR` 下若轮电机未就绪、关节电机异常、摆角或 pitch 超限，会放松电机并切到 `RESET`。
上电后轮电机连续在线 2.5 s 才视为就绪。

模式切换通过 `GetEvent()` 返回的 `LibXR::Event` 激活 `WheellegEvent::SET_MODE_*`
（RELAX / STAND / ROTOR / RESET / JUMP）完成；`CMD` 触发 `CMD_EVENT_LOST_CTRL` 时切到 `RELAX`。
进入 `STAND` / `ROTOR` 时激活 `NOW_MODE_MOVE`，进入 `RESET` 时激活 `NOW_MODE_RESET`。

构造时还注册一个 52 ms 周期的 LibXR 定时器任务，通过 `Referee` 在第 1 图层轮流绘制客户端 UI：
模式文字、yaw 指示点、pitch 线、左右腿、辅助线和超级电容能量条。

注意：右后关节的零点目前使用源码中固定的偏置（2.19448972 rad），`mech_zero[3]` 未被使用；
功率上限在源码中固定为 50 W，不读取裁判系统。

## 依赖

manifest `depends` 中的模块：

- `QDU-Robomaster/LegVmc`：五连杆 VMC 解算。
- `QDU-Robomaster/DMMotor`：四个关节电机驱动。
- `QDU-Robomaster/RMMotor`：左右轮电机类型。
- `QDU-Robomaster/CMD`：底盘命令与失控事件。
- `QDU-Robomaster/AtomImuCan`：发布 `atomimu_*` 姿态 topic。
- `QDU-Robomaster/Referee`：客户端 UI 绘制。
- `QDU-Robomaster/SuperPower`：读取超级电容能量。

无外部软件包依赖。

## 构造接口

```cpp
Wheelleg(CMD& cmd,
         Referee& referee,
         SuperPower& superpower,
         LibXR::CAN& hip_leftfront_can,
         LibXR::CAN& hip_leftback_can,
         LibXR::CAN& hip_rightfront_can,
         LibXR::CAN& hip_rightback_can,
         RMMotor& wheel_left,
         RMMotor& wheel_right,
         const Param& param = {...});
```

依赖项：

- `cmd`：`CMD` 实例，提供失控事件。
- `referee`：`Referee` 实例，用于绘制 UI。
- `superpower`：`SuperPower` 实例，提供电容能量。
- `hip_leftfront_can` / `hip_leftback_can` / `hip_rightfront_can` / `hip_rightback_can`：
  `LibXR::CAN`，四个关节电机所在的 CAN 总线（可以是同一条）。
- `wheel_left` / `wheel_right`：`RMMotor` 实例，左右轮电机。

配置（`Param`，完整默认值见下方 YAML）：

- `task_stack_depth`：控制线程栈深，默认 `4096`。
- `vmc_left_param` / `vmc_right_param`：`LegVmc::Param`，左右腿连杆尺寸（m），默认前/后大腿
  `0.21`、前/后小腿 `0.25`、`hip_length` `0.0`。
- `pid_leglength_left_param` / `pid_leglength_right_param`：腿长 PID（`LibXR::PID<float>::Param`），
  默认 `p = 900`、`d = 50`、`i_limit = 50`、`out_limit = 300`。
- `pid_theta_left_param` / `pid_theta_right_param`：左右腿摆角 PID（`RESET` / `STAIR` 模式使用），
  默认 `p = 15`、`out_limit = 5`。
- `pid_roll_param`：roll PID，默认 `k = 1200`、`p = 1`、`i = 0.1`、`d = 0.6`、`out_limit = 100`、
  `cycle = true`。
- `hip_leftfront_param` / `hip_leftback_param` / `hip_rightfront_param` / `hip_rightback_param`：
  `DMMotor::Param`，默认型号 `MOTOR_DM8009`、`reverse = true`，CAN ID 分别为 1、2、4、3。
- `robot_param`（`WheellegParam`）：
  - `mech_zero`：四个关节电机零点偏置，rad，默认全 0。
  - `static_l0`：左右腿基础腿长，m，默认 `0.15`。
  - `static_f0`：左右腿基础推力，N，默认 `115`。
  - `wheel_radius`：轮半径，m，默认 `0.06`。
  - `max_speed`：最大速度，m/s，默认 `2.8`。
  - `k_poly_coefficient[40][6]`：LQR 增益矩阵 40 个元素的拟合系数，每个元素是左右腿长的
    二元二次多项式（见 `LegVmc::Lqr2KCalc`）。

## 使用

```sh
xrobot module add QDU-Robomaster/Wheelleg
xrobot setup
xrobot instance add QDU-Robomaster/Wheelleg
```

`xrobot instance add` 在 `User/xrobot.yaml` 中写入一个实例，依赖项留空，默认值按源码写出；
填写依赖项后如下：

```yaml
modules:
  - module: QDU-Robomaster/Wheelleg
    id: wheelleg_0
    args:
      - cmd: cmd
      - referee: referee
      - superpower: superpower
      - hip_leftfront_can: can1
      - hip_leftback_can: can1
      - hip_rightfront_can: can2
      - hip_rightback_can: can2
      - wheel_left: motor_wheel_left
      - wheel_right: motor_wheel_right
      - param:
          task_stack_depth: '4096'
          vmc_left_param:
            leg_4: 0.21f
            leg_1: 0.21f
            leg_3: 0.25f
            leg_2: 0.25f
            hip_length: 0.0f
          vmc_right_param:
            leg_4: 0.21f
            leg_1: 0.21f
            leg_3: 0.25f
            leg_2: 0.25f
            hip_length: 0.0f
          pid_leglength_left_param:
            k: 1.0f
            p: 900.0f
            i: 0.0f
            d: 50.0f
            i_limit: 50.0f
            out_limit: 300.0f
            cycle: 'false'
          pid_leglength_right_param:
            k: 1.0f
            p: 900.0f
            i: 0.0f
            d: 50.0f
            i_limit: 50.0f
            out_limit: 300.0f
            cycle: 'false'
          pid_theta_left_param:
            k: 1.0f
            p: 15.0f
            i: 0.0f
            d: 0.0f
            i_limit: 0.0f
            out_limit: 5.0f
            cycle: 'false'
          pid_theta_right_param:
            k: 1.0f
            p: 15.0f
            i: 0.0f
            d: 0.0f
            i_limit: 0.0f
            out_limit: 5.0f
            cycle: 'false'
          pid_roll_param:
            k: 1200.0f
            p: 1.0f
            i: 0.1f
            d: 0.6f
            i_limit: 0.0f
            out_limit: 100.0f
            cycle: 'true'
          hip_leftfront_param:
            model: DMMotor::Model::MOTOR_DM8009
            reverse: 'true'
            can_id: '1'
          hip_leftback_param:
            model: DMMotor::Model::MOTOR_DM8009
            reverse: 'true'
            can_id: '2'
          hip_rightfront_param:
            model: DMMotor::Model::MOTOR_DM8009
            reverse: 'true'
            can_id: '4'
          hip_rightback_param:
            model: DMMotor::Model::MOTOR_DM8009
            reverse: 'true'
            can_id: '3'
          robot_param:
            mech_zero:
              - 0.0f
              - 0.0f
              - 0.0f
              - 0.0f
            static_l0:
              - 0.15f
              - 0.15f
            static_f0:
              - 115.0f
              - 115.0f
            wheel_radius: 0.06f
            max_speed: 2.8f
            k_poly_coefficient:
              -   - -2.4926f
                  - -0.0085557f
                  - -1.4237f
                  - 3.7989f
                  - -1.0144f
                  - -0.45636f
              -   - -4.6042f
                  - -0.102f
                  - -2.2408f
                  - 6.1744f
                  - -2.2534f
                  - -2.0711f
              -   - -2.8566f
                  - -5.9061f
                  - 2.4219f
                  - 6.7974f
                  - -2.3655f
                  - -0.20335f
              -   - -0.64595f
                  - -1.7651f
                  - 0.94845f
                  - 2.0205f
                  - -0.64978f
                  - -0.34658f
              -   - -5.448f
                  - -43.896f
                  - 10.787f
                  - 41.689f
                  - 12.233f
                  - -10.496f
              -   - -0.64886f
                  - -3.8569f
                  - 0.6421f
                  - -0.093447f
                  - -0.9605f
                  - -0.7316f
              -   - -3.9692f
                  - 19.076f
                  - -41.709f
                  - -21.817f
                  - 13.501f
                  - 12.258f
              -   - -0.27776f
                  - 0.8594f
                  - -4.2875f
                  - -0.6321f
                  - 1.4201f
                  - -3.2795f
              -   - -3.0172f
                  - 8.7533f
                  - 2.546f
                  - -9.207f
                  - -7.7938f
                  - 1.7617f
              -   - -1.0966f
                  - 3.277f
                  - 0.85392f
                  - -3.5286f
                  - -2.8362f
                  - 0.82452f
              -   - -2.4926f
                  - -1.4237f
                  - -0.0085557f
                  - -0.45636f
                  - -1.0144f
                  - 3.7989f
              -   - -4.6042f
                  - -2.2408f
                  - -0.102f
                  - -2.0711f
                  - -2.2534f
                  - 6.1744f
              -   - 2.8566f
                  - -2.4219f
                  - 5.9061f
                  - 0.20335f
                  - 2.3655f
                  - -6.7974f
              -   - 0.64595f
                  - -0.94845f
                  - 1.7651f
                  - 0.34658f
                  - 0.64978f
                  - -2.0205f
              -   - -3.9692f
                  - -41.709f
                  - 19.076f
                  - 12.258f
                  - 13.501f
                  - -21.817f
              -   - -0.27776f
                  - -4.2875f
                  - 0.8594f
                  - -3.2795f
                  - 1.4201f
                  - -0.6321f
              -   - -5.448f
                  - 10.787f
                  - -43.896f
                  - -10.496f
                  - 12.233f
                  - 41.689f
              -   - -0.64886f
                  - 0.6421f
                  - -3.8569f
                  - -0.7316f
                  - -0.9605f
                  - -0.093447f
              -   - -3.0172f
                  - 2.546f
                  - 8.7533f
                  - 1.7617f
                  - -7.7938f
                  - -9.207f
              -   - -1.0966f
                  - 0.85392f
                  - 3.277f
                  - 0.82452f
                  - -2.8362f
                  - -3.5286f
              -   - 3.8207f
                  - 13.933f
                  - -28.338f
                  - -33.981f
                  - 15.526f
                  - 37.126f
              -   - 6.8208f
                  - 24.75f
                  - -50.247f
                  - -59.267f
                  - 27.54f
                  - 65.109f
              -   - -6.4027f
                  - 9.014f
                  - 4.0619f
                  - -9.9542f
                  - 30.275f
                  - -6.3869f
              -   - -1.5633f
                  - 2.5677f
                  - 0.87157f
                  - -2.7875f
                  - 7.9043f
                  - -1.0069f
              -   - 10.631f
                  - 73.518f
                  - -15.946f
                  - -93.499f
                  - 109.25f
                  - 20.843f
              -   - 1.8344f
                  - 2.6874f
                  - -3.3599f
                  - 3.6775f
                  - 0.81105f
                  - 6.3348f
              -   - 1.1533f
                  - -15.818f
                  - -62.482f
                  - 11.797f
                  - -89.649f
                  - 54.039f
              -   - -0.39484f
                  - 0.79831f
                  - -1.0451f
                  - -4.6228f
                  - -0.42961f
                  - -5.669f
              -   - -14.198f
                  - -18.013f
                  - 6.6946f
                  - 18.333f
                  - 5.8638f
                  - -5.7598f
              -   - -5.6903f
                  - -7.0214f
                  - 2.9398f
                  - 7.4797f
                  - 1.9812f
                  - -2.8077f
              -   - 3.8207f
                  - -28.338f
                  - 13.933f
                  - 37.126f
                  - 15.526f
                  - -33.981f
              -   - 6.8208f
                  - -50.247f
                  - 24.75f
                  - 65.109f
                  - 27.54f
                  - -59.267f
              -   - 6.4027f
                  - -4.0619f
                  - -9.014f
                  - 6.3869f
                  - -30.275f
                  - 9.9542f
              -   - 1.5633f
                  - -0.87157f
                  - -2.5677f
                  - 1.0069f
                  - -7.9043f
                  - 2.7875f
              -   - 1.1533f
                  - -62.482f
                  - -15.818f
                  - 54.039f
                  - -89.649f
                  - 11.797f
              -   - -0.39484f
                  - -1.0451f
                  - 0.79831f
                  - -5.669f
                  - -0.42961f
                  - -4.6228f
              -   - 10.631f
                  - -15.946f
                  - 73.518f
                  - 20.843f
                  - 109.25f
                  - -93.499f
              -   - 1.8344f
                  - -3.3599f
                  - 2.6874f
                  - 6.3348f
                  - 0.81105f
                  - 3.6775f
              -   - -14.198f
                  - 6.6946f
                  - -18.013f
                  - -5.7598f
                  - 5.8638f
                  - 18.333f
              -   - -5.6903f
                  - 2.9398f
                  - -7.0214f
                  - -2.8077f
                  - 1.9812f
                  - 7.4797f
```

BSP 侧：

```cpp
XR_REGISTER(can1, LibXR::CAN);
XR_REGISTER(can2, LibXR::CAN);
```

`cmd`、`referee`、`superpower`、`motor_wheel_left`、`motor_wheel_right` 是其他模块实例的 `id`，
必须在 `modules:` 中排在本实例之前，分别由 `QDU-Robomaster/CMD`、`QDU-Robomaster/Referee`、
`QDU-Robomaster/SuperPower` 和两个 `QDU-Robomaster/RMMotor` 实例提供。发布 `atomimu_*` 的
`QDU-Robomaster/AtomImuCan` 实例也需要加入配置。

填好后再次运行 `xrobot setup`，生成 `User/xrobot_main.hpp`。

`xrobot module show .`（在本仓库中）或 `xrobot module show Modules/QDU-Robomaster/Wheelleg`
（在 BSP 中）打印当前的构造函数。
