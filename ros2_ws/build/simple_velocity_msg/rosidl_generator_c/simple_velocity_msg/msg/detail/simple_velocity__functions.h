// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simple_velocity_msg:msg/SimpleVelocity.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__FUNCTIONS_H_
#define SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simple_velocity_msg/msg/rosidl_generator_c__visibility_control.h"

#include "simple_velocity_msg/msg/detail/simple_velocity__struct.h"

/// Initialize msg/SimpleVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_velocity_msg__msg__SimpleVelocity
 * )) before or use
 * simple_velocity_msg__msg__SimpleVelocity__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
bool
simple_velocity_msg__msg__SimpleVelocity__init(simple_velocity_msg__msg__SimpleVelocity * msg);

/// Finalize msg/SimpleVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
void
simple_velocity_msg__msg__SimpleVelocity__fini(simple_velocity_msg__msg__SimpleVelocity * msg);

/// Create msg/SimpleVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_velocity_msg__msg__SimpleVelocity__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
simple_velocity_msg__msg__SimpleVelocity *
simple_velocity_msg__msg__SimpleVelocity__create();

/// Destroy msg/SimpleVelocity message.
/**
 * It calls
 * simple_velocity_msg__msg__SimpleVelocity__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
void
simple_velocity_msg__msg__SimpleVelocity__destroy(simple_velocity_msg__msg__SimpleVelocity * msg);

/// Check for msg/SimpleVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
bool
simple_velocity_msg__msg__SimpleVelocity__are_equal(const simple_velocity_msg__msg__SimpleVelocity * lhs, const simple_velocity_msg__msg__SimpleVelocity * rhs);

/// Copy a msg/SimpleVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
bool
simple_velocity_msg__msg__SimpleVelocity__copy(
  const simple_velocity_msg__msg__SimpleVelocity * input,
  simple_velocity_msg__msg__SimpleVelocity * output);

/// Initialize array of msg/SimpleVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_velocity_msg__msg__SimpleVelocity__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
bool
simple_velocity_msg__msg__SimpleVelocity__Sequence__init(simple_velocity_msg__msg__SimpleVelocity__Sequence * array, size_t size);

/// Finalize array of msg/SimpleVelocity messages.
/**
 * It calls
 * simple_velocity_msg__msg__SimpleVelocity__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
void
simple_velocity_msg__msg__SimpleVelocity__Sequence__fini(simple_velocity_msg__msg__SimpleVelocity__Sequence * array);

/// Create array of msg/SimpleVelocity messages.
/**
 * It allocates the memory for the array and calls
 * simple_velocity_msg__msg__SimpleVelocity__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
simple_velocity_msg__msg__SimpleVelocity__Sequence *
simple_velocity_msg__msg__SimpleVelocity__Sequence__create(size_t size);

/// Destroy array of msg/SimpleVelocity messages.
/**
 * It calls
 * simple_velocity_msg__msg__SimpleVelocity__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
void
simple_velocity_msg__msg__SimpleVelocity__Sequence__destroy(simple_velocity_msg__msg__SimpleVelocity__Sequence * array);

/// Check for msg/SimpleVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
bool
simple_velocity_msg__msg__SimpleVelocity__Sequence__are_equal(const simple_velocity_msg__msg__SimpleVelocity__Sequence * lhs, const simple_velocity_msg__msg__SimpleVelocity__Sequence * rhs);

/// Copy an array of msg/SimpleVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_velocity_msg
bool
simple_velocity_msg__msg__SimpleVelocity__Sequence__copy(
  const simple_velocity_msg__msg__SimpleVelocity__Sequence * input,
  simple_velocity_msg__msg__SimpleVelocity__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__FUNCTIONS_H_
