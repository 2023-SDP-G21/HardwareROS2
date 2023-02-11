// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:msg/Information.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__INFORMATION__STRUCT_H_
#define INTERFACE__MSG__DETAIL__INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Information in the package interface.
typedef struct interface__msg__Information
{
  bool emergency_stop;
  float velocity;
} interface__msg__Information;

// Struct for a sequence of interface__msg__Information.
typedef struct interface__msg__Information__Sequence
{
  interface__msg__Information * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__msg__Information__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__MSG__DETAIL__INFORMATION__STRUCT_H_
