// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__MOTOR__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motor & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_left_power
  {
    out << "motor_left_power: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_power, out);
    out << ", ";
  }

  // member: motor_right_power
  {
    out << "motor_right_power: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_left_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_left_power: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_power, out);
    out << "\n";
  }

  // member: motor_right_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_right_power: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::msg::Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Motor & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Motor>()
{
  return "interface::msg::Motor";
}

template<>
inline const char * name<interface::msg::Motor>()
{
  return "interface/msg/Motor";
}

template<>
struct has_fixed_size<interface::msg::Motor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface::msg::Motor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface::msg::Motor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__MOTOR__TRAITS_HPP_
