// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_msgs:srv/GetObjectLocation.idl
// generated code does not contain a copyright notice
#include "perception_msgs/srv/detail/get_object_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
perception_msgs__srv__GetObjectLocation_Request__init(perception_msgs__srv__GetObjectLocation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
perception_msgs__srv__GetObjectLocation_Request__fini(perception_msgs__srv__GetObjectLocation_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
perception_msgs__srv__GetObjectLocation_Request__are_equal(const perception_msgs__srv__GetObjectLocation_Request * lhs, const perception_msgs__srv__GetObjectLocation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
perception_msgs__srv__GetObjectLocation_Request__copy(
  const perception_msgs__srv__GetObjectLocation_Request * input,
  perception_msgs__srv__GetObjectLocation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

perception_msgs__srv__GetObjectLocation_Request *
perception_msgs__srv__GetObjectLocation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__srv__GetObjectLocation_Request * msg = (perception_msgs__srv__GetObjectLocation_Request *)allocator.allocate(sizeof(perception_msgs__srv__GetObjectLocation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_msgs__srv__GetObjectLocation_Request));
  bool success = perception_msgs__srv__GetObjectLocation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_msgs__srv__GetObjectLocation_Request__destroy(perception_msgs__srv__GetObjectLocation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_msgs__srv__GetObjectLocation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_msgs__srv__GetObjectLocation_Request__Sequence__init(perception_msgs__srv__GetObjectLocation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__srv__GetObjectLocation_Request * data = NULL;

  if (size) {
    data = (perception_msgs__srv__GetObjectLocation_Request *)allocator.zero_allocate(size, sizeof(perception_msgs__srv__GetObjectLocation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_msgs__srv__GetObjectLocation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_msgs__srv__GetObjectLocation_Request__fini(&data[i - 1]);
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
perception_msgs__srv__GetObjectLocation_Request__Sequence__fini(perception_msgs__srv__GetObjectLocation_Request__Sequence * array)
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
      perception_msgs__srv__GetObjectLocation_Request__fini(&array->data[i]);
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

perception_msgs__srv__GetObjectLocation_Request__Sequence *
perception_msgs__srv__GetObjectLocation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__srv__GetObjectLocation_Request__Sequence * array = (perception_msgs__srv__GetObjectLocation_Request__Sequence *)allocator.allocate(sizeof(perception_msgs__srv__GetObjectLocation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_msgs__srv__GetObjectLocation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_msgs__srv__GetObjectLocation_Request__Sequence__destroy(perception_msgs__srv__GetObjectLocation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_msgs__srv__GetObjectLocation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_msgs__srv__GetObjectLocation_Request__Sequence__are_equal(const perception_msgs__srv__GetObjectLocation_Request__Sequence * lhs, const perception_msgs__srv__GetObjectLocation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_msgs__srv__GetObjectLocation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_msgs__srv__GetObjectLocation_Request__Sequence__copy(
  const perception_msgs__srv__GetObjectLocation_Request__Sequence * input,
  perception_msgs__srv__GetObjectLocation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_msgs__srv__GetObjectLocation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_msgs__srv__GetObjectLocation_Request * data =
      (perception_msgs__srv__GetObjectLocation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_msgs__srv__GetObjectLocation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_msgs__srv__GetObjectLocation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_msgs__srv__GetObjectLocation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `object_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
perception_msgs__srv__GetObjectLocation_Response__init(perception_msgs__srv__GetObjectLocation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // object_pose
  if (!geometry_msgs__msg__Pose__init(&msg->object_pose)) {
    perception_msgs__srv__GetObjectLocation_Response__fini(msg);
    return false;
  }
  return true;
}

void
perception_msgs__srv__GetObjectLocation_Response__fini(perception_msgs__srv__GetObjectLocation_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // object_pose
  geometry_msgs__msg__Pose__fini(&msg->object_pose);
}

bool
perception_msgs__srv__GetObjectLocation_Response__are_equal(const perception_msgs__srv__GetObjectLocation_Response * lhs, const perception_msgs__srv__GetObjectLocation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // object_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->object_pose), &(rhs->object_pose)))
  {
    return false;
  }
  return true;
}

bool
perception_msgs__srv__GetObjectLocation_Response__copy(
  const perception_msgs__srv__GetObjectLocation_Response * input,
  perception_msgs__srv__GetObjectLocation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // object_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->object_pose), &(output->object_pose)))
  {
    return false;
  }
  return true;
}

perception_msgs__srv__GetObjectLocation_Response *
perception_msgs__srv__GetObjectLocation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__srv__GetObjectLocation_Response * msg = (perception_msgs__srv__GetObjectLocation_Response *)allocator.allocate(sizeof(perception_msgs__srv__GetObjectLocation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_msgs__srv__GetObjectLocation_Response));
  bool success = perception_msgs__srv__GetObjectLocation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_msgs__srv__GetObjectLocation_Response__destroy(perception_msgs__srv__GetObjectLocation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_msgs__srv__GetObjectLocation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_msgs__srv__GetObjectLocation_Response__Sequence__init(perception_msgs__srv__GetObjectLocation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__srv__GetObjectLocation_Response * data = NULL;

  if (size) {
    data = (perception_msgs__srv__GetObjectLocation_Response *)allocator.zero_allocate(size, sizeof(perception_msgs__srv__GetObjectLocation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_msgs__srv__GetObjectLocation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_msgs__srv__GetObjectLocation_Response__fini(&data[i - 1]);
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
perception_msgs__srv__GetObjectLocation_Response__Sequence__fini(perception_msgs__srv__GetObjectLocation_Response__Sequence * array)
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
      perception_msgs__srv__GetObjectLocation_Response__fini(&array->data[i]);
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

perception_msgs__srv__GetObjectLocation_Response__Sequence *
perception_msgs__srv__GetObjectLocation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__srv__GetObjectLocation_Response__Sequence * array = (perception_msgs__srv__GetObjectLocation_Response__Sequence *)allocator.allocate(sizeof(perception_msgs__srv__GetObjectLocation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_msgs__srv__GetObjectLocation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_msgs__srv__GetObjectLocation_Response__Sequence__destroy(perception_msgs__srv__GetObjectLocation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_msgs__srv__GetObjectLocation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_msgs__srv__GetObjectLocation_Response__Sequence__are_equal(const perception_msgs__srv__GetObjectLocation_Response__Sequence * lhs, const perception_msgs__srv__GetObjectLocation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_msgs__srv__GetObjectLocation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_msgs__srv__GetObjectLocation_Response__Sequence__copy(
  const perception_msgs__srv__GetObjectLocation_Response__Sequence * input,
  perception_msgs__srv__GetObjectLocation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_msgs__srv__GetObjectLocation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_msgs__srv__GetObjectLocation_Response * data =
      (perception_msgs__srv__GetObjectLocation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_msgs__srv__GetObjectLocation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_msgs__srv__GetObjectLocation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_msgs__srv__GetObjectLocation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
