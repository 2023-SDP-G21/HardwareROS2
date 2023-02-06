// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message:action/Motor.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__ACTION__DETAIL__MOTOR__BUILDER_HPP_
#define MESSAGE__ACTION__DETAIL__MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "message/action/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace message
{

namespace action
{

namespace builder
{

class Init_Motor_Goal_order
{
public:
  Init_Motor_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::message::action::Motor_Goal order(::message::action::Motor_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::action::Motor_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::action::Motor_Goal>()
{
  return message::action::builder::Init_Motor_Goal_order();
}

}  // namespace message


namespace message
{

namespace action
{

namespace builder
{

class Init_Motor_Result_sequence
{
public:
  Init_Motor_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::message::action::Motor_Result sequence(::message::action::Motor_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::action::Motor_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::action::Motor_Result>()
{
  return message::action::builder::Init_Motor_Result_sequence();
}

}  // namespace message


namespace message
{

namespace action
{

namespace builder
{

class Init_Motor_Feedback_partial_sequence
{
public:
  Init_Motor_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::message::action::Motor_Feedback partial_sequence(::message::action::Motor_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::action::Motor_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::action::Motor_Feedback>()
{
  return message::action::builder::Init_Motor_Feedback_partial_sequence();
}

}  // namespace message


namespace message
{

namespace action
{

namespace builder
{

class Init_Motor_SendGoal_Request_goal
{
public:
  explicit Init_Motor_SendGoal_Request_goal(::message::action::Motor_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::message::action::Motor_SendGoal_Request goal(::message::action::Motor_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::action::Motor_SendGoal_Request msg_;
};

class Init_Motor_SendGoal_Request_goal_id
{
public:
  Init_Motor_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_SendGoal_Request_goal goal_id(::message::action::Motor_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Motor_SendGoal_Request_goal(msg_);
  }

private:
  ::message::action::Motor_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::action::Motor_SendGoal_Request>()
{
  return message::action::builder::Init_Motor_SendGoal_Request_goal_id();
}

}  // namespace message


namespace message
{

namespace action
{

namespace builder
{

class Init_Motor_SendGoal_Response_stamp
{
public:
  explicit Init_Motor_SendGoal_Response_stamp(::message::action::Motor_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::message::action::Motor_SendGoal_Response stamp(::message::action::Motor_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::action::Motor_SendGoal_Response msg_;
};

class Init_Motor_SendGoal_Response_accepted
{
public:
  Init_Motor_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_SendGoal_Response_stamp accepted(::message::action::Motor_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Motor_SendGoal_Response_stamp(msg_);
  }

private:
  ::message::action::Motor_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::action::Motor_SendGoal_Response>()
{
  return message::action::builder::Init_Motor_SendGoal_Response_accepted();
}

}  // namespace message


namespace message
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
  ::message::action::Motor_GetResult_Request goal_id(::message::action::Motor_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::action::Motor_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::action::Motor_GetResult_Request>()
{
  return message::action::builder::Init_Motor_GetResult_Request_goal_id();
}

}  // namespace message


namespace message
{

namespace action
{

namespace builder
{

class Init_Motor_GetResult_Response_result
{
public:
  explicit Init_Motor_GetResult_Response_result(::message::action::Motor_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::message::action::Motor_GetResult_Response result(::message::action::Motor_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::action::Motor_GetResult_Response msg_;
};

class Init_Motor_GetResult_Response_status
{
public:
  Init_Motor_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_GetResult_Response_result status(::message::action::Motor_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Motor_GetResult_Response_result(msg_);
  }

private:
  ::message::action::Motor_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::action::Motor_GetResult_Response>()
{
  return message::action::builder::Init_Motor_GetResult_Response_status();
}

}  // namespace message


namespace message
{

namespace action
{

namespace builder
{

class Init_Motor_FeedbackMessage_feedback
{
public:
  explicit Init_Motor_FeedbackMessage_feedback(::message::action::Motor_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::message::action::Motor_FeedbackMessage feedback(::message::action::Motor_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::action::Motor_FeedbackMessage msg_;
};

class Init_Motor_FeedbackMessage_goal_id
{
public:
  Init_Motor_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_FeedbackMessage_feedback goal_id(::message::action::Motor_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Motor_FeedbackMessage_feedback(msg_);
  }

private:
  ::message::action::Motor_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::action::Motor_FeedbackMessage>()
{
  return message::action::builder::Init_Motor_FeedbackMessage_goal_id();
}

}  // namespace message

#endif  // MESSAGE__ACTION__DETAIL__MOTOR__BUILDER_HPP_
