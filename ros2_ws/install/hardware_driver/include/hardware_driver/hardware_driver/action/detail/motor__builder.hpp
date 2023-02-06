// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hardware_driver:action/Motor.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__BUILDER_HPP_
#define HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hardware_driver/action/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hardware_driver
{

namespace action
{

namespace builder
{

class Init_Motor_Goal_request
{
public:
  Init_Motor_Goal_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hardware_driver::action::Motor_Goal request(::hardware_driver::action::Motor_Goal::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_driver::action::Motor_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_driver::action::Motor_Goal>()
{
  return hardware_driver::action::builder::Init_Motor_Goal_request();
}

}  // namespace hardware_driver


namespace hardware_driver
{

namespace action
{

namespace builder
{

class Init_Motor_Result_result
{
public:
  Init_Motor_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hardware_driver::action::Motor_Result result(::hardware_driver::action::Motor_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_driver::action::Motor_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_driver::action::Motor_Result>()
{
  return hardware_driver::action::builder::Init_Motor_Result_result();
}

}  // namespace hardware_driver


namespace hardware_driver
{

namespace action
{

namespace builder
{

class Init_Motor_Feedback_feedback
{
public:
  Init_Motor_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hardware_driver::action::Motor_Feedback feedback(::hardware_driver::action::Motor_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_driver::action::Motor_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_driver::action::Motor_Feedback>()
{
  return hardware_driver::action::builder::Init_Motor_Feedback_feedback();
}

}  // namespace hardware_driver


namespace hardware_driver
{

namespace action
{

namespace builder
{

class Init_Motor_SendGoal_Request_goal
{
public:
  explicit Init_Motor_SendGoal_Request_goal(::hardware_driver::action::Motor_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hardware_driver::action::Motor_SendGoal_Request goal(::hardware_driver::action::Motor_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_driver::action::Motor_SendGoal_Request msg_;
};

class Init_Motor_SendGoal_Request_goal_id
{
public:
  Init_Motor_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_SendGoal_Request_goal goal_id(::hardware_driver::action::Motor_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Motor_SendGoal_Request_goal(msg_);
  }

private:
  ::hardware_driver::action::Motor_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_driver::action::Motor_SendGoal_Request>()
{
  return hardware_driver::action::builder::Init_Motor_SendGoal_Request_goal_id();
}

}  // namespace hardware_driver


namespace hardware_driver
{

namespace action
{

namespace builder
{

class Init_Motor_SendGoal_Response_stamp
{
public:
  explicit Init_Motor_SendGoal_Response_stamp(::hardware_driver::action::Motor_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hardware_driver::action::Motor_SendGoal_Response stamp(::hardware_driver::action::Motor_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_driver::action::Motor_SendGoal_Response msg_;
};

class Init_Motor_SendGoal_Response_accepted
{
public:
  Init_Motor_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_SendGoal_Response_stamp accepted(::hardware_driver::action::Motor_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Motor_SendGoal_Response_stamp(msg_);
  }

private:
  ::hardware_driver::action::Motor_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_driver::action::Motor_SendGoal_Response>()
{
  return hardware_driver::action::builder::Init_Motor_SendGoal_Response_accepted();
}

}  // namespace hardware_driver


namespace hardware_driver
{

namespace action
{

namespace builder
{

class Init_Motor_GetResult_Request_goal_id
{
public:
  Init_Motor_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hardware_driver::action::Motor_GetResult_Request goal_id(::hardware_driver::action::Motor_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_driver::action::Motor_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_driver::action::Motor_GetResult_Request>()
{
  return hardware_driver::action::builder::Init_Motor_GetResult_Request_goal_id();
}

}  // namespace hardware_driver


namespace hardware_driver
{

namespace action
{

namespace builder
{

class Init_Motor_GetResult_Response_result
{
public:
  explicit Init_Motor_GetResult_Response_result(::hardware_driver::action::Motor_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hardware_driver::action::Motor_GetResult_Response result(::hardware_driver::action::Motor_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_driver::action::Motor_GetResult_Response msg_;
};

class Init_Motor_GetResult_Response_status
{
public:
  Init_Motor_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_GetResult_Response_result status(::hardware_driver::action::Motor_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Motor_GetResult_Response_result(msg_);
  }

private:
  ::hardware_driver::action::Motor_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_driver::action::Motor_GetResult_Response>()
{
  return hardware_driver::action::builder::Init_Motor_GetResult_Response_status();
}

}  // namespace hardware_driver


namespace hardware_driver
{

namespace action
{

namespace builder
{

class Init_Motor_FeedbackMessage_feedback
{
public:
  explicit Init_Motor_FeedbackMessage_feedback(::hardware_driver::action::Motor_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hardware_driver::action::Motor_FeedbackMessage feedback(::hardware_driver::action::Motor_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_driver::action::Motor_FeedbackMessage msg_;
};

class Init_Motor_FeedbackMessage_goal_id
{
public:
  Init_Motor_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_FeedbackMessage_feedback goal_id(::hardware_driver::action::Motor_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Motor_FeedbackMessage_feedback(msg_);
  }

private:
  ::hardware_driver::action::Motor_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_driver::action::Motor_FeedbackMessage>()
{
  return hardware_driver::action::builder::Init_Motor_FeedbackMessage_goal_id();
}

}  // namespace hardware_driver

#endif  // HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__BUILDER_HPP_
