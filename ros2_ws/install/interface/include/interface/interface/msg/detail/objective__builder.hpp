// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Objective.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__OBJECTIVE__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__OBJECTIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/objective__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Objective_power
{
public:
  explicit Init_Objective_power(::interface::msg::Objective & msg)
  : msg_(msg)
  {}
  ::interface::msg::Objective power(::interface::msg::Objective::_power_type arg)
  {
    msg_.power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Objective msg_;
};

class Init_Objective_angle
{
public:
  Init_Objective_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Objective_power angle(::interface::msg::Objective::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Objective_power(msg_);
  }

private:
  ::interface::msg::Objective msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Objective>()
{
  return interface::msg::builder::Init_Objective_angle();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__OBJECTIVE__BUILDER_HPP_
