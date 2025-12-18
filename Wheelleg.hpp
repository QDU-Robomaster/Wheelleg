
#pragma once
// clang-format off
/* === MODULE MANIFEST V2 ===
module_description: WheelLegChassis controller
constructor_args:
    cmd: 'cmd'
    task_stack_depth: 4096
    vmc_left_param:
      leg_4: 0.210
      leg_1: 0.210
      leg_3: 0.250
      leg_2: 0.250
      hip_length: 0.0001
    vmc_right_param:
      leg_4: 0.210
      leg_1: 0.210
      leg_3: 0.250
      leg_2: 0.250
      hip_length: 0.0001
    param_pid_leglength_0:
      k: 1.0
      p: 600.0
      i: 0.0
      d: 0.0
      i_limit: 1.0
      out_limit: 200.0
      cycle: false
    param_pid_leglength_1:
      k: 1.0
      p: 600.0
      i: 0.0
      d: 0.0
      i_limit: 1.0
      out_limit: 200.0
      cycle: false
    param_pid_theta_0:
      k: 1.0
      p: 15.0
      i: 0.0
      d: 2.0
      i_limit: 1.0
      out_limit: 50.0
      cycle: false
    param_pid_theta_1:
      k: 1.0
      p: 15.0
      i: 0.0
      d: 2.0
      i_limit: 1.0
      out_limit: 50.0
      cycle: false
    param_pid_roll:
      k: 0.4
      p: 0.8
      i: 0.0
      d: 0.0
      i_limit: 0.0
      out_limit: 0.1
      cycle: true
    hip_motor_0_param:
      model: DMMotor::Model::MOTOR_DM8009
      reverse: true
      can_id: 1
      can_bus_name: can2
    hip_motor_1_param:
      model: DMMotor::Model::MOTOR_DM8009
      reverse: true
      can_id: 2
      can_bus_name: can2
    hip_motor_2_param:
      model: DMMotor::Model::MOTOR_DM8009
      reverse: true
      can_id: 4
      can_bus_name: can1
    hip_motor_3_param:
      model: DMMotor::Model::MOTOR_DM8009
      reverse: true
      can_id: 3
      can_bus_name: can1
    wheel_left_param: '@&left_wheel'
    wheel_right_param: '@&right_wheel'
    PARAM:
      mech_zero: [0.0, 0.0, 0.0, 0.0]
      static_L0: [0.15, 0.15]
      static_F0: [85.0, 85.0]
      wheel_radius: 0.063
      max_speed: 2.5
      K_Poly_Coefficient: [
        [-2.4926, -0.0085557, -1.4237, 3.7989, -1.0144, -0.45636],
        [-4.6042, -0.102, -2.2408, 6.1744, -2.2534, -2.0711],
        [-2.8566, -5.9061, 2.4219, 6.7974, -2.3655, -0.20335],
        [-0.64595, -1.7651, 0.94845, 2.0205, -0.64978, -0.34658],
        [-5.448, -43.896, 10.787, 41.689, 12.233, -10.496],
        [-0.64886, -3.8569, 0.6421, -0.093447, -0.9605, -0.7316],
        [-3.9692, 19.076, -41.709, -21.817, 13.501, 12.258],
        [-0.27776, 0.8594, -4.2875, -0.6321, 1.4201, -3.2795],
        [-3.0172, 8.7533, 2.546, -9.207, -7.7938, 1.7617],
        [-1.0966, 3.277, 0.85392, -3.5286, -2.8362, 0.82452],
        [-2.4926, -1.4237, -0.0085557, -0.45636, -1.0144, 3.7989],
        [-4.6042, -2.2408, -0.102, -2.0711, -2.2534, 6.1744],
        [2.8566, -2.4219, 5.9061, 0.20335, 2.3655, -6.7974],
        [0.64595, -0.94845, 1.7651, 0.34658, 0.64978, -2.0205],
        [-3.9692, -41.709, 19.076, 12.258, 13.501, -21.817],
        [-0.27776, -4.2875, 0.8594, -3.2795, 1.4201, -0.6321],
        [-5.448, 10.787, -43.896, -10.496, 12.233, 41.689],
        [-0.64886, 0.6421, -3.8569, -0.7316, -0.9605, -0.093447],
        [-3.0172, 2.546, 8.7533, 1.7617, -7.7938, -9.207],
        [-1.0966, 0.85392, 3.277, 0.82452, -2.8362, -3.5286],
        [3.8207, 13.933, -28.338, -33.981, 15.526, 37.126],
        [6.8208, 24.75, -50.247, -59.267, 27.54, 65.109],
        [-6.4027, 9.014, 4.0619, -9.9542, 30.275, -6.3869],
        [-1.5633, 2.5677, 0.87157, -2.7875, 7.9043, -1.0069],
        [10.631, 73.518, -15.946, -93.499, 109.25, 20.843],
        [1.8344, 2.6874, -3.3599, 3.6775, 0.81105, 6.3348],
        [1.1533, -15.818, -62.482, 11.797, -89.649, 54.039],
        [-0.39484, 0.79831, -1.0451, -4.6228, -0.42961, -5.669],
        [-14.198, -18.013, 6.6946, 18.333, 5.8638, -5.7598],
        [-5.6903, -7.0214, 2.9398, 7.4797, 1.9812, -2.8077],
        [3.8207, -28.338, 13.933, 37.126, 15.526, -33.981],
        [6.8208, -50.247, 24.75, 65.109, 27.54, -59.267],
        [6.4027, -4.0619, -9.014, 6.3869, -30.275, 9.9542],
        [1.5633, -0.87157, -2.5677, 1.0069, -7.9043, 2.7875],
        [1.1533, -62.482, -15.818, 54.039, -89.649, 11.797],
        [-0.39484, -1.0451, 0.79831, -5.669, -0.42961, -4.6228],
        [10.631, -15.946, 73.518, 20.843, 109.25, -93.499],
        [1.8344, -3.3599, 2.6874, 6.3348, 0.81105, 3.6775],
        [-14.198, 6.6946, -18.013, -5.7598, 5.8638, 18.333],
        [-5.6903, 2.9398, -7.0214, -2.8077, 1.9812, 7.4797]
      ]

template_args: []
required_hardware:
  - can1
  - can2
  - cmd

depends:
  - qdu-future/LegVmc
  - qdu-future/DMMotor
  - qdu-future/RMMotor
  - qdu-future/CMD
  - qdu-future/AtomImuCan
=== END MANIFEST === */
// clang-format on


