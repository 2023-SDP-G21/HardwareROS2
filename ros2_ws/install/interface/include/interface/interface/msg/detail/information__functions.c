// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface:msg/Information.idl
// generated code does not contain a copyright notice
#include "interface/msg/detail/information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interface__msg__Information__init(interface__msg__Information * msg)
{
  if (!msg) {
    return false;
  }
  // emergency_stop
  // velocity
  return true;
}

void
interface__msg__Information__fini(interface__msg__Information * msg)
{
  if (!msg) {
    return;
  }
  // emergency_stop
  // velocity
}

bool
interface__msg__Information__are_equal(const interface__msg__Information * lhs, const interface__msg__Information * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  return true;
}

bool
interface__msg__Information__copy(
  const interface__msg__Information * input,
  interface__msg__Information * output)
{
  if (!input || !output) {
    return false;
  }
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // velocity
  output->velocity = input->velocity;
  return true;
}

interface__msg__Information *
interface__msg__Information__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Information * msg = (interface__msg__Information *)allocator.allocate(sizeof(interface__msg__Information), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface__msg__Information));
  bool success = interface__msg__Information__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface__msg__Information__destroy(interface__msg__Information * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface__msg__Information__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface__msg__Information__Sequence__init(interface__msg__Information__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Information * data = NULL;

  if (size) {
    data = (interface__msg__Information *)allocator.zero_allocate(size, sizeof(interface__msg__Information), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface__msg__Information__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface__msg__Information__fini(&data[i - 1]);
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
interface__msg__Information__Sequence__fini(interface__msg__Information__Sequence * array)
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
      interface__msg__Information__fini(&array->data[i]);
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

interface__msg__Information__Sequence *
interface__msg__Information__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Information__Sequence * array = (interface__msg__Information__Sequence *)allocator.allocate(sizeof(interface__msg__Information__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface__msg__Information__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface__msg__Information__Sequence__destroy(interface__msg__Information__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface__msg__Information__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface__msg__Information__Sequence__are_equal(const interface__msg__Information__Sequence * lhs, const interface__msg__Information__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface__msg__Information__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface__msg__Information__Sequence__copy(
  const interface__msg__Information__Sequence * input,
  interface__msg__Information__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface__msg__Information);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface__msg__Information * data =
      (interface__msg__Information *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface__msg__Information__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface__msg__Information__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface__msg__Information__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
