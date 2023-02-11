// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Acceleration.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__ACCELERATION__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__ACCELERATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/acceleration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Acceleration_acceleration_z
{
public:
  explicit Init_Acceleration_acceleration_z(::interface::msg::Acceleration & msg)
  : msg_(msg)
  {}
  ::interface::msg::Acceleration acceleration_z(::interface::msg::Acceleration::_acceleration_z_type arg)
  {
    msg_.acceleration_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Acceleration msg_;
};

class Init_Acceleration_acceleration_y
{
public:
  explicit Init_Acceleration_acceleration_y(::interface::msg::Acceleration & msg)
  : msg_(msg)
  {}
  Init_Acceleration_acceleration_z acceleration_y(::interface::msg::Acceleration::_acceleration_y_type arg)
  {
    msg_.acceleration_y = std::move(arg);
    return Init_Acceleration_acceleration_z(msg_);
  }

private:
  ::interface::msg::Acceleration msg_;
};

class Init_Acceleration_acceleration_x
{
public:
  Init_Acceleration_acceleration_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Acceleration_acceleration_y acceleration_x(::interface::msg::Acceleration::_acceleration_x_type arg)
  {
    msg_.acceleration_x = std::move(arg);
    return Init_Acceleration_acceleration_y(msg_);
  }

private:
  ::interface::msg::Acceleration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Acceleration>()
{
  return interface::msg::builder::Init_Acceleration_acceleration_x();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__ACCELERATION__BUILDER_HPP_