#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <tuple>
#include "app_framework.hpp"
#include "libxr_def.hpp"
#include "libxr_type.hpp"
#include "cycle_value.hpp"
#include "pid.hpp"
#include "LegVmc.hpp"
#include "DMMotor.hpp"
#include "RMMotor.hpp"
#include "CMD.hpp"
#include "message.hpp"
#include "mutex.hpp"
#include "semaphore.hpp"
#include "thread.hpp"
#include "timebase.hpp"



class Wheelleg : public LibXR::Application {
 public:
enum class WheellegEvent : uint8_t {
    SET_MODE_RELAX,
    SET_MODE_STAND,
    SET_MODE_ROTOR,
    SET_MODE_RESET,
};

  typedef enum : uint8_t { RELAX, STAND, ROTOR, RESET } Mode;

  struct Vector3 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
  };

  struct Euler {
    float pit = 0.0f;
    float rol = 0.0f;
    float yaw = 0.0f;
  };

  struct WheellegParam {
    std::array<LibXR::CycleValue<float>, 4> mech_zero; /*关节电机偏置零点 单位rad*/
    std::array<float, 2> static_L0; /*基本腿长 单位m*/
    std::array<float, 2> static_F0; /*基本推力 单位N */
    float wheel_radius;  /*轮子半径 单位m*/
    float max_speed;  /*最大速度 单位m/s*/
    float K_Poly_Coefficient[40][6];  /*K矩阵*/
    };


  /**
   * @brief wheelleg 类的构造函数
   *
   * @param hw LibXR::HardwareContainer 的引用，用于查找硬件资源
   * @param app LibXR::ApplicationManager 的引用
   * @param CMD cmd传
   * @param task_stack_depth 任务堆栈深度
   * @param vmc_left_param 左腿参数
   * @param vmc_right_param 右腿参数
   * @param pid_leglength_left_param 左腿长pid参数
   * @param pid_leglength_right_param 右腿长pid参数
   * @param pid_theta_left_param 左腿摆角pid参数
   * @param pid_theta_right_param 右腿摆角pid参数
   * @param pid_roll_param roll轴pid参数
   * @param hip_leftfront_param 左前关节电机参数
   * @param hip_leftback_param 左后关节电机参数
   * @param hip_rightfront_param 右前关节电机参数
   * @param hip_rightback_param 右后关节电机参数
   * @param wheel_left 指向左轮电机
   * @param wheel_right 指向右轮电机
   * @param WheellegParam 机体参数
   */
    Wheelleg(LibXR::HardwareContainer& hw, LibXR::ApplicationManager& app,CMD& cmd,
             uint32_t task_stack_depth,
        LegVmc::Param vmc_left_param,
        LegVmc::Param vmc_right_param,
        LibXR::PID<float>::Param pid_leglength_left_param,
        LibXR::PID<float>::Param pid_leglength_right_param,
        LibXR::PID<float>::Param pid_theta_left_param,
        LibXR::PID<float>::Param pid_theta_right_param,
        LibXR::PID<float>::Param pid_roll_param,
        DMMotor::Param hip_leftfront_param,
        DMMotor::Param hip_leftback_param,
        DMMotor::Param hip_rightfront_param,
        DMMotor::Param hip_rightback_param,
        RMMotor  *wheel_left,
        RMMotor  *wheel_right,
        const WheellegParam& PARAM
        ):param_(PARAM),
          vmc_left_(new LegVmc(hw, app, vmc_left_param)),
          vmc_right_(new LegVmc(hw, app, vmc_right_param)),
          leglength_pid_left_(pid_leglength_left_param),
          leglength_pid_right_(pid_leglength_right_param),
          theta_pid_left_(pid_theta_left_param),
          theta_pid_right_(pid_theta_right_param),
          roll_pid_(pid_roll_param),
          cmd_(&cmd)
      {
  this->hip_motor_.at(0) =
      new DMMotor(hw,app,hip_leftfront_param);
  this->hip_motor_.at(1) =
      new DMMotor(hw,app,hip_leftback_param);
  this->hip_motor_.at(2) =
      new DMMotor(hw,app,hip_rightfront_param);
  this->hip_motor_.at(3) =
      new DMMotor(hw,app,hip_rightback_param);

  this->wheel_motor_.at(0) = wheel_left;
  this->wheel_motor_.at(1) = wheel_right;

  /*lostcontrol回调*/
  auto lost_ctrl_callback = LibXR::Callback<uint32_t>::Create(
    [](bool in_isr, Wheelleg *wheelleg, uint32_t event_id) {
      UNUSED(in_isr);
      UNUSED(event_id);
    wheelleg->lost_control_ = true;
    },this);

  cmd_->GetEvent().Register(CMD::CMD_EVENT_LOST_CTRL, lost_ctrl_callback);

  /*模式切换事件回调*/
  auto event_callback = LibXR::Callback<uint32_t>::Create(
    [](bool in_isr, Wheelleg* wheelleg, uint32_t event_id) {
     UNUSED(in_isr);
    wheelleg->EventHandler(event_id);
    },this);

   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_RELAX), event_callback);
   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_STAND), event_callback);
   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_ROTOR), event_callback);
   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_RESET), event_callback);

   thread_.Create(this,ThreadFunc, "WheellegThread", task_stack_depth, LibXR::Thread::Priority::MEDIUM);
}

  /**
   * @brief 线程函数
   *
   * @param wheelleg
   */
    static void ThreadFunc(Wheelleg* wheelleg) {
        LibXR::Topic::ASyncSubscriber<CMD::ChassisCMD> cmd_sub("chassis_cmd");
        LibXR::Topic::ASyncSubscriber<Euler> eulr_sub("atomimu_eulr");
        LibXR::Topic::ASyncSubscriber<Vector3> gyro_sub("atomimu_gyro");
        LibXR::Topic::ASyncSubscriber<Vector3> accl_sub("atomimu_absaccl");
        LibXR::Topic::ASyncSubscriber<float> yaw_sub("yaw");
        LibXR::Topic::ASyncSubscriber<float> yaw_dot_sub("yaw_dot");

        cmd_sub.StartWaiting();
        eulr_sub.StartWaiting();
        gyro_sub.StartWaiting();
        accl_sub.StartWaiting();
        yaw_sub.StartWaiting();
        yaw_dot_sub.StartWaiting();

        while (true) {

            auto last_time = LibXR::Timebase::GetMilliseconds();
            if (cmd_sub.Available()) {
                wheelleg->chassis_cmd_ = cmd_sub.GetData();
                cmd_sub.StartWaiting();
            }
            if (eulr_sub.Available()) {
                wheelleg->eulr_ = eulr_sub.GetData();
                eulr_sub.StartWaiting();
            }
            if (gyro_sub.Available()) {
                wheelleg->gyro_ = gyro_sub.GetData();
                gyro_sub.StartWaiting();
            }

            if (accl_sub.Available()) {
                wheelleg->accl_ = accl_sub.GetData();
                accl_sub.StartWaiting();
            }
            if (yaw_sub.Available()) {
                wheelleg->yaw_ = yaw_sub.GetData();
                yaw_sub.StartWaiting();
            }
            if (yaw_dot_sub.Available()) {
                wheelleg->yaw_dot_ = yaw_dot_sub.GetData();
                yaw_dot_sub.StartWaiting();
            }

            wheelleg->mutex_.Lock();
            wheelleg->UpdateFeedback();
            wheelleg->Calculate();
            wheelleg->mutex_.Unlock();
             wheelleg->Control();
            LibXR::Thread::SleepUntil(last_time,2);
        }
    }

  /**
   * @brief 更新反馈和状态量
   *
   */
