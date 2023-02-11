// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Objective.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__OBJECTIVE__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__OBJECTIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/objective__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Objective & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Objective & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Objective & msg, bool use_flow_style = false)
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
  const interface::msg::Objective & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Objective & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Objective>()
{
  return "interface::msg::Objective";
}

template<>
inline const char * name<interface::msg::Objective>()
{
  return "interface/msg/Objective";
}

template<>
struct has_fixed_size<interface::msg::Objective>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface::msg::Objective>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface::msg::Objective>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__OBJECTIVE__TRAITS_HPP_
