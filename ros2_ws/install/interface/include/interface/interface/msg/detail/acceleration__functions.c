// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface:msg/Acceleration.idl
// generated code does not contain a copyright notice
#include "interface/msg/detail/acceleration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interface__msg__Acceleration__init(interface__msg__Acceleration * msg)
{
  if (!msg) {
    return false;
  }
  // acceleration_x
  // acceleration_y
  // acceleration_z
  return true;
}

void
interface__msg__Acceleration__fini(interface__msg__Acceleration * msg)
{
  if (!msg) {
    return;
  }
  // acceleration_x
  // acceleration_y
  // acceleration_z
}

bool
interface__msg__Acceleration__are_equal(const interface__msg__Acceleration * lhs, const interface__msg__Acceleration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // acceleration_x
  if (lhs->acceleration_x != rhs->acceleration_x) {
    return false;
  }
  // acceleration_y
  if (lhs->acceleration_y != rhs->acceleration_y) {
    return false;
  }
  // acceleration_z
  if (lhs->acceleration_z != rhs->acceleration_z) {
    return false;
  }
  return true;
}

bool
interface__msg__Acceleration__copy(
  const interface__msg__Acceleration * input,
  interface__msg__Acceleration * output)
{
  if (!input || !output) {
    return false;
  }
  // acceleration_x
  output->acceleration_x = input->acceleration_x;
  // acceleration_y
  output->acceleration_y = input->acceleration_y;
  // acceleration_z
  output->acceleration_z = input->acceleration_z;
  return true;
}

interface__msg__Acceleration *
interface__msg__Acceleration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Acceleration * msg = (interface__msg__Acceleration *)allocator.allocate(sizeof(interface__msg__Acceleration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface__msg__Acceleration));
  bool success = interface__msg__Acceleration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface__msg__Acceleration__destroy(interface__msg__Acceleration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface__msg__Acceleration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface__msg__Acceleration__Sequence__init(interface__msg__Acceleration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Acceleration * data = NULL;

  if (size) {
    data = (interface__msg__Acceleration *)allocator.zero_allocate(size, sizeof(interface__msg__Acceleration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface__msg__Acceleration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface__msg__Acceleration__fini(&data[i - 1]);
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
interface__msg__Acceleration__Sequence__fini(interface__msg__Acceleration__Sequence * array)
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
      interface__msg__Acceleration__fini(&array->data[i]);
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

interface__msg__Acceleration__Sequence *
interface__msg__Acceleration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Acceleration__Sequence * array = (interface__msg__Acceleration__Sequence *)allocator.allocate(sizeof(interface__msg__Acceleration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface__msg__Acceleration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface__msg__Acceleration__Sequence__destroy(interface__msg__Acceleration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface__msg__Acceleration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface__msg__Acceleration__Sequence__are_equal(const interface__msg__Acceleration__Sequence * lhs, const interface__msg__Acceleration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface__msg__Acceleration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface__msg__Acceleration__Sequence__copy(
  const interface__msg__Acceleration__Sequence * input,
  interface__msg__Acceleration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface__msg__Acceleration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface__msg__Acceleration * data =
      (interface__msg__Acceleration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface__msg__Acceleration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface__msg__Acceleration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface__msg__Acceleration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
