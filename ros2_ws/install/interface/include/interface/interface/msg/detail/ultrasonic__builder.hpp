// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/ultrasonic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Ultrasonic_distance
{
public:
  Init_Ultrasonic_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface::msg::Ultrasonic distance(::interface::msg::Ultrasonic::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Ultrasonic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Ultrasonic>()
{
  return interface::msg::builder::Init_Ultrasonic_distance();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_
