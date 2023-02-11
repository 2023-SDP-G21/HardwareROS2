// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__MOTOR__STRUCT_H_
#define MESSAGE__MSG__DETAIL__MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Motor in the package message.
typedef struct message__msg__Motor
{
  float motor_left_power;
  float motor_right_power;
} message__msg__Motor;

// Struct for a sequence of message__msg__Motor.
typedef struct message__msg__Motor__Sequence
{
  message__msg__Motor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__msg__Motor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__MSG__DETAIL__MOTOR__STRUCT_H_
