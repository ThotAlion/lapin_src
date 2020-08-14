// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lapin_msgs:msg/CmdBip.idl
// generated code does not contain a copyright notice
#include "lapin_msgs/msg/detail/cmd_bip__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
lapin_msgs__msg__CmdBip__init(lapin_msgs__msg__CmdBip * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lapin_msgs__msg__CmdBip__fini(msg);
    return false;
  }
  // sagittal_bissecting_angle
  // frontal_bissecting_angle
  // sway_angle
  // compliant
  // speed
  // right_leg_extension_ratio
  // right_ankle_angle
  // right_ankle_compliant
  // left_leg_extension_ratio
  // left_ankle_angle
  // left_ankle_compliant
  return true;
}

void
lapin_msgs__msg__CmdBip__fini(lapin_msgs__msg__CmdBip * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sagittal_bissecting_angle
  // frontal_bissecting_angle
  // sway_angle
  // compliant
  // speed
  // right_leg_extension_ratio
  // right_ankle_angle
  // right_ankle_compliant
  // left_leg_extension_ratio
  // left_ankle_angle
  // left_ankle_compliant
}

lapin_msgs__msg__CmdBip *
lapin_msgs__msg__CmdBip__create()
{
  lapin_msgs__msg__CmdBip * msg = (lapin_msgs__msg__CmdBip *)malloc(sizeof(lapin_msgs__msg__CmdBip));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lapin_msgs__msg__CmdBip));
  bool success = lapin_msgs__msg__CmdBip__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lapin_msgs__msg__CmdBip__destroy(lapin_msgs__msg__CmdBip * msg)
{
  if (msg) {
    lapin_msgs__msg__CmdBip__fini(msg);
  }
  free(msg);
}


bool
lapin_msgs__msg__CmdBip__Sequence__init(lapin_msgs__msg__CmdBip__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lapin_msgs__msg__CmdBip * data = NULL;
  if (size) {
    data = (lapin_msgs__msg__CmdBip *)calloc(size, sizeof(lapin_msgs__msg__CmdBip));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lapin_msgs__msg__CmdBip__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lapin_msgs__msg__CmdBip__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lapin_msgs__msg__CmdBip__Sequence__fini(lapin_msgs__msg__CmdBip__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lapin_msgs__msg__CmdBip__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lapin_msgs__msg__CmdBip__Sequence *
lapin_msgs__msg__CmdBip__Sequence__create(size_t size)
{
  lapin_msgs__msg__CmdBip__Sequence * array = (lapin_msgs__msg__CmdBip__Sequence *)malloc(sizeof(lapin_msgs__msg__CmdBip__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lapin_msgs__msg__CmdBip__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lapin_msgs__msg__CmdBip__Sequence__destroy(lapin_msgs__msg__CmdBip__Sequence * array)
{
  if (array) {
    lapin_msgs__msg__CmdBip__Sequence__fini(array);
  }
  free(array);
}