void UpdateFeedback() {

    /* time update*/
    now_ = LibXR::Timebase::GetMicroseconds();
    dt_ = (now_ - last_wakeup_) / 1000000.0f;
    last_wakeup_ = now_;

    /* motor upadte */
    this->wheel_motor_[0]->Update();
    this->wheel_motor_[1]->Update();
    this->hip_motor_[0]->Update();
    this->hip_motor_[1]->Update();
    this->hip_motor_[2]->Update();
    this->hip_motor_[3]->Update();

    /* hip angle update */
    /* 左腿前关节角度 */
    leg_argu_[0].phi4_ = hip_motor_[0]->GetAngle() - param_.mech_zero[0];
    if (leg_argu_[0].phi4_ > M_PI) {leg_argu_[0].phi4_ -= M_2PI;}
    if (leg_argu_[0].phi4_ < -M_PI){leg_argu_[0].phi4_ += M_2PI;}
    leg_argu_[0].phi1_ = hip_motor_[1]->GetAngle() - param_.mech_zero[1];
    /* 左腿后关节角度 */
    if (leg_argu_[0].phi1_ > M_PI) {leg_argu_[0].phi1_ -= M_2PI;}
    if (leg_argu_[0].phi1_ < -M_PI){leg_argu_[0].phi1_ += M_2PI;}

     /* 右腿前关节角度 */
    leg_argu_[1].phi4_ = -(hip_motor_[2]->GetAngle() - param_.mech_zero[2]);
    if (leg_argu_[1].phi4_ > M_PI) {leg_argu_[1].phi4_ -= M_2PI;}
    if (leg_argu_[1].phi4_ < -M_PI){leg_argu_[1].phi4_ += M_2PI;}
     /* 右腿后关节角度 */
    leg_argu_[1].phi1_ = -(hip_motor_[3]->GetAngle() - param_.mech_zero[3]);
    if (leg_argu_[1].phi1_ > M_PI) {leg_argu_[1].phi1_ -= M_2PI;}
    if (leg_argu_[1].phi1_ < -M_PI){leg_argu_[1].phi1_ += M_2PI;}

    /* 机体pitch计算 */
    pit_ = eulr_.pit;
    if (pit_ > M_PI){ pit_ = eulr_.pit - M_2PI;}
    /* 交龙极性 */
    pit_ = -pit_;
    gyro_.x = -gyro_.x;


    /* 左右腿摆角与腿长计算 */
    /* 注意极性 */
    auto result0 = vmc_left_->VMCsolve(-leg_argu_[0].phi1_, -leg_argu_[0].phi4_, -pit_, gyro_.x, dt_);
    leg_argu_[0].L0 = std::get<0>(result0);
    leg_argu_[0].d_L0 = std::get<1>(result0);
    leg_argu_[0].theta = -std::get<2>(result0);
    leg_argu_[0].d_theta = -std::get<3>(result0);
    if (leg_argu_[0].theta > M_PI) {leg_argu_[0].theta -= M_2PI;}
    if (leg_argu_[0].theta < -M_PI) {leg_argu_[0].theta += M_2PI;}

    auto result1 = vmc_right_->VMCsolve(-leg_argu_[1].phi1_, -leg_argu_[1].phi4_, -pit_, gyro_.x, dt_);
    leg_argu_[1].L0 = std::get<0>(result1);
    leg_argu_[1].d_L0 = std::get<1>(result1);
    leg_argu_[1].theta = -std::get<2>(result1);
    leg_argu_[1].d_theta = -std::get<3>(result1);
    if (leg_argu_[1].theta > M_PI) {leg_argu_[1].theta -= M_2PI;}
    if (leg_argu_[1].theta < -M_PI) {leg_argu_[1].theta += M_2PI;}

    /* 位移与速度计算 */
    /* 轮子转速近似于编码器速度 由此推测机体速度 */

    /* 消除腿摆动导致速度的变化 */
    float leg_xdot_0 = leg_argu_[0].L0 * leg_argu_[0].d_theta * cosf(leg_argu_[0].theta) + leg_argu_[0].d_L0 * sinf(leg_argu_[0].theta);
    float leg_xdot_1 = leg_argu_[1].L0 * leg_argu_[1].d_theta * cosf(leg_argu_[1].theta) + leg_argu_[1].d_L0 * sinf(leg_argu_[1].theta);
    /*注意减速比 两者均向前+*/
    /*左侧轮速*/
    leg_argu_[0].single_x_dot = -wheel_motor_[0]->GetOmega()/15.765f * param_.wheel_radius;
    /*右侧轮速*/
    leg_argu_[1].single_x_dot = wheel_motor_[1]->GetOmega()/15.765f * param_.wheel_radius;
    /* 平均速度估计 */
    move_argu_.last_x_dot = move_argu_.x_dot;
    move_argu_.x_dot = (leg_argu_[0].single_x_dot  + leg_xdot_0 + leg_argu_[1].single_x_dot+ leg_xdot_1) / 2.0f;
    move_argu_.x_dot_2 = (move_argu_.x_dot - move_argu_.last_x_dot) / dt_;
    /* 机体角速度 俯视逆时针旋转为正 */
    move_argu_.wz = (-(leg_argu_[0].single_x_dot + leg_xdot_0) + (leg_argu_[1].single_x_dot + leg_xdot_1)) / 0.46f;

    /*避免陀螺仪上电尖峰加速度*/
    if (now_>1000000) {
    /*调用自适应滤波*/
        move_argu_.x_dot_hat = AdaptFilter(
        move_argu_.wz, gyro_.z, move_argu_.x_dot, accl_.y * 9.8f, dt_)-(leg_xdot_0 + leg_xdot_1)/2;
        move_argu_.xhat += move_argu_.x_dot_hat * dt_;
    } else {
        move_argu_.x_dot_hat = move_argu_.x_dot;
         move_argu_.xhat += move_argu_.x_dot_hat * dt_;
    }

    /* 使用陀螺仪预测速度 */
    leg_argu_[0].x_dot_pred =
          move_argu_.x_dot_hat - this->gyro_.z * 0.23f + accl_.y * dt_ * 9.8f;
    leg_argu_[1].x_dot_pred =
          move_argu_.x_dot_hat + this->gyro_.z * 0.23f + accl_.y * dt_ * 9.8f;
}

  /**
   * @brief 计算输出
   *
   */
