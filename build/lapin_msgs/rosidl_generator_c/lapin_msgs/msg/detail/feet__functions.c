// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lapin_msgs:msg/Feet.idl
// generated code does not contain a copyright notice
#include "lapin_msgs/msg/detail/feet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
lapin_msgs__msg__Feet__init(lapin_msgs__msg__Feet * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lapin_msgs__msg__Feet__fini(msg);
    return false;
  }
  // right_front_force
  // right_front_valid
  // right_back_force
  // right_back_valid
  // left_front_force
  // left_front_valid
  // left_back_force
  // left_back_valid
  return true;
}

void
lapin_msgs__msg__Feet__fini(lapin_msgs__msg__Feet * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // right_front_force
  // right_front_valid
  // right_back_force
  // right_back_valid
  // left_front_force
  // left_front_valid
  // left_back_force
  // left_back_valid
}

lapin_msgs__msg__Feet *
lapin_msgs__msg__Feet__create()
{
  lapin_msgs__msg__Feet * msg = (lapin_msgs__msg__Feet *)malloc(sizeof(lapin_msgs__msg__Feet));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lapin_msgs__msg__Feet));
  bool success = lapin_msgs__msg__Feet__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lapin_msgs__msg__Feet__destroy(lapin_msgs__msg__Feet * msg)
{
  if (msg) {
    lapin_msgs__msg__Feet__fini(msg);
  }
  free(msg);
}


bool
lapin_msgs__msg__Feet__Sequence__init(lapin_msgs__msg__Feet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lapin_msgs__msg__Feet * data = NULL;
  if (size) {
    data = (lapin_msgs__msg__Feet *)calloc(size, sizeof(lapin_msgs__msg__Feet));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lapin_msgs__msg__Feet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lapin_msgs__msg__Feet__fini(&data[i - 1]);
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
lapin_msgs__msg__Feet__Sequence__fini(lapin_msgs__msg__Feet__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lapin_msgs__msg__Feet__fini(&array->data[i]);
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

lapin_msgs__msg__Feet__Sequence *
lapin_msgs__msg__Feet__Sequence__create(size_t size)
{
  lapin_msgs__msg__Feet__Sequence * array = (lapin_msgs__msg__Feet__Sequence *)malloc(sizeof(lapin_msgs__msg__Feet__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lapin_msgs__msg__Feet__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lapin_msgs__msg__Feet__Sequence__destroy(lapin_msgs__msg__Feet__Sequence * array)
{
  if (array) {
    lapin_msgs__msg__Feet__Sequence__fini(array);
  }
  free(array);
}
