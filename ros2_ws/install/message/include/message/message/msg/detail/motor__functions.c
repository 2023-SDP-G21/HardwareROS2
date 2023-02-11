// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message:msg/Motor.idl
// generated code does not contain a copyright notice
#include "message/msg/detail/motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
message__msg__Motor__init(message__msg__Motor * msg)
{
  if (!msg) {
    return false;
  }
  // motor_left_power
  // motor_right_power
  return true;
}

void
message__msg__Motor__fini(message__msg__Motor * msg)
{
  if (!msg) {
    return;
  }
  // motor_left_power
  // motor_right_power
}

bool
message__msg__Motor__are_equal(const message__msg__Motor * lhs, const message__msg__Motor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_left_power
  if (lhs->motor_left_power != rhs->motor_left_power) {
    return false;
  }
  // motor_right_power
  if (lhs->motor_right_power != rhs->motor_right_power) {
    return false;
  }
  return true;
}

bool
message__msg__Motor__copy(
  const message__msg__Motor * input,
  message__msg__Motor * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_left_power
  output->motor_left_power = input->motor_left_power;
  // motor_right_power
  output->motor_right_power = input->motor_right_power;
  return true;
}

message__msg__Motor *
message__msg__Motor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__msg__Motor * msg = (message__msg__Motor *)allocator.allocate(sizeof(message__msg__Motor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__msg__Motor));
  bool success = message__msg__Motor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__msg__Motor__destroy(message__msg__Motor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__msg__Motor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__msg__Motor__Sequence__init(message__msg__Motor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__msg__Motor * data = NULL;

  if (size) {
    data = (message__msg__Motor *)allocator.zero_allocate(size, sizeof(message__msg__Motor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__msg__Motor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__msg__Motor__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
message__msg__Motor__Sequence__fini(message__msg__Motor__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message__msg__Motor__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

message__msg__Motor__Sequence *
message__msg__Motor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__msg__Motor__Sequence * array = (message__msg__Motor__Sequence *)allocator.allocate(sizeof(message__msg__Motor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__msg__Motor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__msg__Motor__Sequence__destroy(message__msg__Motor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__msg__Motor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__msg__Motor__Sequence__are_equal(const message__msg__Motor__Sequence * lhs, const message__msg__Motor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__msg__Motor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__msg__Motor__Sequence__copy(
  const message__msg__Motor__Sequence * input,
  message__msg__Motor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__msg__Motor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__msg__Motor * data =
      (message__msg__Motor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__msg__Motor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__msg__Motor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__msg__Motor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
