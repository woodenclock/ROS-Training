// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_velocity_msg:msg/SimpleVelocity.idl
// generated code does not contain a copyright notice
#include "simple_velocity_msg/msg/detail/simple_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
simple_velocity_msg__msg__SimpleVelocity__init(simple_velocity_msg__msg__SimpleVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // linear_velocity
  // angular_velocity
  return true;
}

void
simple_velocity_msg__msg__SimpleVelocity__fini(simple_velocity_msg__msg__SimpleVelocity * msg)
{
  if (!msg) {
    return;
  }
  // linear_velocity
  // angular_velocity
}

bool
simple_velocity_msg__msg__SimpleVelocity__are_equal(const simple_velocity_msg__msg__SimpleVelocity * lhs, const simple_velocity_msg__msg__SimpleVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_velocity
  if (lhs->linear_velocity != rhs->linear_velocity) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  return true;
}

bool
simple_velocity_msg__msg__SimpleVelocity__copy(
  const simple_velocity_msg__msg__SimpleVelocity * input,
  simple_velocity_msg__msg__SimpleVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_velocity
  output->linear_velocity = input->linear_velocity;
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  return true;
}

simple_velocity_msg__msg__SimpleVelocity *
simple_velocity_msg__msg__SimpleVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_velocity_msg__msg__SimpleVelocity * msg = (simple_velocity_msg__msg__SimpleVelocity *)allocator.allocate(sizeof(simple_velocity_msg__msg__SimpleVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_velocity_msg__msg__SimpleVelocity));
  bool success = simple_velocity_msg__msg__SimpleVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simple_velocity_msg__msg__SimpleVelocity__destroy(simple_velocity_msg__msg__SimpleVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simple_velocity_msg__msg__SimpleVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simple_velocity_msg__msg__SimpleVelocity__Sequence__init(simple_velocity_msg__msg__SimpleVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_velocity_msg__msg__SimpleVelocity * data = NULL;

  if (size) {
    data = (simple_velocity_msg__msg__SimpleVelocity *)allocator.zero_allocate(size, sizeof(simple_velocity_msg__msg__SimpleVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_velocity_msg__msg__SimpleVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_velocity_msg__msg__SimpleVelocity__fini(&data[i - 1]);
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
simple_velocity_msg__msg__SimpleVelocity__Sequence__fini(simple_velocity_msg__msg__SimpleVelocity__Sequence * array)
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
      simple_velocity_msg__msg__SimpleVelocity__fini(&array->data[i]);
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

simple_velocity_msg__msg__SimpleVelocity__Sequence *
simple_velocity_msg__msg__SimpleVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_velocity_msg__msg__SimpleVelocity__Sequence * array = (simple_velocity_msg__msg__SimpleVelocity__Sequence *)allocator.allocate(sizeof(simple_velocity_msg__msg__SimpleVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simple_velocity_msg__msg__SimpleVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simple_velocity_msg__msg__SimpleVelocity__Sequence__destroy(simple_velocity_msg__msg__SimpleVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simple_velocity_msg__msg__SimpleVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simple_velocity_msg__msg__SimpleVelocity__Sequence__are_equal(const simple_velocity_msg__msg__SimpleVelocity__Sequence * lhs, const simple_velocity_msg__msg__SimpleVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simple_velocity_msg__msg__SimpleVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simple_velocity_msg__msg__SimpleVelocity__Sequence__copy(
  const simple_velocity_msg__msg__SimpleVelocity__Sequence * input,
  simple_velocity_msg__msg__SimpleVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simple_velocity_msg__msg__SimpleVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simple_velocity_msg__msg__SimpleVelocity * data =
      (simple_velocity_msg__msg__SimpleVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simple_velocity_msg__msg__SimpleVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simple_velocity_msg__msg__SimpleVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simple_velocity_msg__msg__SimpleVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
