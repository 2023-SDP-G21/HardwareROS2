// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__ULTRASONIC__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__ULTRASONIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/ultrasonic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ultrasonic & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ultrasonic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ultrasonic & msg, bool use_flow_style = false)
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
  const interface::msg::Ultrasonic & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Ultrasonic & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Ultrasonic>()
{
  return "interface::msg::Ultrasonic";
}

template<>
inline const char * name<interface::msg::Ultrasonic>()
{
  return "interface/msg/Ultrasonic";
}

template<>
struct has_fixed_size<interface::msg::Ultrasonic>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface::msg::Ultrasonic>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface::msg::Ultrasonic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__ULTRASONIC__TRAITS_HPP_
