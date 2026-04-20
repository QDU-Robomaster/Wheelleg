
#pragma once
// clang-format off
/* === MODULE MANIFEST V2 ===
module_description: WheelLegChassis controller
constructor_args:
    cmd: 'cmd'
    referee: 'Referee_0'
    task_stack_depth: 4096
    vmc_left_param:
      leg_4: 0.21
      leg_1: 0.21
      leg_3: 0.25
      leg_2: 0.25
      hip_length: 0.00
    vmc_right_param:
      leg_4: 0.21
      leg_1: 0.21
      leg_3: 0.25
      leg_2: 0.25
      hip_length: 0.00
    param_pid_leglength_0:
      k: 1.0
      p: 900.0
      i: 0.0
      d: 50.0
      i_limit: 50.0
      out_limit: 300.0
      cycle: false
    param_pid_leglength_1:
      k: 1.0
      p: 900.0
      i: 0.0
      d: 50.0
      i_limit: 50.0
      out_limit: 300.0
      cycle: false
    param_pid_theta_0:
      k: 1.0
      p: 15.0
      i: 0.0
      d: 0.0
      i_limit: 0.0
      out_limit: 5.0
      cycle: false
    param_pid_theta_1:
      k: 1.0
      p: 15.0
      i: 0.0
      d: 0.0
      i_limit: 0.0
      out_limit: 5.0
      cycle: false
    param_pid_roll:
      k: 1200.0
      p: 1.0
      i: 0.1
      d: 0.6
      i_limit: 0.0
      out_limit: 100.0
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
      static_F0: [115.0, 115.0]
      wheel_radius: 0.06
      max_speed: 2.8
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
#include <memory>
#include <tuple>
#include "Referee.hpp"
#include "app_framework.hpp"
#include "cycle_value.hpp"
#include "libxr_def.hpp"
#include "libxr_time.hpp"
#include "libxr_type.hpp"
#include "message.hpp"
#include "mutex.hpp"
#include "pid.hpp"
#include "semaphore.hpp"
#include "stm32f407xx.h"
#include "thread.hpp"
#include "timebase.hpp"
#define GRAVITY 9.79f

/*/////////////////////////////////WARNING\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
/*---------------------------您正在审阅高达车的代码---------------------------*/
class Wheelleg : public LibXR::Application {
 public:
  enum class WheellegEvent : uint8_t {
    SET_MODE_RELAX,
    SET_MODE_STAND,
    SET_MODE_ROTOR,
    SET_MODE_RESET,
    SET_MODE_JUMP,
};

  typedef enum : uint8_t { RELAX, STAND, ROTOR, RESET,JUMP,STAIR } Mode;

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
    std::array<LibXR::CycleValue<float>, 4>
        mech_zero;                   /*关节电机偏置零点 单位rad*/
    std::array<float, 2> static_L0;  /*基本腿长 单位m*/
    std::array<float, 2> static_F0;  /*基本推力 单位N */
    float wheel_radius;              /*轮子半径 单位m*/
    float max_speed;                 /*最大速度 单位m/s*/
    float K_Poly_Coefficient[40][6]; /*K矩阵*/
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
             Referee& referee,
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
          referee_(&referee),
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

    for (int i = 0; i < 4; i++) {
      dmmotor_cmd_[i].mode = Motor::ControlMode::MODE_MIT;
      dmmotor_cmd_[i].reduction_ratio = 1.0f;
    }

    for (int i = 0; i < 2; i++) {
      rmmotor_cmd_[i].mode = Motor::ControlMode::MODE_TORQUE;
      rmmotor_cmd_[i].reduction_ratio = 15.765f;
    }

  /*lostcontrol回调*/
  auto lost_ctrl_callback = LibXR::Callback<uint32_t>::Create(
    [](bool in_isr, Wheelleg *wheelleg, uint32_t event_id) {
      UNUSED(in_isr);
      UNUSED(event_id);
    wheelleg->SetMode(RELAX);
    },this);
  cmd_->GetEvent().Register(CMD::CMD_EVENT_LOST_CTRL, lost_ctrl_callback);

    /*模式切换事件回调*/
    auto event_callback = LibXR::Callback<uint32_t>::Create(
        [](bool in_isr, Wheelleg* wheelleg, uint32_t event_id) {
          UNUSED(in_isr);
          wheelleg->EventHandler(event_id);
        },
        this);


   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_RELAX), event_callback);
   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_STAND), event_callback);
   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_ROTOR), event_callback);
   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_RESET), event_callback);
   event_handler_.Register(static_cast<uint32_t>(WheellegEvent::SET_MODE_JUMP), event_callback);
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
        LibXR::Topic::ASyncSubscriber<float> yaw_sub("yawmotor_angle");
        LibXR::Topic::ASyncSubscriber<float> yaw_dot_sub("yawmotor_dot");

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
                wheelleg->body_argum_.yaw_ = yaw_sub.GetData();
                yaw_sub.StartWaiting();
            }
            if (yaw_dot_sub.Available()) {
                wheelleg->body_argum_.yaw_dot_ = yaw_dot_sub.GetData();
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
  }

  /**
   * @brief 更新反馈和状态量
   *
   */
