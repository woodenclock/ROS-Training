// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_velocity_msg:msg/SimpleVelocity.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__STRUCT_H_
#define SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SimpleVelocity in the package simple_velocity_msg.
typedef struct simple_velocity_msg__msg__SimpleVelocity
{
  double linear_velocity;
  double angular_velocity;
} simple_velocity_msg__msg__SimpleVelocity;

// Struct for a sequence of simple_velocity_msg__msg__SimpleVelocity.
typedef struct simple_velocity_msg__msg__SimpleVelocity__Sequence
{
  simple_velocity_msg__msg__SimpleVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_velocity_msg__msg__SimpleVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__STRUCT_H_
