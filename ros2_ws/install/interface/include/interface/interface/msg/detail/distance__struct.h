// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:msg/Distance.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__DISTANCE__STRUCT_H_
#define INTERFACE__MSG__DETAIL__DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'distance'
#include "interface/msg/detail/float32__struct.h"

/// Struct defined in msg/Distance in the package interface.
typedef struct interface__msg__Distance
{
  interface__msg__Float32 distance;
} interface__msg__Distance;

// Struct for a sequence of interface__msg__Distance.
typedef struct interface__msg__Distance__Sequence
{
  interface__msg__Distance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__msg__Distance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__MSG__DETAIL__DISTANCE__STRUCT_H_
