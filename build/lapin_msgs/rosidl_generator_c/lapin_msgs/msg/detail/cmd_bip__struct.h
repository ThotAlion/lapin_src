// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lapin_msgs:msg/CmdBip.idl
// generated code does not contain a copyright notice

#ifndef LAPIN_MSGS__MSG__DETAIL__CMD_BIP__STRUCT_H_
#define LAPIN_MSGS__MSG__DETAIL__CMD_BIP__STRUCT_H_

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

// Struct defined in msg/CmdBip in the package lapin_msgs.
typedef struct lapin_msgs__msg__CmdBip
{
  std_msgs__msg__Header header;
  double sagittal_bissecting_angle;
  double frontal_bissecting_angle;
  double sway_angle;
  bool compliant;
  int64_t speed;
  double right_leg_extension_ratio;
  double right_ankle_angle;
  bool right_ankle_compliant;
  double left_leg_extension_ratio;
  double left_ankle_angle;
  bool left_ankle_compliant;
} lapin_msgs__msg__CmdBip;

// Struct for a sequence of lapin_msgs__msg__CmdBip.
typedef struct lapin_msgs__msg__CmdBip__Sequence
{
  lapin_msgs__msg__CmdBip * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lapin_msgs__msg__CmdBip__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LAPIN_MSGS__MSG__DETAIL__CMD_BIP__STRUCT_H_
