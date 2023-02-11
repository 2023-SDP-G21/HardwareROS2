// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_H_
#define INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Ultrasonic in the package interface.
typedef struct interface__msg__Ultrasonic
{
  float distance;
} interface__msg__Ultrasonic;

// Struct for a sequence of interface__msg__Ultrasonic.
typedef struct interface__msg__Ultrasonic__Sequence
{
  interface__msg__Ultrasonic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__msg__Ultrasonic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_H_
