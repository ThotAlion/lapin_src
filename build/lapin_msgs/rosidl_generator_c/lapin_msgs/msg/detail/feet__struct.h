// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lapin_msgs:msg/Feet.idl
// generated code does not contain a copyright notice

#ifndef LAPIN_MSGS__MSG__DETAIL__FEET__STRUCT_H_
#define LAPIN_MSGS__MSG__DETAIL__FEET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Feet in the package lapin_msgs.
typedef struct lapin_msgs__msg__Feet
{
  std_msgs__msg__Header header;
  int64_t right_front_force;
  bool right_front_valid;
  int64_t right_back_force;
  bool right_back_valid;
  int64_t left_front_force;
  bool left_front_valid;
  int64_t left_back_force;
  bool left_back_valid;
} lapin_msgs__msg__Feet;

// Struct for a sequence of lapin_msgs__msg__Feet.
typedef struct lapin_msgs__msg__Feet__Sequence
{
  lapin_msgs__msg__Feet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lapin_msgs__msg__Feet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LAPIN_MSGS__MSG__DETAIL__FEET__STRUCT_H_