void UpdateFeedback() {

    /*时间update*/
    now_ = LibXR::Timebase::GetMicroseconds();
    dt_ = static_cast<float>(now_ - last_wakeup_) / 1000000.0f;
    last_wakeup_ = now_;

    /*电机update*/
    this->wheel_motor_[0]->Update();
    this->wheel_motor_[1]->Update();
    this->hip_motor_[0]->Update();
    this->hip_motor_[1]->Update();
    this->hip_motor_[2]->Update();
    this->hip_motor_[3]->Update();


    bool wheel_online_now = wheel_motor_[0]->GetFeedback().online and wheel_motor_[1]->GetFeedback().online;
    if (!wheel_online_now) {
      wheel_online_start_time_ = 0;
      body_argum_.C620_ready_flag_ = false;
    } else {
      if (wheel_online_start_time_ == 0) {
        wheel_online_start_time_ = now_;
      }
      body_argum_.C620_ready_flag_ = (now_ - wheel_online_start_time_ >= 3000000ULL);
    }


    /* 虚拟腿角度计算 */
    /* 左腿前关节角度 */
    leg_argum_[0].phi4_ = RangeAnglePI(hip_motor_[0]->GetFeedback().abs_angle - param_.mech_zero[0]);
    leg_argum_[0].omega4_ = hip_motor_[0]->GetFeedback().omega;


    /* 左腿后关节角度 */
    leg_argum_[0].phi1_ =  RangeAnglePI(hip_motor_[1]->GetFeedback().abs_angle - param_.mech_zero[1]);
    leg_argum_[0].omega1_ = hip_motor_[1]->GetFeedback().omega;


    tor1_ = hip_motor_[0]->GetFeedback().torque;
    tor2_ = hip_motor_[1]->GetFeedback().torque;
    error_[0]=hip_motor_[0]->GetFeedback().state;
    error_[1]=hip_motor_[1]->GetFeedback().state;

     /* 右腿前关节角度 */
    leg_argum_[1].phi4_ = RangeAnglePI(-(hip_motor_[2]->GetFeedback().abs_angle - param_.mech_zero[2]));
    leg_argum_[1].omega4_ = -hip_motor_[2]->GetFeedback().omega;

     /* 右腿后关节角度 */
    leg_argum_[1].phi1_ =  RangeAnglePI(-(hip_motor_[3]->GetFeedback().abs_angle +0.07f));
    leg_argum_[1].omega1_ = -hip_motor_[3]->GetFeedback().omega;

    /* 机体pitch计算 */
    body_argum_.pit_ =  RangeAnglePI(eulr_.pit);
    /* 交龙极性 */
    body_argum_.pit_ = -body_argum_.pit_;
    body_argum_.gyro_ = -gyro_.x;

    body_argum_.yaw_ = RangeAnglePI(body_argum_.yaw_);
    body_argum_.yaw_dot_ = body_argum_.yaw_dot_;

    /* 左右腿摆角与腿长计算 */
    /* 注意极性 */
    auto result0 = vmc_left_->VMCsolve(-leg_argum_[0].phi1_, -leg_argum_[0].phi4_, -body_argum_.pit_, body_argum_.gyro_,-leg_argum_[0].omega1_, -leg_argum_[0].omega4_, dt_);
    leg_argum_[0].L0 = std::get<0>(result0);
    leg_argum_[0].d_L0 = std::get<1>(result0);
    leg_argum_[0].theta =  RangeAnglePI(-std::get<2>(result0));
    leg_argum_[0].d_theta = -std::get<3>(result0);

    auto result1 = vmc_right_->VMCsolve(-leg_argum_[1].phi1_, -leg_argum_[1].phi4_, -body_argum_.pit_, body_argum_.gyro_,-leg_argum_[1].omega1_, -leg_argum_[1].omega4_, dt_);
    leg_argum_[1].L0 = std::get<0>(result1);
    leg_argum_[1].d_L0 = std::get<1>(result1);
    leg_argum_[1].theta =  RangeAnglePI(-std::get<2>(result1));
    leg_argum_[1].d_theta = -std::get<3>(result1);

    /*弹簧推力计算*/
    leg_argum_[0].spring_force = vmc_left_->GetSpringForce();
    leg_argum_[1].spring_force = vmc_right_->GetSpringForce();

    /* 位移与速度计算 */
    /* 轮子转速近似于编码器速度 由此推测机体速度 */

    /* 腿摆动导致速度的变化 */
    float leg_xdot_0 = leg_argum_[0].L0 * leg_argum_[0].d_theta * cosf(leg_argum_[0].theta) + leg_argum_[0].d_L0 * sinf(leg_argum_[0].theta);
    float leg_xdot_1 = leg_argum_[1].L0 * leg_argum_[1].d_theta * cosf(leg_argum_[1].theta) + leg_argum_[1].d_L0 * sinf(leg_argum_[1].theta);
    /*注意减速比 两者均向前+*/
    /*左侧轮速*/
    leg_argum_[0].single_x_dot = -wheel_motor_[0]->GetFeedback().omega/15.765f * param_.wheel_radius;
    /*右侧轮速*/
    leg_argum_[1].single_x_dot = wheel_motor_[1]->GetFeedback().omega/15.765f * param_.wheel_radius;
    /* 平均速度估计 */
    body_argum_.last_x_dot = body_argum_.x_dot;
    body_argum_.x_dot = (leg_argum_[0].single_x_dot  + leg_argum_[1].single_x_dot) / 2.0f- 3.14e-07f;
    body_argum_.x_dot_2 = (body_argum_.x_dot - body_argum_.last_x_dot) / dt_;
    body_argum_.x += body_argum_.x_dot * dt_;
    /* 机体角速度 俯视逆时针旋转为正 */
    body_argum_.wz = (-(leg_argum_[0].single_x_dot + leg_xdot_0) + (leg_argum_[1].single_x_dot + leg_xdot_1)) / 0.46f;

    /*避免陀螺仪上电尖峰加速度*/
    if (now_>1000000 and (current_mode_ == STAND or current_mode_ ==JUMP)) {
    /*调用自适应滤波*/
        body_argum_.x_dot_hat = AdaptFilter(
        body_argum_.wz, gyro_.z, (body_argum_.x_dot + (leg_xdot_0+ leg_xdot_1)/ 2.0f), accl_.y * GRAVITY, dt_)
        -(leg_xdot_0 + leg_xdot_1)/2.0f;
        body_argum_.xhat += body_argum_.x_dot_hat * dt_;
    } else if(now_<= 1000000){
        body_argum_.x_dot_hat = (leg_argum_[0].single_x_dot+leg_argum_[1].single_x_dot)/2.0f;
         body_argum_.xhat += body_argum_.x_dot_hat * dt_;
    }
    else if(current_mode_ == ROTOR){
        body_argum_.x_dot_hat = AdaptFilter(
        body_argum_.wz, gyro_.z,  (body_argum_.x_dot + (leg_xdot_0+ leg_xdot_1)/ 2.0f), accl_.y * GRAVITY, dt_)
        -(leg_xdot_0 + leg_xdot_1)/2.0f;
    }

    /* 使用陀螺仪预测速度 */
    leg_argum_[0].x_dot_pred =
          body_argum_.x_dot_hat - this->gyro_.z * 0.23f + accl_.y * dt_ * GRAVITY;
    leg_argum_[1].x_dot_pred =
          body_argum_.x_dot_hat + this->gyro_.z * 0.23f + accl_.y * dt_ * GRAVITY;

    body_argum_.limit_power = 200;
    /*电机粗略功率模型:角速度*力矩*3^(0.5)*K  M3508:K=1 LK9025(35T):K=3 出自山海机甲开源 */
    body_argum_.est_power=1.732f*( fabsf(wheel_motor_[0]->GetFeedback().torque*0.3f/19.2f*15.765f*wheel_motor_[0]->GetFeedback().omega/15.765f) +
        fabsf(wheel_motor_[1]->GetFeedback().torque*0.3f/19.2f*15.765f*wheel_motor_[1]->GetFeedback().omega/15.765f));
    /* 速度限制 设腿长最长时速度约1m/s 腿长0.15时最大速度约2.6 由交龙第一视角得出(根据自家超电)*/
    body_argum_.expspeed= std::clamp(0.5f/(leg_argum_[0].L0+leg_argum_[1].L0+1.5f)+1.7f,0.5f,param_.max_speed);
    if(chassis_cmd_.self_define == CMD::ChasStat::BOOST)
    {
    body_argum_.expspeed *= 1.4f;}
    leg_argum_[0].Delta_F =std::clamp(param_.static_F0[0]-10.0f - 100.0f * (leg_argum_[0].L0 - 0.11f),0.0f,param_.static_F0[0]);
    leg_argum_[1].Delta_F =std::clamp(param_.static_F0[1]-10.0f - 100.0f * (leg_argum_[1].L0 - 0.11f),0.0f,param_.static_F0[1]);
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

  /* 计算目标位移量 */
  switch (current_mode_) {
   case RELAX:
   case STAND:
   case JUMP:
{
   /*速度规划*/
   /* 命令应该控加速度而不是速度? */
   /* 平移速度计算 */
   /* 0.002为最大加速度 即500hz*0.002 梯度式递增减 */
    body_argum_.target_yaw = 0.0f;
    body_argum_.target_yaw_dot = RampTowards(body_argum_.target_yaw_dot, 0.0f, 0.05f);
    if(chassis_cmd_.y>0.05f ){
    body_argum_.target_yaw = atan2f(chassis_cmd_.y,chassis_cmd_.x) - 1.571f;
    body_argum_.target_x =0.0f;
    body_argum_.xhat=0.0f;
    }
    if(chassis_cmd_.y<-0.05f ){
    body_argum_.target_yaw = -atan2f(chassis_cmd_.y,-chassis_cmd_.x) - 1.571f;
    body_argum_.target_x =0.0f;
    body_argum_.xhat=0.0f;
    }


  body_argum_.target_dot_x = RampTowards(body_argum_.target_dot_x,
      chassis_cmd_.y * cosf(body_argum_.yaw_) * body_argum_.expspeed, 0.005f);
    body_argum_.target_dot_x=std::clamp(body_argum_.target_dot_x, -body_argum_.expspeed+fabs(gyro_.z*0.23f),body_argum_.expspeed-fabs(gyro_.z*0.23f));
    /*双yaw零点*/
    // if (yaw_ > M_PI / 2.0f) body_argum_.target_yaw = M_PI;
    // if (yaw_ < -M_PI / 2.0f) body_argum_.target_yaw = M_PI;

    break;
}
   case ROTOR:
    //TODO:旋转时直线速度规划
    body_argum_.target_x =0.0f;
    body_argum_.xhat=0.0f;
    body_argum_.target_dot_x = sinf(body_argum_.yaw_)*chassis_cmd_.y*body_argum_.expspeed/2.5f-cosf(body_argum_.yaw_)*chassis_cmd_.x*body_argum_.expspeed/2.5f;
    body_argum_.target_dot_x  =std::clamp(body_argum_.target_dot_x, -body_argum_.expspeed/2.5f, body_argum_.expspeed/2.5f);
    body_argum_.target_yaw_dot =  RampTowards(body_argum_.target_yaw_dot,
       body_argum_.expspeed / (0.23f * 1.0f) -
    fabsf(std::clamp(fabsf(chassis_cmd_.y*body_argum_.expspeed/2.5f)+fabsf(chassis_cmd_.x*body_argum_.expspeed/2.5f), 0.0f, body_argum_.expspeed/2.5f))/(1.1f*0.23f), 0.05f);
    body_argum_.target_yaw = 0.0f;
    break;
   case RESET:
   case STAIR:
     body_argum_.target_dot_x = 0.0f;
     body_argum_.target_x = 0.0f;
     body_argum_.xhat = 0.0f;
    break;
    default:
    break;
    }


  /* 实际支持力计算 */

  leg_argum_[0].Fn =vmc_left_->GndDetector(hip_motor_[0]->GetFeedback().torque,
            hip_motor_[1]->GetFeedback().torque,accl_.z * GRAVITY, leg_argum_[0].theta,leg_argum_[0].d_theta, this->dt_);

  leg_argum_[1].Fn =  vmc_right_->GndDetector(hip_motor_[3]->GetFeedback().torque,
            hip_motor_[2]->GetFeedback().torque,accl_.z * GRAVITY, leg_argum_[1].theta,leg_argum_[1].d_theta, this->dt_);
      leg_argum_[0].onground_flag_ = true;
      leg_argum_[1].onground_flag_ = true;
  /*离地检测处理*/
  if (((leg_argum_[0].Fn < 40.0f) and (leg_argum_[1].Fn < 40.0f))) {
    this->body_argum_.flytime_ += 1.0f;
    if (this->body_argum_.flytime_ > 4.0f) {
      leg_argum_[0].onground_flag_ = false;
      leg_argum_[1].onground_flag_ = false;
      this->body_argum_.flytime_ = 5.0f;
      this->body_argum_.xhat = 0.0f;
      this->body_argum_.target_x = 0.0f;}
  }else {
    this->body_argum_.flytime_ -= 1.0f;
    if (this->body_argum_.flytime_ < 1.0f) {
      leg_argum_[0].onground_flag_ = true;
      leg_argum_[1].onground_flag_ = true;
      this->body_argum_.flytime_ = 0.0f;
    }
  }


  if (current_mode_ == RELAX || current_mode_ == ROTOR || current_mode_ == STAND|| current_mode_ == JUMP) {
  /* 处理k矩阵 */
      for (int i = 0; i < 40; i++) {
        body_argum_.LQR_K[i] = vmc_left_->Lqr2KCalc(
            &this->param_.K_Poly_Coefficient[i][0], leg_argum_[0].L0,
            leg_argum_[1].L0);}
 float s_limit_k = 1.1f;
 float yaw_limit_k = 3.14f*1.4f;
  if(current_mode_ == ROTOR){
      body_argum_.LQR_K[2] = 0.0f;
      body_argum_.LQR_K[12]= 0.0f;
      body_argum_.LQR_K[22]= 0.0f;
      body_argum_.LQR_K[32]= 0.0f;
      s_limit_k = 0.7f;
      yaw_limit_k = 3.14f*1.8f;
}


  // body_argum_.LQR_K[0]= 0.0f;
  // body_argum_.LQR_K[10]=0.0f;
  // body_argum_.LQR_K[20]=0.0f;
  // body_argum_.LQR_K[30]=0.0f;

/*交龙24青工会摩擦圆限制*/
if (fabsf(body_argum_.x_dot_hat*gyro_.z)>6.5f)
{
  for (int i = 0; i < 4; i++){
      body_argum_.LQR_K[0+i*10] /= 2.0f;
      body_argum_.LQR_K[1+i*10] /= 2.0f;
      body_argum_.LQR_K[2+i*10] /= 2.0f;
      body_argum_.LQR_K[3+i*10] /= 2.0f;}
}

    /* 处理平衡点 应该与腿长和弹舱剩余弹量做拟合 */
      float leg_x =((leg_argum_[0].L0+leg_argum_[1].L0)/2.0f);
      body_argum_.sK_offset =0.0f;
      body_argum_.thetaK_offset_ = 2.67f*powf(leg_x,2)-1.53f*leg_x+0.29f;

      /*补偿偏心离心加速度对于pitch的力矩 w^2*r*M*lc 依据质心上下调整正负*/
      body_argum_.pitK_offset_ = -fabsf(gyro_.z)*fabsf(gyro_.z)*0.0033f*15.f*0.004f-0.004f;

    /*超出输出时削减移动项*/
     /* K增益计算 */
  if (leg_argum_[0].onground_flag_) {
    /*------------------------- 左轮 -----------------------*/
    /*位移输出*/
    leg_argum_[0].Tw_s_lim = std::clamp(
      body_argum_.LQR_K[0] * (-body_argum_.xhat + body_argum_.target_x +body_argum_.sK_offset) +
      body_argum_.LQR_K[1] * (-body_argum_.x_dot_hat + body_argum_.target_dot_x),
      -fabsf(body_argum_.LQR_K[1]*param_.max_speed*s_limit_k),fabsf(body_argum_.LQR_K[1]*param_.max_speed*s_limit_k));
    /*yaw输出*/
    leg_argum_[0].Tw_yaw_lim = std::clamp(
    (body_argum_.LQR_K[2] * (body_argum_.yaw_ + body_argum_.target_yaw) +
    body_argum_.LQR_K[3] * (-gyro_.z + body_argum_.target_yaw_dot)),
    -fabsf(body_argum_.LQR_K[3])*yaw_limit_k,  fabsf(body_argum_.LQR_K[3])*yaw_limit_k);
    /*lqr总输出*/
    leg_argum_[0].Tw = (
      leg_argum_[0].Tw_s_lim+
      leg_argum_[0].Tw_yaw_lim +
      body_argum_.LQR_K[4] * (-leg_argum_[0].theta + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[5] * (-leg_argum_[0].d_theta + 0.0f) +
      body_argum_.LQR_K[6] * (-leg_argum_[1].theta + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[7] * (-leg_argum_[1].d_theta + 0.0f) +
      body_argum_.LQR_K[8] * (-body_argum_.pit_ + body_argum_.pitK_offset_) +
      body_argum_.LQR_K[9] * (-body_argum_.gyro_ + 0.0f));
    /*防打滑力矩*/
    leg_argum_[0].Tw_adapt = 0.2f * (leg_argum_[0].x_dot_pred - leg_argum_[0].single_x_dot) /param_.wheel_radius;

    /*------------------------- 左腿 -----------------------*/
    /*位移输出*/
    leg_argum_[0].Tp_s_lim = std::clamp(
      body_argum_.LQR_K[20] * (-body_argum_.xhat + body_argum_.target_x +body_argum_.sK_offset) +
      body_argum_.LQR_K[21] * (-body_argum_.x_dot_hat + body_argum_.target_dot_x),
      -fabsf(body_argum_.LQR_K[21]*param_.max_speed*s_limit_k),fabsf(body_argum_.LQR_K[21]*param_.max_speed*s_limit_k));
    /*yaw输出*/
    leg_argum_[0].Tp_yaw_lim = std::clamp(
    (body_argum_.LQR_K[22] * (body_argum_.yaw_ + body_argum_.target_yaw) +
     body_argum_.LQR_K[23] * (-gyro_.z + body_argum_.target_yaw_dot)),
    -fabsf(body_argum_.LQR_K[23])*yaw_limit_k, fabsf(body_argum_.LQR_K[23])*yaw_limit_k);
    /*lqr总输出*/
    leg_argum_[0].Tp =  (
      leg_argum_[0].Tp_s_lim +
      leg_argum_[0].Tp_yaw_lim +
      body_argum_.LQR_K[24] * (-leg_argum_[0].theta + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[25] * (-leg_argum_[0].d_theta + 0.0f) +
      body_argum_.LQR_K[26] * (-leg_argum_[1].theta  + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[27] * (-leg_argum_[1].d_theta +  0.0f) +
      body_argum_.LQR_K[28] * (-body_argum_.pit_ + body_argum_.pitK_offset_) +
      body_argum_.LQR_K[29] * (-body_argum_.gyro_ + 0.0f));

    } else {
     leg_argum_[0].Tw = 0.0f;
     leg_argum_[0].Tw_adapt = 0;
     leg_argum_[0].Tp = (body_argum_.LQR_K[24] * (-leg_argum_[0].theta + body_argum_.thetaK_offset_) +
       body_argum_.LQR_K[25] * (-leg_argum_[0].d_theta + 0.0f) +
       body_argum_.LQR_K[26] * (-leg_argum_[1].theta + body_argum_.thetaK_offset_) +
       body_argum_.LQR_K[27] * (-leg_argum_[1].d_theta + 0.0f)); }

  if (leg_argum_[1].onground_flag_) {
    /*------------------------- 右轮 -----------------------*/
    /*位移输出*/
    leg_argum_[1].Tw_s_lim = std::clamp(
      body_argum_.LQR_K[10] * (-body_argum_.xhat + body_argum_.target_x +body_argum_.sK_offset) +
      body_argum_.LQR_K[11] * (-body_argum_.x_dot_hat + body_argum_.target_dot_x),
      -fabsf(body_argum_.LQR_K[11]*param_.max_speed*s_limit_k),fabsf(body_argum_.LQR_K[11]*param_.max_speed*s_limit_k));
    /*yaw输出*/
    leg_argum_[1].Tw_yaw_lim = std::clamp(
    (body_argum_.LQR_K[12] * (body_argum_.yaw_ + body_argum_.target_yaw) +
    body_argum_.LQR_K[13] * (-gyro_.z + body_argum_.target_yaw_dot)),
    -fabsf(body_argum_.LQR_K[13])*yaw_limit_k, fabsf(body_argum_.LQR_K[13])*yaw_limit_k);
    /*lqr总输出*/
     leg_argum_[1].Tw = (
      leg_argum_[1].Tw_s_lim+
      leg_argum_[1].Tw_yaw_lim+
      body_argum_.LQR_K[14] * (-leg_argum_[0].theta + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[15] * (-leg_argum_[0].d_theta +  0.0f) +
      body_argum_.LQR_K[16] * (-leg_argum_[1].theta + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[17] * (-leg_argum_[1].d_theta + 0.0f) +
      body_argum_.LQR_K[18] * (-body_argum_.pit_ + body_argum_.pitK_offset_) +
      body_argum_.LQR_K[19] * (-body_argum_.gyro_ + 0.0f));
    /*防打滑力矩*/
     leg_argum_[1].Tw_adapt = 0.2f * (leg_argum_[1].x_dot_pred - leg_argum_[1].single_x_dot) /param_.wheel_radius;

  /*------------------------- 右腿 -----------------------*/
    /*位移输出*/
    leg_argum_[1].Tp_s_lim = std::clamp(
      body_argum_.LQR_K[30] * (-body_argum_.xhat + body_argum_.target_x +body_argum_.sK_offset) +
      body_argum_.LQR_K[31] * (-body_argum_.x_dot_hat + body_argum_.target_dot_x),
      -fabsf(body_argum_.LQR_K[31]*param_.max_speed*s_limit_k),fabsf(body_argum_.LQR_K[31]*param_.max_speed*s_limit_k));
    /*yaw输出*/
    leg_argum_[1].Tp_yaw_lim = std::clamp(
    (body_argum_.LQR_K[32] * (body_argum_.yaw_ + body_argum_.target_yaw) +
     body_argum_.LQR_K[33] * (-gyro_.z + body_argum_.target_yaw_dot) ),
    -fabsf(body_argum_.LQR_K[33])*yaw_limit_k,fabsf(body_argum_.LQR_K[33])*yaw_limit_k);
      /*lqr总输出*/
      leg_argum_[1].Tp = (
      leg_argum_[1].Tp_s_lim +
      leg_argum_[1].Tp_yaw_lim +
       body_argum_.LQR_K[34] * (-leg_argum_[0].theta +body_argum_.thetaK_offset_) +
       body_argum_.LQR_K[35] * (-leg_argum_[0].d_theta + 0.0f) +
       body_argum_.LQR_K[36] * (-leg_argum_[1].theta + body_argum_.thetaK_offset_) +
       body_argum_.LQR_K[37] * (-leg_argum_[1].d_theta + 0.0f) +
       body_argum_.LQR_K[38] * (-body_argum_.pit_ + body_argum_.pitK_offset_) +
       body_argum_.LQR_K[39] * (-body_argum_.gyro_ + 0.0f));
  } else {
    leg_argum_[1].Tw = 0.0f;
    leg_argum_[1].Tw_adapt = 0.0f;
    leg_argum_[1].Tp = (body_argum_.LQR_K[34] * (-leg_argum_[0].theta + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[35] * (-leg_argum_[0].d_theta + 0.0f) +
      body_argum_.LQR_K[36] * (-leg_argum_[1].theta + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[37] * (-leg_argum_[1].d_theta + 0.0f));}

 /* 腿长控制逻辑 */

  if(chassis_cmd_.self_define == CMD::ChasStat::STRETCH)
    {body_argum_.leg_change_time +=1;
      /*用于飞坡 下台阶 走坡面*/
      if(body_argum_.leg_change_time>20){leg_argum_[0].target_delta_l0 = 0.08f;
      leg_argum_[1].target_delta_l0 = 0.08f; body_argum_.stair_ready_flag = false;}
      /*用于上台阶*/
      if(body_argum_.leg_change_time>150){leg_argum_[0].target_delta_l0 = 0.21f;
      leg_argum_[1].target_delta_l0 = 0.21f; body_argum_.leg_change_time =1001;
      body_argum_.stair_ready_flag = true;}}

/*用于平地行驶*/
 if(chassis_cmd_.self_define == CMD::ChasStat::BOOST)
{body_argum_.leg_change_time =0;
leg_argum_[0].target_delta_l0 = 0.f;
leg_argum_[1].target_delta_l0 = 0.f;
body_argum_.stair_ready_flag = false;}

if(body_argum_.stair_ready_flag and leg_argum_[0].theta>0.5f and leg_argum_[1].theta>0.5f and
  current_mode_ == STAND)
{
/* 上台阶处理 */
body_argum_.leg_change_time = 0;
SetMode(STAIR);
}

    leg_argum_[0].Delta_L0 = RampTowards(leg_argum_[0].Delta_L0, leg_argum_[0].target_delta_l0, 0.0005f);
    leg_argum_[1].Delta_L0 = RampTowards(leg_argum_[1].Delta_L0, leg_argum_[1].target_delta_l0, 0.0005f);
  leg_argum_[0].Delta_L0 =  std::clamp(leg_argum_[0].Delta_L0,-0.06f,0.4f-param_.static_L0[0]);
  leg_argum_[1].Delta_L0 =  std::clamp(leg_argum_[1].Delta_L0,-0.06f,0.4f-param_.static_L0[1]);


    leglength_pid_left_.SetOutLimit(param_.static_F0[0]+100);
    leglength_pid_right_.SetOutLimit(param_.static_F0[1]+100);

    body_argum_.roll_out =roll_pid_.Calculate(0.0f, eulr_.rol, gyro_.y, dt_);
  /* 侧向惯性力矩补偿= (机体质量*0.5+腿质心高度系数*腿长*腿重)*前进平移速度*旋转角速度*腿长/两轮距离, 注意角速度极性 */
  /* 单侧腿推力 = roll推力(交龙使用单环直接出力)+机体加腿静态重力+侧向惯性力矩补偿+pid控制默认腿长 */
  leg_argum_[0].F0 = leg_argum_[0].Delta_F +
    leglength_pid_left_.Calculate(leg_argum_[0].Delta_L0 + param_.static_L0[0], leg_argum_[0].L0,leg_argum_[0].d_L0, dt_) -
    gyro_.z*body_argum_.x_dot_hat*(leg_argum_[0].L0)/0.23f*(10.0f+0.6f*0.9f*(leg_argum_[0].L0+param_.wheel_radius)) +  body_argum_.roll_out;

  leg_argum_[1].F0 = leg_argum_[1].Delta_F +
    leglength_pid_right_.Calculate(leg_argum_[1].Delta_L0 + param_.static_L0[1], leg_argum_[1].L0,leg_argum_[1].d_L0, dt_) +
    gyro_.z*body_argum_.x_dot_hat*(leg_argum_[1].L0)/0.23f*(10.0f+0.6f*0.9f*(leg_argum_[1].L0+param_.wheel_radius)) -  body_argum_.roll_out;
/*跳跃的支持力有别于其他模式的支持力*/
if(current_mode_==JUMP){

 for (int i =0;i<4;i++){dmmotor_cmd_[i].kd = 0.2f;}
    leglength_pid_left_.SetOutLimit(param_.static_F0[0]+100);
    leglength_pid_right_.SetOutLimit(param_.static_F0[1]+100);
body_argum_.jump_time = now_ - body_argum_.jump_start_time;
if
(body_argum_.jump_time < 150000)
/*跳跃预备 收腿*/
{
    leg_argum_[0].F0 = leg_argum_[0].Delta_F +
    leglength_pid_left_.Calculate( 0.12f, leg_argum_[0].L0,leg_argum_[0].d_L0, dt_) -
    gyro_.z*body_argum_.x_dot_hat*(leg_argum_[0].L0)/0.23f*(8.0f+0.5f*0.7f*leg_argum_[0].L0) + body_argum_.roll_out;

  leg_argum_[1].F0 = leg_argum_[1].Delta_F +
    leglength_pid_right_.Calculate(0.12f, leg_argum_[1].L0,leg_argum_[1].d_L0, dt_) +
    gyro_.z*body_argum_.x_dot_hat*(leg_argum_[1].L0)/0.23f*(8.0f+0.5f*0.7f*leg_argum_[1].L0)-body_argum_.roll_out;
}
else if(body_argum_.jump_time < 370000)
/*起跳*/
{
  leg_argum_[0].F0 = vmc_left_->MaxFnSolve(30) + leg_argum_[0].spring_force;
leg_argum_[1].F0 = vmc_right_->MaxFnSolve(30) + leg_argum_[1].spring_force;
}else if(body_argum_.jump_time < 515000)
/*起跳收腿 增加离地高度*/
{


if (leg_argum_[0].L0< 0.14){  leg_argum_[0].F0 = vmc_left_->MaxFnSolve(-7) + leg_argum_[0].spring_force;}
else{  leg_argum_[0].F0 = vmc_left_->MaxFnSolve(-23) + leg_argum_[0].spring_force;}


if (leg_argum_[1].L0< 0.14){  leg_argum_[1].F0 = vmc_right_->MaxFnSolve(-7) + leg_argum_[1].spring_force;}
else{  leg_argum_[1].F0 = vmc_right_->MaxFnSolve(-23) + leg_argum_[1].spring_force;}



}else if(body_argum_.jump_time < 750000)
{

    leg_argum_[0].Tp =2.0f*(
      body_argum_.LQR_K[24] * (-leg_argum_[0].theta + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[25] * (-leg_argum_[0].d_theta + 0.0f) +
      body_argum_.LQR_K[26] * (-leg_argum_[1].theta  + body_argum_.thetaK_offset_) +
      body_argum_.LQR_K[27] * (-leg_argum_[1].d_theta +  0.0f)+
      body_argum_.LQR_K[28] * (-body_argum_.pit_));


  leg_argum_[1].Tp = 2.0f*(
       body_argum_.LQR_K[34] * (-leg_argum_[0].theta +  body_argum_.thetaK_offset_) +
       body_argum_.LQR_K[35] * (-leg_argum_[0].d_theta + 0.0f) +
       body_argum_.LQR_K[36] * (-leg_argum_[1].theta + body_argum_.thetaK_offset_) +
       body_argum_.LQR_K[37] * (-leg_argum_[1].d_theta + 0.0f) +
      body_argum_.LQR_K[38] * (-body_argum_.pit_));

    leg_argum_[0].Tw =std::clamp(
      body_argum_.LQR_K[1] * (-body_argum_.x_dot_hat + body_argum_.target_dot_x),
      -fabsf(body_argum_.LQR_K[1]*param_.max_speed*s_limit_k),fabsf(body_argum_.LQR_K[1]*param_.max_speed*s_limit_k))+
      body_argum_.LQR_K[4] * (-leg_argum_[0].theta + 0.0f) +
      body_argum_.LQR_K[5] * (-leg_argum_[0].d_theta + 0.0f) +
      body_argum_.LQR_K[6] * (-leg_argum_[1].theta + 0.0f) +
      body_argum_.LQR_K[7] * (-leg_argum_[1].d_theta + 0.0f);

 leg_argum_[1].Tw =std::clamp(
      body_argum_.LQR_K[11] * (-body_argum_.x_dot_hat + body_argum_.target_dot_x),
      -fabsf(body_argum_.LQR_K[11]*param_.max_speed*s_limit_k),fabsf(body_argum_.LQR_K[11]*param_.max_speed*s_limit_k))+
      body_argum_.LQR_K[14] * (-leg_argum_[0].theta + 0.0f) +
      body_argum_.LQR_K[15] * (-leg_argum_[0].d_theta +  0.0f) +
      body_argum_.LQR_K[16] * (-leg_argum_[1].theta + 0.0f) +
      body_argum_.LQR_K[17] * (-leg_argum_[1].d_theta + 0.0f);


leg_argum_[0].F0 = std::clamp(12.0f/(leg_argum_[0].L0-0.135f),0.0f,param_.static_F0[0]*2.0f);
leg_argum_[1].F0 = std::clamp(12.0f/(leg_argum_[1].L0-0.135f),0.0f,param_.static_F0[1]*2.0f);

 for (int i =0;i<4;i++){dmmotor_cmd_[i].kd = 1.0f;}

}
else{/*进入普通模式 伸腿缓冲*/
  body_argum_.jump_time =0;
   SetMode(STAND);}
}


  // body_argum_.yaw_force = 0.0f;
  /* 轮毂输出计算 */
  wheel_motor_out_[0] = -(leg_argum_[0].Tw + leg_argum_[0].Tw_adapt);
  wheel_motor_out_[1] = (leg_argum_[1].Tw + leg_argum_[1].Tw_adapt);
   /*偏置腿力矩补偿*/
  this->leg_argum_[0].Delta_Tp = 0.0f;
  this->leg_argum_[1].Delta_Tp = 0.0f;

  auto result3 = vmc_left_->VMCinserve(-leg_argum_[0].phi1_, -leg_argum_[0].phi4_, -(leg_argum_[0].Tp + leg_argum_[0].Delta_Tp), leg_argum_[0].F0-leg_argum_[0].spring_force);
   leg_argum_[0].T1 = std::get<0>(result3);
   leg_argum_[0].T2 = std::get<1>(result3);

  auto result4 = vmc_right_->VMCinserve(-leg_argum_[1].phi1_, -leg_argum_[1].phi4_, -(leg_argum_[1].Tp + leg_argum_[1].Delta_Tp), leg_argum_[1].F0-leg_argum_[1].spring_force);
   leg_argum_[1].T1 = -std::get<0>(result4);
   leg_argum_[1].T2 = -std::get<1>(result4);

      /* 下一次速度预测 xd_pred = A*X*dt + B*U*dt +  xd_now 模型预测效果一般
       * 噪声较大 A,B矩阵调试时均为0.15腿长时值 */
      // leg_argum_[0].x_dot_pred =
      //     ((-57.9674 * leg_argum_[0].theta + 0.2460 * this->pit_) * dt_ +
      //      (7.6489 * (leg_argum_[0].Tw) -
      //       2.0618 * (leg_argum_[0].Tp + leg_argum_[0].Delta_Tp - 1.11)) *
      //          dt_) +
      //     leg_argum_[0].single_x_dot;

      // leg_argum_[1].x_dot_pred =
      //     ((-57.9674 * leg_argum_[1].theta + 0.2460 * this->pit_) * dt_ +
      //      (7.6489 * (leg_argum_[1].Tw) -
      //       2.0618 * (leg_argum_[1].Tp + leg_argum_[1].Delta_Tp - 1.11)) *
      //          dt_) +
      //     leg_argum_[1].single_x_dot;

  hip_motor_out_[0] = leg_argum_[0].T1;
  hip_motor_out_[1] = leg_argum_[0].T2;
  hip_motor_out_[2] = leg_argum_[1].T1;
  hip_motor_out_[3] = leg_argum_[1].T2;

    } else if (current_mode_ == RESET) {
      /* 愚蠢的恢复模式 */
    leglength_pid_left_.SetOutLimit(300);
    leglength_pid_right_.SetOutLimit(300);
/*机体pitch翻倒 两种状态*/
if (body_argum_.pit_ >0.87f)
{
/*机体roll存在两种形态 判断哪条腿先从云台摆过*/
if (eulr_.rol>0.1f)
{
/*让一条腿先到达目标*/

if(fabsf(leg_argum_[0].target_theta+1.57f/3)<0.05f)
{leg_argum_[1].target_theta =  RampForaward(leg_argum_[1].target_theta,-1.57f/3,0.002f);
leg_argum_[1].target_theta =  RangeAnglePI(leg_argum_[1].target_theta);}
else{
leg_argum_[0].target_theta =  RampForaward(leg_argum_[0].target_theta,-1.57f/3,0.002f);
leg_argum_[0].target_theta =  RangeAnglePI(leg_argum_[0].target_theta);}

/*两条腿一起发力*/

}else if (eulr_.rol<-0.1f){
if(fabsf(leg_argum_[1].target_theta+1.57f/3)<0.05f)
{
leg_argum_[0].target_theta =  RampForaward(leg_argum_[0].target_theta,-1.57f/3,0.002f);
leg_argum_[0].target_theta =  RangeAnglePI(leg_argum_[0].target_theta);}
else{
leg_argum_[1].target_theta =  RampForaward(leg_argum_[1].target_theta,-1.57f/3,0.002f);
leg_argum_[1].target_theta =  RangeAnglePI(leg_argum_[1].target_theta);}

}else{
leg_argum_[1].target_theta =  RampForaward(leg_argum_[1].target_theta,0.0f,0.002f);
leg_argum_[0].target_theta =  RampForaward(leg_argum_[0].target_theta,0.0f,0.002f);
leg_argum_[1].target_theta =  RangeAnglePI(leg_argum_[1].target_theta);
leg_argum_[0].target_theta =  RangeAnglePI(leg_argum_[0].target_theta);
}
/*保证腿伸长*/

leg_argum_[0].Tp = 18 * this->theta_pid_left_.Calculate
    (leg_argum_[0].target_theta,leg_argum_[0].theta, dt_);

leg_argum_[0].F0 = 20.0f + leglength_pid_left_.Calculate(
 0.35f, this->leg_argum_[0].L0, this->leg_argum_[0].d_L0, this->dt_);


leg_argum_[1].Tp = 18 * this->theta_pid_right_.Calculate
    (leg_argum_[1].target_theta,leg_argum_[1].theta, dt_);

leg_argum_[1].F0 = 20.0f + leglength_pid_right_.Calculate(
 0.35f, this->leg_argum_[1].L0, this->leg_argum_[1].d_L0, this->dt_);
}
else if(body_argum_.pit_ <-0.87f)
{
if (eulr_.rol>0.1f)
{
/*让一条腿先到达目标*/

if(fabsf(leg_argum_[0].target_theta-1.57f/3)<0.05f)
{leg_argum_[1].target_theta =  RampBack(leg_argum_[1].target_theta,1.57f/3,0.002f);
leg_argum_[1].target_theta =  RangeAnglePI(leg_argum_[1].target_theta);}
else{
leg_argum_[0].target_theta =  RampBack(leg_argum_[0].target_theta,1.57f/3,0.002f);
leg_argum_[0].target_theta =  RangeAnglePI(leg_argum_[0].target_theta);}

/*两条腿一起发力*/

}else if (eulr_.rol<-0.1f){
if(fabsf(leg_argum_[1].target_theta-1.57f/3)<0.05f)
{leg_argum_[0].target_theta =  RampBack(leg_argum_[0].target_theta,1.57f/3,0.002f);
leg_argum_[0].target_theta =  RangeAnglePI(leg_argum_[0].target_theta);}
else{
leg_argum_[1].target_theta =  RampBack(leg_argum_[1].target_theta,1.57f/3,0.002f);
leg_argum_[1].target_theta =  RangeAnglePI(leg_argum_[1].target_theta);}

}else{leg_argum_[1].target_theta =  RampBack(leg_argum_[1].target_theta,0.0f,0.002f);
leg_argum_[0].target_theta =  RampBack(leg_argum_[0].target_theta,0.0f,0.002f);
leg_argum_[1].target_theta =  RangeAnglePI(leg_argum_[1].target_theta);
leg_argum_[0].target_theta =  RangeAnglePI(leg_argum_[0].target_theta);
}


leg_argum_[0].Tp = 18 * this->theta_pid_left_.Calculate
    (leg_argum_[0].target_theta,leg_argum_[0].theta, dt_);

leg_argum_[0].F0 = 20.0f + leglength_pid_left_.Calculate(
 0.35f, this->leg_argum_[0].L0, this->leg_argum_[0].d_L0, this->dt_);

leg_argum_[1].Tp = 18 * this->theta_pid_right_.Calculate
    (leg_argum_[1].target_theta,leg_argum_[1].theta, dt_);

leg_argum_[1].F0 = 20.0f + leglength_pid_right_.Calculate(
 0.35f, this->leg_argum_[1].L0, this->leg_argum_[1].d_L0, this->dt_);
}else{
if(leg_argum_[0].theta<-1.57/2 or leg_argum_[0].theta>1.57)
{
leg_argum_[0].target_theta = RampBack(
  leg_argum_[0].target_theta,0.0f,0.005f);
 leg_argum_[0].target_theta =  RangeAnglePI(leg_argum_[0].target_theta);


leg_argum_[0].Tp = 10 * this->theta_pid_left_.Calculate
    (leg_argum_[0].target_theta,leg_argum_[0].theta, dt_);


leg_argum_[0].Delta_L0 = 0.35f;
leg_argum_[0].F0 = leglength_pid_left_.Calculate(
 leg_argum_[0].Delta_L0, this->leg_argum_[0].L0, this->leg_argum_[0].d_L0, this->dt_);
}else
{
leg_argum_[0].target_theta = RampTowards(
  leg_argum_[0].target_theta,0.0f,0.005f);
 leg_argum_[0].target_theta =  RangeAnglePI(leg_argum_[0].target_theta);

leg_argum_[0].Tp = 10 * this->theta_pid_left_.Calculate
    (leg_argum_[0].target_theta,leg_argum_[0].theta, dt_);

leg_argum_[0].Delta_L0 = 0.05086f/cosf(leg_argum_[0].theta);
leg_argum_[0].Delta_L0 =  std::clamp(leg_argum_[0].Delta_L0,-0.03f,0.35f);
leg_argum_[0].F0 = -20.0f+leglength_pid_left_.Calculate(
 leg_argum_[0].Delta_L0, this->leg_argum_[0].L0, this->leg_argum_[0].d_L0, this->dt_);

}

if(leg_argum_[1].theta<-1.57/2 or leg_argum_[1].theta>1.57)
{

leg_argum_[1].target_theta = RampBack(
  leg_argum_[1].target_theta,0.0f,0.005f);
 leg_argum_[1].target_theta =  RangeAnglePI(leg_argum_[1].target_theta);

leg_argum_[1].Tp = 10 * this->theta_pid_right_.Calculate
    (leg_argum_[1].target_theta,leg_argum_[1].theta, dt_);


leg_argum_[1].Delta_L0 = 0.35f;
leg_argum_[1].F0 =leglength_pid_right_.Calculate(
 leg_argum_[1].Delta_L0, this->leg_argum_[1].L0, this->leg_argum_[1].d_L0, this->dt_);
}else
{
leg_argum_[1].target_theta = RampTowards(
  leg_argum_[1].target_theta,0.0f,0.005f);
 leg_argum_[1].target_theta =  RangeAnglePI(leg_argum_[1].target_theta);

leg_argum_[1].Tp = 10 * this->theta_pid_right_.Calculate
    (leg_argum_[1].target_theta,leg_argum_[1].theta, dt_);

leg_argum_[1].Delta_L0 = 0.05086f/cosf(leg_argum_[1].theta);
leg_argum_[1].Delta_L0 =  std::clamp(leg_argum_[1].Delta_L0,-0.03f,0.35f);
leg_argum_[1].F0 =  -20.0f+leglength_pid_right_.Calculate(
 leg_argum_[1].Delta_L0, this->leg_argum_[1].L0,this->leg_argum_[1].d_L0, this->dt_);
}



}
             auto result3 = vmc_left_->VMCinserve(-leg_argum_[0].phi1_, -leg_argum_[0].phi4_, -leg_argum_[0].Tp,
                leg_argum_[0].F0-leg_argum_[0].spring_force);
             leg_argum_[0].T1 = std::get<0>(result3);
             leg_argum_[0].T2 = std::get<1>(result3);

             auto result4 = vmc_right_->VMCinserve(-leg_argum_[1].phi1_, -leg_argum_[1].phi4_, -leg_argum_[1].Tp,
                leg_argum_[1].F0-leg_argum_[1].spring_force);
             leg_argum_[1].T1 = -std::get<0>(result4);
             leg_argum_[1].T2 = -std::get<1>(result4);

             hip_motor_out_[0] = leg_argum_[0].T1;
             hip_motor_out_[1] = leg_argum_[0].T2;
             hip_motor_out_[2] = leg_argum_[1].T1;
             hip_motor_out_[3] = leg_argum_[1].T2;
        }else if (current_mode_ == STAIR){
    leglength_pid_left_.SetOutLimit(300);
    leglength_pid_right_.SetOutLimit(300);
/*上台阶模式*/
   switch (body_argum_.stair_phase) {
      case 0:
          leg_argum_[0].target_theta = RampTowards(leg_argum_[0].target_theta, 1.57f, 0.01f);
          leg_argum_[1].target_theta = RampTowards(leg_argum_[1].target_theta, 1.57f, 0.01f);
          leg_argum_[0].Delta_L0 = 0.35f;
          leg_argum_[1].Delta_L0 = 0.35f;
          if (fabsf(leg_argum_[0].target_theta - 1.57f) < 0.015f and fabsf(leg_argum_[1].target_theta - 1.57f) < 0.015f){
              body_argum_.stair_phase = 1;}
          break;
      case 1:
          leg_argum_[0].Delta_L0 = RampTowards(leg_argum_[0].Delta_L0, 0.12f, 0.002f);
          leg_argum_[1].Delta_L0 = RampTowards(leg_argum_[1].Delta_L0, 0.12f, 0.002f);
          if (leg_argum_[0].Delta_L0 < 0.121f and leg_argum_[1].Delta_L0 < 0.121f){
              body_argum_.stair_phase = 2;}
          break;
      case 2:
          leg_argum_[0].target_theta = RampTowards(leg_argum_[0].target_theta, 0.0f, 0.01f);
          leg_argum_[1].target_theta = RampTowards(leg_argum_[1].target_theta, 0.0f, 0.01f);
          if (fabsf(leg_argum_[0].target_theta) < 0.015f and fabsf(leg_argum_[1].target_theta) < 0.015f){
              SetMode(RESET);}
          break;
      default:
        break;
      }

      leg_argum_[0].Tp = 15 * theta_pid_left_.Calculate(leg_argum_[0].target_theta, leg_argum_[0].theta, dt_);
      leg_argum_[1].Tp = 15 * theta_pid_right_.Calculate(leg_argum_[1].target_theta, leg_argum_[1].theta, dt_);
      leg_argum_[0].F0 = 1.5f*leglength_pid_left_.Calculate(leg_argum_[0].Delta_L0, leg_argum_[0].L0, leg_argum_[0].d_L0, dt_);
      leg_argum_[1].F0 = 1.5f*leglength_pid_right_.Calculate(leg_argum_[1].Delta_L0, leg_argum_[1].L0, leg_argum_[1].d_L0, dt_);


             auto result3 = vmc_left_->VMCinserve(-leg_argum_[0].phi1_, -leg_argum_[0].phi4_, -leg_argum_[0].Tp,
                leg_argum_[0].F0-leg_argum_[0].spring_force);
             leg_argum_[0].T1 = std::get<0>(result3);
             leg_argum_[0].T2 = std::get<1>(result3);

             auto result4 = vmc_right_->VMCinserve(-leg_argum_[1].phi1_, -leg_argum_[1].phi4_, -leg_argum_[1].Tp,
                leg_argum_[1].F0-leg_argum_[1].spring_force);
             leg_argum_[1].T1 = -std::get<0>(result4);
             leg_argum_[1].T2 = -std::get<1>(result4);

             hip_motor_out_[0] = leg_argum_[0].T1;
             hip_motor_out_[1] = leg_argum_[0].T2;
             hip_motor_out_[2] = leg_argum_[1].T1;
             hip_motor_out_[3] = leg_argum_[1].T2;

    }
}

    /**
     * @brief out输出
     */
void Control() {
   wheel_motor_out_[0] = std::clamp(wheel_motor_out_[0], -6.00f, 6.00f);
   wheel_motor_out_[1] = std::clamp(wheel_motor_out_[1], -6.00f, 6.00f);
   hip_motor_out_[0] = std::clamp(hip_motor_out_[0], -35.0f, 35.0f);
   hip_motor_out_[1] = std::clamp(hip_motor_out_[1], -35.0f, 35.0f);
   hip_motor_out_[2] = std::clamp(hip_motor_out_[2], -35.0f, 35.0f);
   hip_motor_out_[3] = std::clamp(hip_motor_out_[3], -35.0f, 35.0f);

  switch (current_mode_) {
     case RELAX:
      this->wheel_motor_[0]->Relax();
      this->wheel_motor_[1]->Relax();
      this->hip_motor_[0]->Disable();
      this->hip_motor_[1]->Disable();
      this->hip_motor_[2]->Disable();
      this->hip_motor_[3]->Disable();

      break;
    case STAND:
    case ROTOR:

     if (!body_argum_.C620_ready_flag_)
      {
      this->wheel_motor_[0]->Relax();
      this->wheel_motor_[1]->Relax();
      this->hip_motor_[0]->Disable();
      this->hip_motor_[1]->Disable();
      this->hip_motor_[2]->Disable();
      this->hip_motor_[3]->Disable();
      SetMode(RESET);
      }else{

        for (int i = 0; i < 2; i++)
    {this->rmmotor_cmd_[i].torque = wheel_motor_out_[i];
     this->wheel_motor_[i]->Control(rmmotor_cmd_[i]);}


       for (int i =0;i<4;i++){
        if(this->hip_motor_[i]->GetFeedback().state==1)
         {dmmotor_cmd_[i].torque = hip_motor_out_[i];
          dmmotor_cmd_[i].kd = 1.0f;
      hip_motor_[i]->Control(dmmotor_cmd_[i]);}
       else if(this->hip_motor_[i]->GetFeedback().state==0)
        {this->hip_motor_[i]->Enable();}
      else{this->hip_motor_[i]->ClearError();}}



      }

     break;
    case RESET:
      this->wheel_motor_[0]->Relax();
      this->wheel_motor_[1]->Relax();


      /*上电时c620启动较慢 防止关节电机转动轮子导致c620自检失败*/
      if(body_argum_.C620_ready_flag_){
      for (int i =0;i<4;i++){
        if(this->hip_motor_[i]->GetFeedback().state==1)
         {dmmotor_cmd_[i].torque = hip_motor_out_[i];
          dmmotor_cmd_[i].kd = 3.0f;
      hip_motor_[i]->Control(dmmotor_cmd_[i]);}
       else if(this->hip_motor_[i]->GetFeedback().state==0)
        {this->hip_motor_[i]->Enable(); }
      else{this->hip_motor_[i]->ClearError();}
    }
  if (fabsf(leg_argum_[0].theta) <0.15f and fabsf(leg_argum_[1].theta) <0.15f
    and leg_argum_[0].L0<0.17f and leg_argum_[1].L0<0.17f and
    (this->hip_motor_[0]->GetFeedback().state==1 and this->hip_motor_[1]->GetFeedback().state==1
      and this->hip_motor_[2]->GetFeedback().state==1 and this->hip_motor_[3]->GetFeedback().state==1))
{SetMode(STAND);}
      }


      else{
      for (int i =0;i<4;i++){
      dmmotor_cmd_[i].torque = 0;
      dmmotor_cmd_[i].kd = 3.0f;
      hip_motor_[i]->Disable();}}


    break;

    case STAIR:
      this->wheel_motor_[0]->Relax();
      this->wheel_motor_[1]->Relax();
      for (int i =0;i<4;i++){
        if(this->hip_motor_[i]->GetFeedback().state==1)
         {dmmotor_cmd_[i].torque = hip_motor_out_[i];
          dmmotor_cmd_[i].kd = 3.0f;
      hip_motor_[i]->Control(dmmotor_cmd_[i]);}
       else if(this->hip_motor_[i]->GetFeedback().state==0)
        {this->hip_motor_[i]->Enable();}
        else{this->hip_motor_[i]->ClearError();}}
     break;


    case JUMP:
        for (int i = 0; i < 2; i++)
    {this->rmmotor_cmd_[i].torque = wheel_motor_out_[i];
     this->wheel_motor_[i]->Control(rmmotor_cmd_[i]);}


      for (int i =0;i<4;i++){
        if(this->hip_motor_[i]->GetFeedback().state==1)
         {dmmotor_cmd_[i].torque = hip_motor_out_[i];
      hip_motor_[i]->Control(dmmotor_cmd_[i]);}
       else if(this->hip_motor_[i]->GetFeedback().state==0)
        {this->hip_motor_[i]->Enable();}
        else{this->hip_motor_[i]->ClearError();}}


    break;
}
}


  /**
   * @brief 获取底盘的事件处理器
   * @return LibXR::Event& 事件处理器的引用
   */
  LibXR::Event& GetEvent() { return event_handler_; }

  /**
   * @brief  事件处理器，根据传入的事件ID执行相应操作
   * @param event_id 触发的事件ID
   */
    void EventHandler(uint32_t event_id) {

        switch (static_cast<WheellegEvent>(event_id)) {
            case WheellegEvent::SET_MODE_RELAX: SetMode(Mode::RELAX); break;
            case WheellegEvent::SET_MODE_STAND: SetMode(Mode::STAND); break;
            case WheellegEvent::SET_MODE_ROTOR: SetMode(Mode::ROTOR); break;
            case WheellegEvent::SET_MODE_RESET: SetMode(Mode::RESET); break;
            case WheellegEvent::SET_MODE_JUMP: SetMode(Mode::JUMP); break;
            default: break;
        }

    }
  }

void SetMode(Mode mode) {
    if (mode == current_mode_) {return;}
     if ((current_mode_ == RELAX or current_mode_ ==RESET) and mode != RELAX ) {
     vmc_left_->Reset();
     vmc_right_->Reset();
     leglength_pid_right_.Reset();
     leglength_pid_left_.Reset();
     theta_pid_left_.Reset();
     theta_pid_right_.Reset();
     roll_pid_.Reset();
     body_argum_.x = 0.0f;
     body_argum_.target_x = body_argum_.xhat;
     body_argum_.target_dot_x = 0.0f;
     body_argum_.xhat = 0.0f;
     body_argum_.x_dot_hat = 0.0f;
    leg_argum_[0].target_delta_l0 =0.0f;
    leg_argum_[1].target_delta_l0 =0.0f;
    body_argum_.stair_phase = 0;
      }
    if(mode == JUMP){
        body_argum_.jump_start_time = LibXR::Timebase::GetMicroseconds();
    }
    leg_argum_[0].target_theta= leg_argum_[0].theta;
    leg_argum_[1].target_theta= leg_argum_[1].theta;
     current_mode_ = mode;
}

  float AdaptFilter(float wz, float gyro_z, float speed, float accl,
                    float dt_) {
    af_t_.xhatminus = af_t_.xhat + accl * dt_;
    af_t_.error = fabs(wz - gyro_z);
    af_t_.k1 = 0.00182238811503557f *
               powf(M_E, 8.78806145711193f * af_t_.error / 3.0f);
    af_t_.k1 = std::clamp(af_t_.k1, 0.0f, 1.0f);
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
    float tor1_,tor2_;
    float error_[2];
    Referee* referee_;


    struct {
        float single_x_dot;  /*单侧轮位移*/
        float phi1_, phi4_;  /*关节角度*/
        float omega1_, omega4_; /*关节角速度*/
        float L0, d_L0;         /*腿长*/
        float theta, d_theta;     /*虚拟腿角度*/
        float Tw, Tp;             /*控制力矩*/
        float x_dot_pred, Tw_adapt;  /*防打滑*/
        float Tw_yaw_lim, Tp_yaw_lim,Tw_s_lim,Tp_s_lim; /*移动输出限制*/
        float F0, Fn,F1;           /*支持力正逆*/
        float spring_force;   /*弹簧推力*/
        bool onground_flag_ = false;  /*离地标志*/
        float T1, T2;           /*关节输出*/
        float target_delta_l0,Delta_L0 =0, Delta_Tp, Delta_F;   /*部分过度项*/
        float target_theta;               /*恢复模式腿角度*/
    } leg_argum_[2];

    struct {
        /*机体状态*/
         float yaw_,yaw_dot_ ,pit_, gyro_;
        float sK_offset,thetaK_offset_,pitK_offset_;
        float roll_out;        /*位移相关*/
        float target_x, target_dot_x ;
        float xhat = 0, x_dot_hat = 0, last_x_dot = 0, x = 0.0f;
        float x_dot, x_dot_2, accl;
        float expspeed =0.0f;
        uint16_t limit_power = 0;
        /*旋转相关*/
        float wz, wz_hat;
        float target_yaw =0.0f ,target_yaw_dot= 0.0f;
        /*离地相关*/
        bool stair_ready_flag = false;   /*准备上台阶的标志*/
        uint16_t leg_change_time =0;     /*腿长变换时间*/
        float flytime_ = 0.0f;
        uint32_t jump_start_time = 0;
        uint32_t jump_time = 0;
        /*K反馈系数矩阵*/
        std::array<float, 40> LQR_K{};
        float est_power = 0.0f;
        ErrorCode C620_ready_;
        bool C620_ready_flag_ = false;
        uint8_t stair_phase = 0;
    } body_argum_;

  struct {
    float k1, k2;
    float error;
    float xhat = 0;
    float xhatminus = 0;
  } adaptfilter_argum_;

  std::array<DMMotor*, 4> hip_motor_;
  std::array<RMMotor*, 2> wheel_motor_;
  std::array<float, 4> hip_motor_out_ = {0, 0, 0, 0};
  std::array<float, 2> wheel_motor_out_ = {0, 0};

    Motor::MotorCmd dmmotor_cmd_[4]{};
    Motor::MotorCmd rmmotor_cmd_[2]{};

    CMD::ChassisCMD chassis_cmd_;
    CMD *cmd_;
    Euler eulr_ = {};
    Vector3 gyro_ = {};
    Vector3 accl_ = {};


    uint64_t now_=0;
    uint64_t last_wakeup_ = 0;
    float dt_ = 0.0f;

    uint64_t wheel_online_start_time_=0;
    uint16_t ui_step_ = 0;
    uint32_t ui_dyn_step_ =0;

    LibXR::Mutex mutex_;
    LibXR::Thread thread_;


  static constexpr uint16_t UI_SCREEN_W = 1920;
  static constexpr uint16_t UI_SCREEN_H = 1080;
  static constexpr uint16_t UI_LAYER_CHASSIS = 0;
  static constexpr uint16_t UI_ORBIT_RADIUS = 260;
  static constexpr uint16_t UI_ORBIT_DOT_RADIUS = 20;
  static constexpr uint16_t UI_DEFAULT_WIDTH = 1;
  static constexpr uint16_t UI_CHAR_WIDTH = 2;

/*---------------工具函数-------------------------*/
float AdaptFilter(float wz, float gyro_z, float speed,float accl, float dt_){
  /*预测值*/
  adaptfilter_argum_.xhatminus = adaptfilter_argum_.xhat + accl * dt_;
  /*误差大小*/
  adaptfilter_argum_.error = fabs(wz - gyro_z);
  /*权重计算*/
  adaptfilter_argum_.k1 = 0.00182238811503557f * powf(M_E, 8.78806145711193f * adaptfilter_argum_.error / 3.0f);
  adaptfilter_argum_.k1=std::clamp(adaptfilter_argum_.k1, 0.0f, 1.0f);
  /*加权求和*/
  adaptfilter_argum_.xhat = speed + adaptfilter_argum_.k1 * (adaptfilter_argum_.xhatminus - speed);
  return adaptfilter_argum_.xhat;}

float RangeAnglePI(float angle)
{ while (angle > M_PI) {
    angle -= M_2PI;}
  while (angle < -M_PI) {
    angle += M_2PI;}
  return angle;}

float RampTowards(float current, float target, float max_step) {
    float diff = target - current;
    if (diff > max_step) {return current + max_step;}
    if (diff < -max_step) {return current - max_step;}
    return target;}
float RampBack(float current, float target, float max_step) {
    float diff = fabsf(target - current);
    if (diff > max_step) {return current - max_step;}
    return target;}

float RampForaward(float current, float target, float max_step) {
    float diff = fabsf(target - current);
    if (diff > max_step) {return current + max_step;}
    return target;}
};