void Calculate() {

  /* 获取目标量 */
  switch (current_mode_) {
   case RELAX:
   case STAND:
   /*速度规划*/
   /* 命令应该控加速度而不是速度? */
   /* 平移速度计算 */
   /* 0.002为最大加速度 即500hz*0.002 梯度式递增减 */

    // if(move_argu_.target_dot_x - this->gyro_.z * 0.23f>param_.max_speed){move_argu_.target_dot_x =param_.max_speed-(-gyro_.z*0.23f);}
    // if(move_argu_.target_dot_x + this->gyro_.z * 0.23f>param_.max_speed){move_argu_.target_dot_x =param_.max_speed-( gyro_.z*0.23f);}

    if(fabs(move_argu_.x_dot_hat)>0.1f ){
    move_argu_.target_x =0.0f;
    move_argu_.xhat=0.0f;
    }

   if (fabs(move_argu_.target_dot_x - chassis_cmd_.y * cosf(yaw_) * param_.max_speed) > 0.004) {
    if (move_argu_.target_dot_x > chassis_cmd_.y * cosf(yaw_) * param_.max_speed) {
          move_argu_.target_dot_x -= 0.003;}
    if (move_argu_.target_dot_x < chassis_cmd_.y * cosf(yaw_) * param_.max_speed) {
          move_argu_.target_dot_x += 0.003;}
   } else {
    move_argu_.target_dot_x = cosf(yaw_) * chassis_cmd_.y * param_.max_speed;
    }
    move_argu_.target_x += move_argu_.target_dot_x * dt_;
    move_argu_.target_yaw = 0.0f;
    move_argu_.target_yaw_dot = 0.0f;

    /*双零点*/
    // if (yaw_ > M_PI / 2.0f) move_argu_.target_yaw = M_PI;
    // if (yaw_ < -M_PI / 2.0f) move_argu_.target_yaw = M_PI;

    break;
   case ROTOR:
    //TODO:旋转速度规划
    move_argu_.target_dot_x = 0.0f;
    move_argu_.target_x = 0.0f;
    if ((1.0f - move_argu_.target_yaw_dot) > 0.003) {
        move_argu_.target_yaw_dot += 0.002;
    } else {
        move_argu_.target_yaw_dot = 1.0f;
    }
    move_argu_.target_yaw += move_argu_.target_yaw_dot;
    if (move_argu_.target_yaw > M_PI) {move_argu_.target_yaw -= M_2PI;}
    if (move_argu_.target_yaw < -M_PI) {move_argu_.target_yaw += M_2PI;}

    break;
   case RESET:
     move_argu_.target_dot_x = 0.0f;
     move_argu_.target_x = 0.0f;
     move_argu_.xhat = 0.0f;
    break;
    default:
    break;
    }

  /* 实际支持力计算 */
  leg_argu_[0].Fn = vmc_left_->GndDetector(hip_motor_[0]->GetTor(),
            hip_motor_[1]->GetTor(),accl_.z * 9.81f, leg_argu_[0].theta,leg_argu_[0].d_theta);

        leg_argu_[1].Fn = vmc_right_->GndDetector(
            hip_motor_[3]->GetTor(),
            hip_motor_[2]->GetTor(),
            accl_.z * 9.81f,
            leg_argu_[1].theta,
            leg_argu_[1].d_theta);
  /*离地检测处理*/
  //       onground0_flag_ = (leg_argu_[0].Fn > 40.0f);
  //       onground1_flag_ = (leg_argu_[1].Fn > 40.0f);
  // if (((leg_argu_[0].Fn < 40.0f) & (leg_argu_[1].Fn < 40.0f))) {
  //   this->move_argu_.flytime_ += 1.0f;
  //   if (this->move_argu_.flytime_ > 3.0f) {
  //     onground0_flag_ = false;
  //     onground1_flag_ = false;
  //     this->move_argu_.flytime_ = 4.0f;
  //     this->move_argu_.xhat = 0.0f;
  //     this->move_argu_.target_x = 0.0f;
  //     //   this->move_argu_.x_dot_hat;
  //   }
  // }
  // if (((leg_argu_[0].Fn > 40.0f) & (leg_argu_[1].Fn > 40.0f))) {
  //   this->move_argu_.flytime_ -= 1.0f;
  //   if (this->move_argu_.flytime_ < 1.0f) {
  //     onground0_flag_ = true;
  //     onground1_flag_ = true;
  //     this->move_argu_.flytime_ = 0.0f;
  //   }
  //}
  onground0_flag_ = true;
  onground1_flag_ = true;
  if (current_mode_ == RELAX || current_mode_ == ROTOR || current_mode_ == STAND) {
      for (int i = 0; i < 40; i++) {
        move_argu_.LQR_K[i] = vmc_left_->Lqr2KCalc(
            &this->param_.K_Poly_Coefficient[i][0], leg_argu_[0].L0,
            leg_argu_[1].L0);}

    /*超出输出时削减移动项*/
  // if(fabs(wheel_motor_out_[0])>2.5f or fabs(wheel_motor_out_[1])>2.5f){
  //     move_argu_.LQR_K[0] *=0.5;
  //     move_argu_.LQR_K[1] *=0.5f;
  //     move_argu_.LQR_K[2] *=0.5f;
  //     move_argu_.LQR_K[3] *=0.5f;
  //     move_argu_.LQR_K[10] *=0.5;
  //     move_argu_.LQR_K[11] *=0.5f;
  //     move_argu_.LQR_K[12] *=0.5f;
  //     move_argu_.LQR_K[13] *=0.5f;}

     /* K增益计算 */
  if (onground0_flag_) {
    leg_argu_[0].Tw = (move_argu_.LQR_K[0] * (-move_argu_.xhat + move_argu_.target_x + 0.81f) +
      move_argu_.LQR_K[1] * (-move_argu_.x_dot_hat + move_argu_.target_dot_x) +
      move_argu_.LQR_K[2] * (yaw_ + move_argu_.target_yaw) +
      move_argu_.LQR_K[3] * (-gyro_.z + move_argu_.target_yaw_dot) +
      move_argu_.LQR_K[4] * (-leg_argu_[0].theta + 0.0f) +
      move_argu_.LQR_K[5] * (-leg_argu_[0].d_theta + 0.0f) +
      move_argu_.LQR_K[6] * (-leg_argu_[1].theta + 0.0f) +
      move_argu_.LQR_K[7] * (-leg_argu_[1].d_theta + 0.0f) +
      move_argu_.LQR_K[8] * (-pit_ +0.08F) +
      move_argu_.LQR_K[9] * (-gyro_.x + 0.0f));
    leg_argu_[0].Tw_adapt = 0.15f * (leg_argu_[0].x_dot_pred - leg_argu_[0].single_x_dot) /0.063f;
    leg_argu_[0].Tp = (move_argu_.LQR_K[20] * (-move_argu_.xhat + move_argu_.target_x + 0.81f) +
      move_argu_.LQR_K[21] * (-move_argu_.x_dot_hat + move_argu_.target_dot_x) +
      move_argu_.LQR_K[22] * (yaw_ + move_argu_.target_yaw) +
      move_argu_.LQR_K[23] * (-gyro_.z + move_argu_.target_yaw_dot) +
      move_argu_.LQR_K[24] * (-leg_argu_[0].theta + 0.0f) +
      move_argu_.LQR_K[25] * (-leg_argu_[0].d_theta + 0.0f) +
      move_argu_.LQR_K[26] * (-leg_argu_[1].theta + 0.0f) +
      move_argu_.LQR_K[27] * (-leg_argu_[1].d_theta + 0.0f) +
      move_argu_.LQR_K[28] * (-pit_ + 0.08F) +
      move_argu_.LQR_K[29] * (-gyro_.x + 0.0f));
    } else {
     leg_argu_[0].Tw = 0.0f;
     leg_argu_[0].Tw_adapt = 0;
     leg_argu_[0].Tp = (move_argu_.LQR_K[24] * (-leg_argu_[0].theta + 0.0f) +
       move_argu_.LQR_K[25] * (-leg_argu_[0].d_theta + 0.0f) +
       move_argu_.LQR_K[26] * (-leg_argu_[1].theta + 0.0f) +
       move_argu_.LQR_K[27] * (-leg_argu_[1].d_theta + 0.0f)); }
  if (onground1_flag_) {
     leg_argu_[1].Tw = (move_argu_.LQR_K[10] * (-move_argu_.xhat + move_argu_.target_x + 0.81f) +
      move_argu_.LQR_K[11] * (-move_argu_.x_dot_hat + move_argu_.target_dot_x) +
      move_argu_.LQR_K[12] * (yaw_ + move_argu_.target_yaw) +
      move_argu_.LQR_K[13] * (-gyro_.z + move_argu_.target_yaw_dot) +
      move_argu_.LQR_K[14] * (-leg_argu_[0].theta + 0.0f) +
      move_argu_.LQR_K[15] * (-leg_argu_[0].d_theta + 0.0f) +
      move_argu_.LQR_K[16] * (-leg_argu_[1].theta + 0.0f) +
      move_argu_.LQR_K[17] * (-leg_argu_[1].d_theta + 0.0f) +
      move_argu_.LQR_K[18] * (-pit_ + 0.08) +
      move_argu_.LQR_K[19] * (-gyro_.x + 0.0f));
     leg_argu_[1].Tw_adapt = 0.15f * (leg_argu_[1].x_dot_pred - leg_argu_[1].single_x_dot) /0.063f;
     leg_argu_[1].Tp = (move_argu_.LQR_K[30] * (-move_argu_.xhat + move_argu_.target_x + 0.81f) +
       move_argu_.LQR_K[31] * (-move_argu_.x_dot_hat + move_argu_.target_dot_x) +
       move_argu_.LQR_K[32] * (yaw_ + move_argu_.target_yaw) +
       move_argu_.LQR_K[33] * (-gyro_.z + move_argu_.target_yaw_dot) +
       move_argu_.LQR_K[34] * (-leg_argu_[0].theta + 0.0f) +
       move_argu_.LQR_K[35] * (-leg_argu_[0].d_theta + 0.0f) +
       move_argu_.LQR_K[36] * (-leg_argu_[1].theta + 0.0f) +
       move_argu_.LQR_K[37] * (-leg_argu_[1].d_theta + 0.0f) +
       move_argu_.LQR_K[38] * (-pit_ + 0.08f) +
       move_argu_.LQR_K[39] * (-gyro_.x + 0.0f));
  } else {
    leg_argu_[1].Tw = 0.0f;
    leg_argu_[1].Tw_adapt = 0.0f;
    leg_argu_[1].Tp = (move_argu_.LQR_K[34] * (-leg_argu_[0].theta + 0.0f) +
      move_argu_.LQR_K[35] * (-leg_argu_[0].d_theta + 0.0f) +
      move_argu_.LQR_K[36] * (-leg_argu_[1].theta + 0.0f) +
      move_argu_.LQR_K[37] * (-leg_argu_[1].d_theta + 0.0f));}

 /* 目标支持力计算 */
 leg_argu_[0].Delta_L0 = param_.static_L0[0] + roll_pid_.Calculate(0.0f, eulr_.rol, dt_);
 leg_argu_[1].Delta_L0 = param_.static_L0[1] - roll_pid_.Calculate(0.0f, eulr_.rol, dt_);
  // leg_argu_[0].F0 = param_.static_F0[0] + leglength_pid_left_.Calculate(leg_argu_[0].Delta_L0, leg_argu_[0].L0, dt_);
  // leg_argu_[1].F0 = param_.static_F0[1] + leglength_pid_right_.Calculate(leg_argu_[1].Delta_L0, leg_argu_[1].L0, dt_);
  /* 侧向惯性力矩补偿= (机体质量*0.5+腿质心高度系数*腿长*腿重)*前进平移速度*旋转角速度*腿长/两轮距离, 注意角速度极性 */
  /*单侧腿推力 = roll推力(交龙使用单环直接出力矩)+机体加腿静态重力+侧向惯性力矩补偿+pid控制默认腿长 */
  leg_argu_[0].F0 = param_.static_F0[0] + leglength_pid_left_.Calculate(leg_argu_[0].Delta_L0, leg_argu_[0].L0, dt_)
      - gyro_.z*move_argu_.x_dot_hat*0.5f*leg_argu_[0].L0/0.23f*(8+0.5*0.7*leg_argu_[0].L0);
  leg_argu_[1].F0 = param_.static_F0[1] + leglength_pid_right_.Calculate(leg_argu_[1].Delta_L0, leg_argu_[1].L0, dt_)
      + gyro_.z*move_argu_.x_dot_hat*0.5f*leg_argu_[1].L0/0.23f*(8+0.5*0.7*leg_argu_[1].L0);

  move_argu_.yaw_force = 0.0f;
  /* 轮毂输出计算 */
  wheel_motor_out_[0] = (leg_argu_[0].Tw + leg_argu_[0].Tw_adapt);
  wheel_motor_out_[1] = (leg_argu_[1].Tw + leg_argu_[1].Tw_adapt);
   /*偏执腿力矩补偿*/
  this->leg_argu_[0].Delta_Tp = 1.0f;
  this->leg_argu_[1].Delta_Tp = 1.0f;

  auto result3 = vmc_left_->VMCinserve(-leg_argu_[0].phi1_, -leg_argu_[0].phi4_, -(leg_argu_[0].Tp + leg_argu_[0].Delta_Tp), leg_argu_[0].F0);
   leg_argu_[0].T1 = std::get<0>(result3);
   leg_argu_[0].T2 = std::get<1>(result3);

  auto result4 = vmc_right_->VMCinserve(-leg_argu_[1].phi1_, -leg_argu_[1].phi4_, -(leg_argu_[1].Tp + leg_argu_[1].Delta_Tp), leg_argu_[1].F0);
   leg_argu_[1].T1 = -std::get<0>(result4);
   leg_argu_[1].T2 = -std::get<1>(result4);

      /* 下一次速度预测 xd_pred = A*X*dt + B*U*dt +  xd_now 模型预测效果一般
       * 噪声较大 A,B矩阵调试时均为0.15腿长时值 */
      // leg_argu_[0].x_dot_pred =
      //     ((-57.9674 * leg_argu_[0].theta + 0.2460 * this->pit_) * dt_ +
      //      (7.6489 * (leg_argu_[0].Tw) -
      //       2.0618 * (leg_argu_[0].Tp + leg_argu_[0].Delta_Tp - 1.11)) *
      //          dt_) +
      //     leg_argu_[0].single_x_dot;

      // leg_argu_[1].x_dot_pred =
      //     ((-57.9674 * leg_argu_[1].theta + 0.2460 * this->pit_) * dt_ +
      //      (7.6489 * (leg_argu_[1].Tw) -
      //       2.0618 * (leg_argu_[1].Tp + leg_argu_[1].Delta_Tp - 1.11)) *
      //          dt_) +
      //     leg_argu_[1].single_x_dot;

  hip_motor_out_[0] = leg_argu_[0].T1;
  hip_motor_out_[1] = leg_argu_[0].T2;
  hip_motor_out_[2] = leg_argu_[1].T1;
  hip_motor_out_[3] = leg_argu_[1].T2;

  } else if (current_mode_ == RESET) {
      /* 愚蠢的恢复模式 */
      if (fabs(pit_) > M_PI / 2 || fabs(leg_argu_[0].theta) > 1.57 ||
          fabs(leg_argu_[1].theta) > 1.57) {
        leg_argu_[0].target_theta = leg_argu_[0].theta + chassis_cmd_.y / 1000;

        if (fabs(pit_) > M_PI / 2) {
          if ((leg_argu_[0].theta - leg_argu_[1].theta) > 0.03) {
            leg_argu_[1].target_theta = leg_argu_[1].theta + 0.001f;
          }
          if ((leg_argu_[0].theta - leg_argu_[1].theta) < -0.03) {
            leg_argu_[1].target_theta = leg_argu_[1].theta - 0.001f;
          }
          leg_argu_[0].F0 = 10 * leglength_pid_left_.Calculate(
                                     0.65f, this->leg_argu_[0].L0, this->dt_);
          leg_argu_[1].F0 = 10 * leglength_pid_right_.Calculate(
                                     0.65f, this->leg_argu_[1].L0, this->dt_);
        }
        if (fabs(leg_argu_[0].theta) < 1.57) {
          leg_argu_[1].target_theta = leg_argu_[1].theta + chassis_cmd_.y / 1000;
          leg_argu_[0].target_theta = leg_argu_[0].theta;
        }

        if (fabs(leg_argu_[1].theta) < 1.57) {
          leg_argu_[0].target_theta = leg_argu_[0].theta +  chassis_cmd_.y / 1000;
          leg_argu_[1].target_theta = leg_argu_[1].theta;
        }

        if (leg_argu_[0].target_theta > M_PI) {
          leg_argu_[0].target_theta -= 2 * M_PI;
        }
        if (leg_argu_[0].target_theta < -M_PI) {
          leg_argu_[0].target_theta += 2 * M_PI;
        }
        if (leg_argu_[1].target_theta > M_PI) {
          leg_argu_[1].target_theta -= 2 * M_PI;
        }
        if (leg_argu_[1].target_theta < -M_PI) {
          leg_argu_[1].target_theta += 2 * M_PI;
        }
        leg_argu_[0].Tp =
            500 * this->theta_pid_left_.Calculate(leg_argu_[0].target_theta,
                                                 leg_argu_[0].theta, dt_);
        leg_argu_[1].Tp =
            500 * this->theta_pid_right_.Calculate(leg_argu_[1].target_theta,
                                                 leg_argu_[1].theta, dt_);

      } else {
        leg_argu_[0].F0 = 3 * leglength_pid_left_.Calculate(
                                  0.10f, this->leg_argu_[0].L0, this->dt_);
        leg_argu_[1].F0 = 3 * leglength_pid_right_.Calculate(
                                  0.10f, this->leg_argu_[1].L0, this->dt_);

        if ((this->leg_argu_[0].L0 < 0.20) && (this->leg_argu_[1].L0 < 0.20)) {
          leg_argu_[0].Tp = 5.5f * theta_pid_left_.Calculate(
                                      0.1, leg_argu_[0].theta, dt_);
          leg_argu_[1].Tp = 5.5f *theta_pid_right_.Calculate(
                                      0.1, leg_argu_[1].theta, dt_);
          leg_argu_[0].Tp = std::clamp(leg_argu_[0].Tp, -10.0f, 10.0f);
          leg_argu_[1].Tp = std::clamp(leg_argu_[1].Tp, -10.0f, 10.0f);
        } else {
          leg_argu_[0].Tp = 0;
          leg_argu_[1].Tp = 0;
        }
      }


             auto result3 = vmc_left_->VMCinserve(-leg_argu_[0].phi1_, -leg_argu_[0].phi4_, -leg_argu_[0].Tp, leg_argu_[0].F0);
             leg_argu_[0].T1 = std::get<0>(result3);
             leg_argu_[0].T2 = std::get<1>(result3);

             auto result4 = vmc_right_->VMCinserve(-leg_argu_[1].phi1_, -leg_argu_[1].phi4_, -leg_argu_[1].Tp, leg_argu_[1].F0);
             leg_argu_[1].T1 = -std::get<0>(result4);
             leg_argu_[1].T2 = -std::get<1>(result4);

             hip_motor_out_[0] = leg_argu_[0].T1;
             hip_motor_out_[1] = leg_argu_[0].T2;
             hip_motor_out_[2] = leg_argu_[1].T1;
             hip_motor_out_[3] = leg_argu_[1].T2;
        }
    }

    /**
     * @brief out输出
     */
