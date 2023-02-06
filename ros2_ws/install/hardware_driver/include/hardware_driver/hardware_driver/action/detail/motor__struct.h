// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hardware_driver:action/Motor.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__STRUCT_H_
#define HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Motor in the package hardware_driver.
typedef struct hardware_driver__action__Motor_Goal
{
  int32_t request;
} hardware_driver__action__Motor_Goal;

// Struct for a sequence of hardware_driver__action__Motor_Goal.
typedef struct hardware_driver__action__Motor_Goal__Sequence
{
  hardware_driver__action__Motor_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_driver__action__Motor_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Motor in the package hardware_driver.
typedef struct hardware_driver__action__Motor_Result
{
  int32_t result;
} hardware_driver__action__Motor_Result;

// Struct for a sequence of hardware_driver__action__Motor_Result.
typedef struct hardware_driver__action__Motor_Result__Sequence
{
  hardware_driver__action__Motor_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_driver__action__Motor_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Motor in the package hardware_driver.
typedef struct hardware_driver__action__Motor_Feedback
{
  int32_t feedback;
} hardware_driver__action__Motor_Feedback;

// Struct for a sequence of hardware_driver__action__Motor_Feedback.
typedef struct hardware_driver__action__Motor_Feedback__Sequence
{
  hardware_driver__action__Motor_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_driver__action__Motor_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hardware_driver/action/detail/motor__struct.h"

/// Struct defined in action/Motor in the package hardware_driver.
typedef struct hardware_driver__action__Motor_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hardware_driver__action__Motor_Goal goal;
} hardware_driver__action__Motor_SendGoal_Request;

// Struct for a sequence of hardware_driver__action__Motor_SendGoal_Request.
typedef struct hardware_driver__action__Motor_SendGoal_Request__Sequence
{
  hardware_driver__action__Motor_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_driver__action__Motor_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Motor in the package hardware_driver.
typedef struct hardware_driver__action__Motor_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hardware_driver__action__Motor_SendGoal_Response;

// Struct for a sequence of hardware_driver__action__Motor_SendGoal_Response.
typedef struct hardware_driver__action__Motor_SendGoal_Response__Sequence
{
  hardware_driver__action__Motor_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_driver__action__Motor_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Motor in the package hardware_driver.
typedef struct hardware_driver__action__Motor_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hardware_driver__action__Motor_GetResult_Request;

// Struct for a sequence of hardware_driver__action__Motor_GetResult_Request.
typedef struct hardware_driver__action__Motor_GetResult_Request__Sequence
{
  hardware_driver__action__Motor_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_driver__action__Motor_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hardware_driver/action/detail/motor__struct.h"

/// Struct defined in action/Motor in the package hardware_driver.
typedef struct hardware_driver__action__Motor_GetResult_Response
{
  int8_t status;
  hardware_driver__action__Motor_Result result;
} hardware_driver__action__Motor_GetResult_Response;

// Struct for a sequence of hardware_driver__action__Motor_GetResult_Response.
typedef struct hardware_driver__action__Motor_GetResult_Response__Sequence
{
  hardware_driver__action__Motor_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_driver__action__Motor_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hardware_driver/action/detail/motor__struct.h"

/// Struct defined in action/Motor in the package hardware_driver.
typedef struct hardware_driver__action__Motor_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hardware_driver__action__Motor_Feedback feedback;
} hardware_driver__action__Motor_FeedbackMessage;

// Struct for a sequence of hardware_driver__action__Motor_FeedbackMessage.
typedef struct hardware_driver__action__Motor_FeedbackMessage__Sequence
{
  hardware_driver__action__Motor_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_driver__action__Motor_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_DRIVER__ACTION__DETAIL__MOTOR__STRUCT_H_
