// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Information.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__INFORMATION__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Information_velocity
{
public:
  explicit Init_Information_velocity(::interface::msg::Information & msg)
  : msg_(msg)
  {}
  ::interface::msg::Information velocity(::interface::msg::Information::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Information msg_;
};

class Init_Information_emergency_stop
{
public:
  Init_Information_emergency_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Information_velocity emergency_stop(::interface::msg::Information::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_Information_velocity(msg_);
  }

private:
  ::interface::msg::Information msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Information>()
{
  return interface::msg::builder::Init_Information_emergency_stop();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__INFORMATION__BUILDER_HPP_
