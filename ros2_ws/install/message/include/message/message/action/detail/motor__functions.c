// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message:action/Motor.idl
// generated code does not contain a copyright notice
#include "message/action/detail/motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
message__action__Motor_Goal__init(message__action__Motor_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  return true;
}

void
message__action__Motor_Goal__fini(message__action__Motor_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
}

bool
message__action__Motor_Goal__are_equal(const message__action__Motor_Goal * lhs, const message__action__Motor_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (lhs->order != rhs->order) {
    return false;
  }
  return true;
}

bool
message__action__Motor_Goal__copy(
  const message__action__Motor_Goal * input,
  message__action__Motor_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  output->order = input->order;
  return true;
}

message__action__Motor_Goal *
message__action__Motor_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Goal * msg = (message__action__Motor_Goal *)allocator.allocate(sizeof(message__action__Motor_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__action__Motor_Goal));
  bool success = message__action__Motor_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__action__Motor_Goal__destroy(message__action__Motor_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__action__Motor_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__action__Motor_Goal__Sequence__init(message__action__Motor_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Goal * data = NULL;

  if (size) {
    data = (message__action__Motor_Goal *)allocator.zero_allocate(size, sizeof(message__action__Motor_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__action__Motor_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__action__Motor_Goal__fini(&data[i - 1]);
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
message__action__Motor_Goal__Sequence__fini(message__action__Motor_Goal__Sequence * array)
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
      message__action__Motor_Goal__fini(&array->data[i]);
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

message__action__Motor_Goal__Sequence *
message__action__Motor_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Goal__Sequence * array = (message__action__Motor_Goal__Sequence *)allocator.allocate(sizeof(message__action__Motor_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__action__Motor_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__action__Motor_Goal__Sequence__destroy(message__action__Motor_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__action__Motor_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__action__Motor_Goal__Sequence__are_equal(const message__action__Motor_Goal__Sequence * lhs, const message__action__Motor_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__action__Motor_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__action__Motor_Goal__Sequence__copy(
  const message__action__Motor_Goal__Sequence * input,
  message__action__Motor_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__action__Motor_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__action__Motor_Goal * data =
      (message__action__Motor_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__action__Motor_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__action__Motor_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__action__Motor_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
message__action__Motor_Result__init(message__action__Motor_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sequence, 0)) {
    message__action__Motor_Result__fini(msg);
    return false;
  }
  return true;
}

void
message__action__Motor_Result__fini(message__action__Motor_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->sequence);
}

bool
message__action__Motor_Result__are_equal(const message__action__Motor_Result * lhs, const message__action__Motor_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  return true;
}

bool
message__action__Motor_Result__copy(
  const message__action__Motor_Result * input,
  message__action__Motor_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  return true;
}

message__action__Motor_Result *
message__action__Motor_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Result * msg = (message__action__Motor_Result *)allocator.allocate(sizeof(message__action__Motor_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__action__Motor_Result));
  bool success = message__action__Motor_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__action__Motor_Result__destroy(message__action__Motor_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__action__Motor_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__action__Motor_Result__Sequence__init(message__action__Motor_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Result * data = NULL;

  if (size) {
    data = (message__action__Motor_Result *)allocator.zero_allocate(size, sizeof(message__action__Motor_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__action__Motor_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__action__Motor_Result__fini(&data[i - 1]);
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
message__action__Motor_Result__Sequence__fini(message__action__Motor_Result__Sequence * array)
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
      message__action__Motor_Result__fini(&array->data[i]);
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

message__action__Motor_Result__Sequence *
message__action__Motor_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Result__Sequence * array = (message__action__Motor_Result__Sequence *)allocator.allocate(sizeof(message__action__Motor_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__action__Motor_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__action__Motor_Result__Sequence__destroy(message__action__Motor_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__action__Motor_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__action__Motor_Result__Sequence__are_equal(const message__action__Motor_Result__Sequence * lhs, const message__action__Motor_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__action__Motor_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__action__Motor_Result__Sequence__copy(
  const message__action__Motor_Result__Sequence * input,
  message__action__Motor_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__action__Motor_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__action__Motor_Result * data =
      (message__action__Motor_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__action__Motor_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__action__Motor_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__action__Motor_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
message__action__Motor_Feedback__init(message__action__Motor_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->partial_sequence, 0)) {
    message__action__Motor_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
message__action__Motor_Feedback__fini(message__action__Motor_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->partial_sequence);
}

bool
message__action__Motor_Feedback__are_equal(const message__action__Motor_Feedback * lhs, const message__action__Motor_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->partial_sequence), &(rhs->partial_sequence)))
  {
    return false;
  }
  return true;
}

bool
message__action__Motor_Feedback__copy(
  const message__action__Motor_Feedback * input,
  message__action__Motor_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->partial_sequence), &(output->partial_sequence)))
  {
    return false;
  }
  return true;
}

message__action__Motor_Feedback *
message__action__Motor_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Feedback * msg = (message__action__Motor_Feedback *)allocator.allocate(sizeof(message__action__Motor_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__action__Motor_Feedback));
  bool success = message__action__Motor_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__action__Motor_Feedback__destroy(message__action__Motor_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__action__Motor_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__action__Motor_Feedback__Sequence__init(message__action__Motor_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Feedback * data = NULL;

  if (size) {
    data = (message__action__Motor_Feedback *)allocator.zero_allocate(size, sizeof(message__action__Motor_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__action__Motor_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__action__Motor_Feedback__fini(&data[i - 1]);
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
message__action__Motor_Feedback__Sequence__fini(message__action__Motor_Feedback__Sequence * array)
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
      message__action__Motor_Feedback__fini(&array->data[i]);
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

message__action__Motor_Feedback__Sequence *
message__action__Motor_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_Feedback__Sequence * array = (message__action__Motor_Feedback__Sequence *)allocator.allocate(sizeof(message__action__Motor_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__action__Motor_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__action__Motor_Feedback__Sequence__destroy(message__action__Motor_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__action__Motor_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__action__Motor_Feedback__Sequence__are_equal(const message__action__Motor_Feedback__Sequence * lhs, const message__action__Motor_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__action__Motor_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__action__Motor_Feedback__Sequence__copy(
  const message__action__Motor_Feedback__Sequence * input,
  message__action__Motor_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__action__Motor_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__action__Motor_Feedback * data =
      (message__action__Motor_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__action__Motor_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__action__Motor_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__action__Motor_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "message/action/detail/motor__functions.h"

bool
message__action__Motor_SendGoal_Request__init(message__action__Motor_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    message__action__Motor_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!message__action__Motor_Goal__init(&msg->goal)) {
    message__action__Motor_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
message__action__Motor_SendGoal_Request__fini(message__action__Motor_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  message__action__Motor_Goal__fini(&msg->goal);
}

bool
message__action__Motor_SendGoal_Request__are_equal(const message__action__Motor_SendGoal_Request * lhs, const message__action__Motor_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!message__action__Motor_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
message__action__Motor_SendGoal_Request__copy(
  const message__action__Motor_SendGoal_Request * input,
  message__action__Motor_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!message__action__Motor_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

message__action__Motor_SendGoal_Request *
message__action__Motor_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_SendGoal_Request * msg = (message__action__Motor_SendGoal_Request *)allocator.allocate(sizeof(message__action__Motor_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__action__Motor_SendGoal_Request));
  bool success = message__action__Motor_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__action__Motor_SendGoal_Request__destroy(message__action__Motor_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__action__Motor_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__action__Motor_SendGoal_Request__Sequence__init(message__action__Motor_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_SendGoal_Request * data = NULL;

  if (size) {
    data = (message__action__Motor_SendGoal_Request *)allocator.zero_allocate(size, sizeof(message__action__Motor_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__action__Motor_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__action__Motor_SendGoal_Request__fini(&data[i - 1]);
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
message__action__Motor_SendGoal_Request__Sequence__fini(message__action__Motor_SendGoal_Request__Sequence * array)
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
      message__action__Motor_SendGoal_Request__fini(&array->data[i]);
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

message__action__Motor_SendGoal_Request__Sequence *
message__action__Motor_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_SendGoal_Request__Sequence * array = (message__action__Motor_SendGoal_Request__Sequence *)allocator.allocate(sizeof(message__action__Motor_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__action__Motor_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__action__Motor_SendGoal_Request__Sequence__destroy(message__action__Motor_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__action__Motor_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__action__Motor_SendGoal_Request__Sequence__are_equal(const message__action__Motor_SendGoal_Request__Sequence * lhs, const message__action__Motor_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__action__Motor_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__action__Motor_SendGoal_Request__Sequence__copy(
  const message__action__Motor_SendGoal_Request__Sequence * input,
  message__action__Motor_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__action__Motor_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__action__Motor_SendGoal_Request * data =
      (message__action__Motor_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__action__Motor_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__action__Motor_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__action__Motor_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
message__action__Motor_SendGoal_Response__init(message__action__Motor_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    message__action__Motor_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
message__action__Motor_SendGoal_Response__fini(message__action__Motor_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
message__action__Motor_SendGoal_Response__are_equal(const message__action__Motor_SendGoal_Response * lhs, const message__action__Motor_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
message__action__Motor_SendGoal_Response__copy(
  const message__action__Motor_SendGoal_Response * input,
  message__action__Motor_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

message__action__Motor_SendGoal_Response *
message__action__Motor_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_SendGoal_Response * msg = (message__action__Motor_SendGoal_Response *)allocator.allocate(sizeof(message__action__Motor_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__action__Motor_SendGoal_Response));
  bool success = message__action__Motor_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__action__Motor_SendGoal_Response__destroy(message__action__Motor_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__action__Motor_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__action__Motor_SendGoal_Response__Sequence__init(message__action__Motor_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_SendGoal_Response * data = NULL;

  if (size) {
    data = (message__action__Motor_SendGoal_Response *)allocator.zero_allocate(size, sizeof(message__action__Motor_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__action__Motor_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__action__Motor_SendGoal_Response__fini(&data[i - 1]);
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
message__action__Motor_SendGoal_Response__Sequence__fini(message__action__Motor_SendGoal_Response__Sequence * array)
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
      message__action__Motor_SendGoal_Response__fini(&array->data[i]);
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

message__action__Motor_SendGoal_Response__Sequence *
message__action__Motor_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_SendGoal_Response__Sequence * array = (message__action__Motor_SendGoal_Response__Sequence *)allocator.allocate(sizeof(message__action__Motor_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__action__Motor_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__action__Motor_SendGoal_Response__Sequence__destroy(message__action__Motor_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__action__Motor_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__action__Motor_SendGoal_Response__Sequence__are_equal(const message__action__Motor_SendGoal_Response__Sequence * lhs, const message__action__Motor_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__action__Motor_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__action__Motor_SendGoal_Response__Sequence__copy(
  const message__action__Motor_SendGoal_Response__Sequence * input,
  message__action__Motor_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__action__Motor_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__action__Motor_SendGoal_Response * data =
      (message__action__Motor_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__action__Motor_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__action__Motor_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__action__Motor_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
message__action__Motor_GetResult_Request__init(message__action__Motor_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    message__action__Motor_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
message__action__Motor_GetResult_Request__fini(message__action__Motor_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
message__action__Motor_GetResult_Request__are_equal(const message__action__Motor_GetResult_Request * lhs, const message__action__Motor_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
message__action__Motor_GetResult_Request__copy(
  const message__action__Motor_GetResult_Request * input,
  message__action__Motor_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

message__action__Motor_GetResult_Request *
message__action__Motor_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_GetResult_Request * msg = (message__action__Motor_GetResult_Request *)allocator.allocate(sizeof(message__action__Motor_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__action__Motor_GetResult_Request));
  bool success = message__action__Motor_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__action__Motor_GetResult_Request__destroy(message__action__Motor_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__action__Motor_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__action__Motor_GetResult_Request__Sequence__init(message__action__Motor_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_GetResult_Request * data = NULL;

  if (size) {
    data = (message__action__Motor_GetResult_Request *)allocator.zero_allocate(size, sizeof(message__action__Motor_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__action__Motor_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__action__Motor_GetResult_Request__fini(&data[i - 1]);
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
message__action__Motor_GetResult_Request__Sequence__fini(message__action__Motor_GetResult_Request__Sequence * array)
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
      message__action__Motor_GetResult_Request__fini(&array->data[i]);
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

message__action__Motor_GetResult_Request__Sequence *
message__action__Motor_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_GetResult_Request__Sequence * array = (message__action__Motor_GetResult_Request__Sequence *)allocator.allocate(sizeof(message__action__Motor_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__action__Motor_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__action__Motor_GetResult_Request__Sequence__destroy(message__action__Motor_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__action__Motor_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__action__Motor_GetResult_Request__Sequence__are_equal(const message__action__Motor_GetResult_Request__Sequence * lhs, const message__action__Motor_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__action__Motor_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__action__Motor_GetResult_Request__Sequence__copy(
  const message__action__Motor_GetResult_Request__Sequence * input,
  message__action__Motor_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__action__Motor_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__action__Motor_GetResult_Request * data =
      (message__action__Motor_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__action__Motor_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__action__Motor_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__action__Motor_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "message/action/detail/motor__functions.h"

bool
message__action__Motor_GetResult_Response__init(message__action__Motor_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!message__action__Motor_Result__init(&msg->result)) {
    message__action__Motor_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
message__action__Motor_GetResult_Response__fini(message__action__Motor_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  message__action__Motor_Result__fini(&msg->result);
}

bool
message__action__Motor_GetResult_Response__are_equal(const message__action__Motor_GetResult_Response * lhs, const message__action__Motor_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!message__action__Motor_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
message__action__Motor_GetResult_Response__copy(
  const message__action__Motor_GetResult_Response * input,
  message__action__Motor_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!message__action__Motor_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

message__action__Motor_GetResult_Response *
message__action__Motor_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_GetResult_Response * msg = (message__action__Motor_GetResult_Response *)allocator.allocate(sizeof(message__action__Motor_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__action__Motor_GetResult_Response));
  bool success = message__action__Motor_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__action__Motor_GetResult_Response__destroy(message__action__Motor_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__action__Motor_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__action__Motor_GetResult_Response__Sequence__init(message__action__Motor_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_GetResult_Response * data = NULL;

  if (size) {
    data = (message__action__Motor_GetResult_Response *)allocator.zero_allocate(size, sizeof(message__action__Motor_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__action__Motor_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__action__Motor_GetResult_Response__fini(&data[i - 1]);
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
message__action__Motor_GetResult_Response__Sequence__fini(message__action__Motor_GetResult_Response__Sequence * array)
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
      message__action__Motor_GetResult_Response__fini(&array->data[i]);
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

message__action__Motor_GetResult_Response__Sequence *
message__action__Motor_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_GetResult_Response__Sequence * array = (message__action__Motor_GetResult_Response__Sequence *)allocator.allocate(sizeof(message__action__Motor_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__action__Motor_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__action__Motor_GetResult_Response__Sequence__destroy(message__action__Motor_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__action__Motor_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__action__Motor_GetResult_Response__Sequence__are_equal(const message__action__Motor_GetResult_Response__Sequence * lhs, const message__action__Motor_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__action__Motor_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__action__Motor_GetResult_Response__Sequence__copy(
  const message__action__Motor_GetResult_Response__Sequence * input,
  message__action__Motor_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__action__Motor_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__action__Motor_GetResult_Response * data =
      (message__action__Motor_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__action__Motor_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__action__Motor_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__action__Motor_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "message/action/detail/motor__functions.h"

bool
message__action__Motor_FeedbackMessage__init(message__action__Motor_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    message__action__Motor_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!message__action__Motor_Feedback__init(&msg->feedback)) {
    message__action__Motor_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
message__action__Motor_FeedbackMessage__fini(message__action__Motor_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  message__action__Motor_Feedback__fini(&msg->feedback);
}

bool
message__action__Motor_FeedbackMessage__are_equal(const message__action__Motor_FeedbackMessage * lhs, const message__action__Motor_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!message__action__Motor_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
message__action__Motor_FeedbackMessage__copy(
  const message__action__Motor_FeedbackMessage * input,
  message__action__Motor_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!message__action__Motor_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

message__action__Motor_FeedbackMessage *
message__action__Motor_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_FeedbackMessage * msg = (message__action__Motor_FeedbackMessage *)allocator.allocate(sizeof(message__action__Motor_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__action__Motor_FeedbackMessage));
  bool success = message__action__Motor_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message__action__Motor_FeedbackMessage__destroy(message__action__Motor_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message__action__Motor_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message__action__Motor_FeedbackMessage__Sequence__init(message__action__Motor_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_FeedbackMessage * data = NULL;

  if (size) {
    data = (message__action__Motor_FeedbackMessage *)allocator.zero_allocate(size, sizeof(message__action__Motor_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__action__Motor_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__action__Motor_FeedbackMessage__fini(&data[i - 1]);
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
message__action__Motor_FeedbackMessage__Sequence__fini(message__action__Motor_FeedbackMessage__Sequence * array)
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
      message__action__Motor_FeedbackMessage__fini(&array->data[i]);
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

message__action__Motor_FeedbackMessage__Sequence *
message__action__Motor_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message__action__Motor_FeedbackMessage__Sequence * array = (message__action__Motor_FeedbackMessage__Sequence *)allocator.allocate(sizeof(message__action__Motor_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message__action__Motor_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message__action__Motor_FeedbackMessage__Sequence__destroy(message__action__Motor_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message__action__Motor_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message__action__Motor_FeedbackMessage__Sequence__are_equal(const message__action__Motor_FeedbackMessage__Sequence * lhs, const message__action__Motor_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message__action__Motor_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message__action__Motor_FeedbackMessage__Sequence__copy(
  const message__action__Motor_FeedbackMessage__Sequence * input,
  message__action__Motor_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message__action__Motor_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message__action__Motor_FeedbackMessage * data =
      (message__action__Motor_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message__action__Motor_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message__action__Motor_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message__action__Motor_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
