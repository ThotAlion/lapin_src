// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lapin_msgs:msg/Feet.idl
// generated code does not contain a copyright notice

#ifndef LAPIN_MSGS__MSG__DETAIL__FEET__FUNCTIONS_H_
#define LAPIN_MSGS__MSG__DETAIL__FEET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lapin_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lapin_msgs/msg/detail/feet__struct.h"

/// Initialize msg/Feet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lapin_msgs__msg__Feet
 * )) before or use
 * lapin_msgs__msg__Feet__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lapin_msgs
bool
lapin_msgs__msg__Feet__init(lapin_msgs__msg__Feet * msg);

/// Finalize msg/Feet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lapin_msgs
void
lapin_msgs__msg__Feet__fini(lapin_msgs__msg__Feet * msg);

/// Create msg/Feet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lapin_msgs__msg__Feet__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lapin_msgs
lapin_msgs__msg__Feet *
lapin_msgs__msg__Feet__create();

/// Destroy msg/Feet message.
/**
 * It calls
 * lapin_msgs__msg__Feet__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lapin_msgs
void
lapin_msgs__msg__Feet__destroy(lapin_msgs__msg__Feet * msg);


/// Initialize array of msg/Feet messages.
/**
 * It allocates the memory for the number of elements and calls
 * lapin_msgs__msg__Feet__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lapin_msgs
bool
lapin_msgs__msg__Feet__Sequence__init(lapin_msgs__msg__Feet__Sequence * array, size_t size);

/// Finalize array of msg/Feet messages.
/**
 * It calls
 * lapin_msgs__msg__Feet__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lapin_msgs
void
lapin_msgs__msg__Feet__Sequence__fini(lapin_msgs__msg__Feet__Sequence * array);

/// Create array of msg/Feet messages.
/**
 * It allocates the memory for the array and calls
 * lapin_msgs__msg__Feet__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lapin_msgs
lapin_msgs__msg__Feet__Sequence *
lapin_msgs__msg__Feet__Sequence__create(size_t size);

/// Destroy array of msg/Feet messages.
/**
 * It calls
 * lapin_msgs__msg__Feet__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lapin_msgs
void
lapin_msgs__msg__Feet__Sequence__destroy(lapin_msgs__msg__Feet__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LAPIN_MSGS__MSG__DETAIL__FEET__FUNCTIONS_H_
