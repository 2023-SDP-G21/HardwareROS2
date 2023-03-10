// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Acceleration.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__ACCELERATION__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__ACCELERATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/acceleration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Acceleration & msg,
  std::ostream & out)
{
  out << "{";
  // member: acceleration_x
  {
    out << "acceleration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_x, out);
    out << ", ";
  }

  // member: acceleration_y
  {
    out << "acceleration_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_y, out);
    out << ", ";
  }

  // member: acceleration_z
  {
    out << "acceleration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Acceleration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acceleration_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_x, out);
    out << "\n";
  }

  // member: acceleration_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_y, out);
    out << "\n";
  }

  // member: acceleration_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Acceleration & msg, bool use_flow_style = false)
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
  const interface::msg::Acceleration & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Acceleration & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Acceleration>()
{
  return "interface::msg::Acceleration";
}

template<>
inline const char * name<interface::msg::Acceleration>()
{
  return "interface/msg/Acceleration";
}

template<>
struct has_fixed_size<interface::msg::Acceleration>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface::msg::Acceleration>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface::msg::Acceleration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__ACCELERATION__TRAITS_HPP_
