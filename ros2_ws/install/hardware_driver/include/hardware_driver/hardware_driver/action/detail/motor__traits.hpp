// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hardware_driver:action/Motor.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__TRAITS_HPP_
#define HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hardware_driver/action/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hardware_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const Motor_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_driver

namespace rosidl_generator_traits
{

[[deprecated("use hardware_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_driver::action::Motor_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_driver::action::Motor_Goal & msg)
{
  return hardware_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_driver::action::Motor_Goal>()
{
  return "hardware_driver::action::Motor_Goal";
}

template<>
inline const char * name<hardware_driver::action::Motor_Goal>()
{
  return "hardware_driver/action/Motor_Goal";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hardware_driver::action::Motor_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hardware_driver::action::Motor_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hardware_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const Motor_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_driver

namespace rosidl_generator_traits
{

[[deprecated("use hardware_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_driver::action::Motor_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_driver::action::Motor_Result & msg)
{
  return hardware_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_driver::action::Motor_Result>()
{
  return "hardware_driver::action::Motor_Result";
}

template<>
inline const char * name<hardware_driver::action::Motor_Result>()
{
  return "hardware_driver/action/Motor_Result";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hardware_driver::action::Motor_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hardware_driver::action::Motor_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hardware_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const Motor_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_driver

namespace rosidl_generator_traits
{

[[deprecated("use hardware_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_driver::action::Motor_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_driver::action::Motor_Feedback & msg)
{
  return hardware_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_driver::action::Motor_Feedback>()
{
  return "hardware_driver::action::Motor_Feedback";
}

template<>
inline const char * name<hardware_driver::action::Motor_Feedback>()
{
  return "hardware_driver/action/Motor_Feedback";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hardware_driver::action::Motor_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hardware_driver::action::Motor_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "hardware_driver/action/detail/motor__traits.hpp"

namespace hardware_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const Motor_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_driver

namespace rosidl_generator_traits
{

[[deprecated("use hardware_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_driver::action::Motor_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_driver::action::Motor_SendGoal_Request & msg)
{
  return hardware_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_driver::action::Motor_SendGoal_Request>()
{
  return "hardware_driver::action::Motor_SendGoal_Request";
}

template<>
inline const char * name<hardware_driver::action::Motor_SendGoal_Request>()
{
  return "hardware_driver/action/Motor_SendGoal_Request";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<hardware_driver::action::Motor_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hardware_driver::action::Motor_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<hardware_driver::action::Motor_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hardware_driver::action::Motor_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace hardware_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const Motor_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_driver

namespace rosidl_generator_traits
{

[[deprecated("use hardware_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_driver::action::Motor_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_driver::action::Motor_SendGoal_Response & msg)
{
  return hardware_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_driver::action::Motor_SendGoal_Response>()
{
  return "hardware_driver::action::Motor_SendGoal_Response";
}

template<>
inline const char * name<hardware_driver::action::Motor_SendGoal_Response>()
{
  return "hardware_driver/action/Motor_SendGoal_Response";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hardware_driver::action::Motor_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hardware_driver::action::Motor_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hardware_driver::action::Motor_SendGoal>()
{
  return "hardware_driver::action::Motor_SendGoal";
}

template<>
inline const char * name<hardware_driver::action::Motor_SendGoal>()
{
  return "hardware_driver/action/Motor_SendGoal";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<hardware_driver::action::Motor_SendGoal_Request>::value &&
    has_fixed_size<hardware_driver::action::Motor_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<hardware_driver::action::Motor_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<hardware_driver::action::Motor_SendGoal_Request>::value &&
    has_bounded_size<hardware_driver::action::Motor_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<hardware_driver::action::Motor_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<hardware_driver::action::Motor_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hardware_driver::action::Motor_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace hardware_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const Motor_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_driver

namespace rosidl_generator_traits
{

[[deprecated("use hardware_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_driver::action::Motor_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_driver::action::Motor_GetResult_Request & msg)
{
  return hardware_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_driver::action::Motor_GetResult_Request>()
{
  return "hardware_driver::action::Motor_GetResult_Request";
}

template<>
inline const char * name<hardware_driver::action::Motor_GetResult_Request>()
{
  return "hardware_driver/action/Motor_GetResult_Request";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hardware_driver::action::Motor_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hardware_driver::action::Motor_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "hardware_driver/action/detail/motor__traits.hpp"

namespace hardware_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const Motor_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_driver

namespace rosidl_generator_traits
{

[[deprecated("use hardware_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_driver::action::Motor_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_driver::action::Motor_GetResult_Response & msg)
{
  return hardware_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_driver::action::Motor_GetResult_Response>()
{
  return "hardware_driver::action::Motor_GetResult_Response";
}

template<>
inline const char * name<hardware_driver::action::Motor_GetResult_Response>()
{
  return "hardware_driver/action/Motor_GetResult_Response";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<hardware_driver::action::Motor_Result>::value> {};

template<>
struct has_bounded_size<hardware_driver::action::Motor_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<hardware_driver::action::Motor_Result>::value> {};

template<>
struct is_message<hardware_driver::action::Motor_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hardware_driver::action::Motor_GetResult>()
{
  return "hardware_driver::action::Motor_GetResult";
}

template<>
inline const char * name<hardware_driver::action::Motor_GetResult>()
{
  return "hardware_driver/action/Motor_GetResult";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<hardware_driver::action::Motor_GetResult_Request>::value &&
    has_fixed_size<hardware_driver::action::Motor_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<hardware_driver::action::Motor_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<hardware_driver::action::Motor_GetResult_Request>::value &&
    has_bounded_size<hardware_driver::action::Motor_GetResult_Response>::value
  >
{
};

template<>
struct is_service<hardware_driver::action::Motor_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<hardware_driver::action::Motor_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hardware_driver::action::Motor_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "hardware_driver/action/detail/motor__traits.hpp"

namespace hardware_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const Motor_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_driver

namespace rosidl_generator_traits
{

[[deprecated("use hardware_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_driver::action::Motor_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_driver::action::Motor_FeedbackMessage & msg)
{
  return hardware_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_driver::action::Motor_FeedbackMessage>()
{
  return "hardware_driver::action::Motor_FeedbackMessage";
}

template<>
inline const char * name<hardware_driver::action::Motor_FeedbackMessage>()
{
  return "hardware_driver/action/Motor_FeedbackMessage";
}

template<>
struct has_fixed_size<hardware_driver::action::Motor_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<hardware_driver::action::Motor_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hardware_driver::action::Motor_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<hardware_driver::action::Motor_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hardware_driver::action::Motor_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<hardware_driver::action::Motor>
  : std::true_type
{
};

template<>
struct is_action_goal<hardware_driver::action::Motor_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<hardware_driver::action::Motor_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<hardware_driver::action::Motor_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__TRAITS_HPP_