void Control() {
   wheel_motor_out_[0] = std::clamp(wheel_motor_out_[0], -3.50f, 3.50f);
   wheel_motor_out_[1] = std::clamp(wheel_motor_out_[1], -3.50f, 3.50f);
   hip_motor_out_[0] = std::clamp(hip_motor_out_[0], -20.0f, 20.0f);
   hip_motor_out_[1] = std::clamp(hip_motor_out_[1], -20.0f, 20.0f);
   hip_motor_out_[2] = std::clamp(hip_motor_out_[2], -20.0f, 20.0f);
   hip_motor_out_[3] = std::clamp(hip_motor_out_[3], -20.0f, 20.0f);
    /*让使能命令尽量只发一遍*/
   if (this->hip_motor_flag_ == 1) {
    if (this->dm_motor_flag_ == 0) {
       for (int i = 0; i < 2; i++) {
         this->hip_motor_[0]->Enable();
         this->hip_motor_[1]->Enable();
         this->hip_motor_[2]->Enable();
         this->hip_motor_[3]->Enable();
        this->dm_motor_flag_ = 1;}}}

  switch (current_mode_) {
     case RELAX:
      this->wheel_motor_[0]->Relax();
      this->wheel_motor_[1]->Relax();
      this->hip_motor_[0]->Disable();
      this->hip_motor_[1]->Disable();
      this->hip_motor_[2]->Disable();
      this->hip_motor_[3]->Disable();
      hip_motor_flag_ = false;
      dm_motor_flag_ = false;
      break;
    case STAND:
    case ROTOR:
     this->wheel_motor_[0]->TorqueControl(-wheel_motor_out_[0],15.764705);
     this->wheel_motor_[1]->TorqueControl(wheel_motor_out_[1],15.764705);
     hip_motor_[0]->MITControl(0,0,0,0.5,hip_motor_out_[0]);
     hip_motor_[1]->MITControl(0,0,0,0.5,hip_motor_out_[1]);
     hip_motor_[2]->MITControl(0,0,0,0.5,hip_motor_out_[2]);
     hip_motor_[3]->MITControl(0,0,0,0.5,hip_motor_out_[3]);
      // this->wheel_motor_[0]->Relax();
      // this->wheel_motor_[1]->Relax();
      // hip_motor_[0]->MITControl(0,0,0,0,0);
      // hip_motor_[1]->MITControl(0,0,0,0,0);
      // hip_motor_[2]->MITControl(0,0,0,0,0);
      // hip_motor_[3]->MITControl(0,0,0,0,0);
     hip_motor_flag_ = true;
     break;
    case RESET:
      this->wheel_motor_[0]->Relax();
      this->wheel_motor_[1]->Relax();
     hip_motor_[0]->MITControl(0,0,0,0,hip_motor_out_[0]);
     hip_motor_[1]->MITControl(0,0,0,0,hip_motor_out_[1]);
     hip_motor_[2]->MITControl(0,0,0,0,hip_motor_out_[2]);
     hip_motor_[3]->MITControl(0,0,0,0,hip_motor_out_[3]);
     hip_motor_flag_ = true;
     break;}
}

  /**
   * @brief 获取底盘的事件处理器
   * @return LibXR::Event& 事件处理器的引用
   */
    LibXR::Event& GetEvent() { return event_handler_; }

  /**
   * @brief 事件处理器，根据传入的事件ID执行相应操作
   * @param event_id 触发的事件ID
   */
    void EventHandler(uint32_t event_id) {

        switch (static_cast<WheellegEvent>(event_id)) {
            case WheellegEvent::SET_MODE_RELAX: SetMode(Mode::RELAX); break;
            case WheellegEvent::SET_MODE_STAND: SetMode(Mode::STAND); break;
            case WheellegEvent::SET_MODE_ROTOR: SetMode(Mode::ROTOR); break;
            case WheellegEvent::SET_MODE_RESET: SetMode(Mode::RESET); break;
            default: break;
        }

    }

