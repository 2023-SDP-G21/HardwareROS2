// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:msg/Acceleration.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__ACCELERATION__STRUCT_H_
#define INTERFACE__MSG__DETAIL__ACCELERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Acceleration in the package interface.
/**
  * positive is front acceleration
 */
typedef struct interface__msg__Acceleration
{
  float acceleration_x;
  /// positive is right sideway acceleration
  float acceleration_y;
  /// positive is up acceleration
  float acceleration_z;
} interface__msg__Acceleration;

// Struct for a sequence of interface__msg__Acceleration.
typedef struct interface__msg__Acceleration__Sequence
{
  interface__msg__Acceleration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__msg__Acceleration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__MSG__DETAIL__ACCELERATION__STRUCT_H_
