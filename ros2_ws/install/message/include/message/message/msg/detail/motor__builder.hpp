// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__MOTOR__BUILDER_HPP_
#define MESSAGE__MSG__DETAIL__MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "message/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace message
{

namespace msg
{

namespace builder
{

class Init_Motor_motor_right_power
{
public:
  explicit Init_Motor_motor_right_power(::message::msg::Motor & msg)
  : msg_(msg)
  {}
  ::message::msg::Motor motor_right_power(::message::msg::Motor::_motor_right_power_type arg)
  {
    msg_.motor_right_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::msg::Motor msg_;
};

class Init_Motor_motor_left_power
{
public:
  Init_Motor_motor_left_power()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_motor_right_power motor_left_power(::message::msg::Motor::_motor_left_power_type arg)
  {
    msg_.motor_left_power = std::move(arg);
    return Init_Motor_motor_right_power(msg_);
  }

private:
  ::message::msg::Motor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::msg::Motor>()
{
  return message::msg::builder::Init_Motor_motor_left_power();
}

}  // namespace message

#endif  // MESSAGE__MSG__DETAIL__MOTOR__BUILDER_HPP_