void SetMode(Mode mode) {
    if (mode == current_mode_) {return;}
     if (current_mode_ == RELAX and mode != RELAX ) {
     vmc_left_->Reset();
     vmc_right_->Reset();
     leglength_pid_right_.Reset();
     theta_pid_left_.Reset();
     theta_pid_right_.Reset();
     roll_pid_.Reset();
     move_argu_.x = 0.0f;
     move_argu_.target_x = move_argu_.xhat;
     move_argu_.target_dot_x = 0.0f;
     move_argu_.xhat = 0.0f;
     move_argu_.x_dot_hat = 0.0f;}
     current_mode_ = mode;
}


float AdaptFilter(float wz, float gyro_z, float speed,
                                   float accl, float dt_){
  af_t_.xhatminus = af_t_.xhat + accl * dt_;
  af_t_.error = fabs(wz - gyro_z);
  af_t_.k1 =
      0.00182238811503557f * powf(M_E, 8.78806145711193f * af_t_.error / 3.0f);
  af_t_.k1=std::clamp(af_t_.k1, 0.0f, 1.0f);
  af_t_.xhat = speed + af_t_.k1 * (af_t_.xhatminus - speed);
  return af_t_.xhat;
}


 void OnMonitor() override {}

 private:
    WheellegParam param_;
    Mode current_mode_ = RELAX;
    LibXR::Event event_handler_;

    LegVmc *vmc_left_;
    LegVmc *vmc_right_;
    LibXR::PID<float> leglength_pid_left_;
    LibXR::PID<float> leglength_pid_right_;
    LibXR::PID<float> theta_pid_left_;
    LibXR::PID<float> theta_pid_right_;
    LibXR::PID<float> roll_pid_;

    struct {
        float single_x_dot;
        float phi1_, phi4_;
        float L0, d_L0;
        float theta, d_theta;
        float Tw, Tp;
        float x_dot_pred, Tw_adapt;
        float F0, Fn;
        float T1, T2;
        float Delta_L0, Delta_Tp, Delta_F;
        float target_theta;
    } leg_argu_[2];

    struct {
        float target_x, target_dot_x;
        float xhat = 0, x_dot_hat = 0, last_x_dot = 0, x = 0.0f;
        float x_dot, x_dot_2, accl;
        float x_dot_hat2 = 0, x_hat2 = 0;
        float wz, wz_hat;
        float gyro_ = 0;
        float yaw_plan = 0;
        Vector3 move_vec_ = {0,0,0};
         float target_yaw =0.0f ,target_yaw_dot= 0.0f;
        float target_roll = 0.0f;
        float yaw_force = 0;
        float flytime_ = 0.0f;
        std::array<float, 40> LQR_K{};
    } move_argu_;

  struct {
    float k1, k2;
    float error;
    float xhat = 0;
    float xhatminus = 0;
  } af_t_;

    std::array<DMMotor*, 4> hip_motor_;
    std::array<RMMotor*, 2> wheel_motor_;
    std::array<float, 4> hip_motor_out_ = {0, 0, 0, 0};
    std::array<float, 2> wheel_motor_out_ = {0, 0};

    CMD::ChassisCMD chassis_cmd_;
    CMD *cmd_;
    Euler eulr_ = {};
    Vector3 gyro_ = {};
    Vector3 accl_ = {};
    float yaw_ = 0.0f;
    float yaw_dot_ = 0.0f;
    bool lost_control_ = false;

    float pit_ = 0.0f;
    bool hip_motor_flag_ = false;
    bool dm_motor_flag_ = false;
    bool onground0_flag_ = false;
    bool onground1_flag_ = false;
    uint64_t now_=0;
    uint64_t last_wakeup_ = 0;

    float dt_ = 0.0f;

    LibXR::Mutex mutex_;
    LibXR::Thread thread_;
};
