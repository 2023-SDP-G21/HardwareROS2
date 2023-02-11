// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Distance.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__DISTANCE__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Distance_distance
{
public:
  Init_Distance_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface::msg::Distance distance(::interface::msg::Distance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Distance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Distance>()
{
  return interface::msg::builder::Init_Distance_distance();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__DISTANCE__BUILDER_HPP_
