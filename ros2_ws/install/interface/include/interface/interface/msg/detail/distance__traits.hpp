// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Distance.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__DISTANCE__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'distance'
#include "interface/msg/detail/float32__traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Distance & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    to_flow_style_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Distance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance:\n";
    to_block_style_yaml(msg.distance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Distance & msg, bool use_flow_style = false)
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
  const interface::msg::Distance & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Distance & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Distance>()
{
  return "interface::msg::Distance";
}

template<>
inline const char * name<interface::msg::Distance>()
{
  return "interface/msg/Distance";
}

template<>
struct has_fixed_size<interface::msg::Distance>
  : std::integral_constant<bool, has_fixed_size<interface::msg::Float32>::value> {};

template<>
struct has_bounded_size<interface::msg::Distance>
  : std::integral_constant<bool, has_bounded_size<interface::msg::Float32>::value> {};

template<>
struct is_message<interface::msg::Distance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__DISTANCE__TRAITS_HPP_
