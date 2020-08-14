// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lapin_msgs:msg/CmdBip.idl
// generated code does not contain a copyright notice
#include "lapin_msgs/msg/detail/cmd_bip__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lapin_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lapin_msgs/msg/detail/cmd_bip__struct.h"
#include "lapin_msgs/msg/detail/cmd_bip__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_lapin_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_lapin_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_lapin_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _CmdBip__ros_msg_type = lapin_msgs__msg__CmdBip;

static bool _CmdBip__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CmdBip__ros_msg_type * ros_message = static_cast<const _CmdBip__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: sagittal_bissecting_angle
  {
    cdr << ros_message->sagittal_bissecting_angle;
  }

  // Field name: frontal_bissecting_angle
  {
    cdr << ros_message->frontal_bissecting_angle;
  }

  // Field name: sway_angle
  {
    cdr << ros_message->sway_angle;
  }

  // Field name: compliant
  {
    cdr << (ros_message->compliant ? true : false);
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: right_leg_extension_ratio
  {
    cdr << ros_message->right_leg_extension_ratio;
  }

  // Field name: right_ankle_angle
  {
    cdr << ros_message->right_ankle_angle;
  }

  // Field name: right_ankle_compliant
  {
    cdr << (ros_message->right_ankle_compliant ? true : false);
  }

  // Field name: left_leg_extension_ratio
  {
    cdr << ros_message->left_leg_extension_ratio;
  }

  // Field name: left_ankle_angle
  {
    cdr << ros_message->left_ankle_angle;
  }

  // Field name: left_ankle_compliant
  {
    cdr << (ros_message->left_ankle_compliant ? true : false);
  }

  return true;
}

static bool _CmdBip__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CmdBip__ros_msg_type * ros_message = static_cast<_CmdBip__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: sagittal_bissecting_angle
  {
    cdr >> ros_message->sagittal_bissecting_angle;
  }

  // Field name: frontal_bissecting_angle
  {
    cdr >> ros_message->frontal_bissecting_angle;
  }

  // Field name: sway_angle
  {
    cdr >> ros_message->sway_angle;
  }

  // Field name: compliant
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->compliant = tmp ? true : false;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: right_leg_extension_ratio
  {
    cdr >> ros_message->right_leg_extension_ratio;
  }

  // Field name: right_ankle_angle
  {
    cdr >> ros_message->right_ankle_angle;
  }

  // Field name: right_ankle_compliant
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_ankle_compliant = tmp ? true : false;
  }

  // Field name: left_leg_extension_ratio
  {
    cdr >> ros_message->left_leg_extension_ratio;
  }

  // Field name: left_ankle_angle
  {
    cdr >> ros_message->left_ankle_angle;
  }

  // Field name: left_ankle_compliant
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_ankle_compliant = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lapin_msgs
size_t get_serialized_size_lapin_msgs__msg__CmdBip(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CmdBip__ros_msg_type * ros_message = static_cast<const _CmdBip__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name sagittal_bissecting_angle
  {
    size_t item_size = sizeof(ros_message->sagittal_bissecting_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frontal_bissecting_angle
  {
    size_t item_size = sizeof(ros_message->frontal_bissecting_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sway_angle
  {
    size_t item_size = sizeof(ros_message->sway_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compliant
  {
    size_t item_size = sizeof(ros_message->compliant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_leg_extension_ratio
  {
    size_t item_size = sizeof(ros_message->right_leg_extension_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_ankle_angle
  {
    size_t item_size = sizeof(ros_message->right_ankle_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_ankle_compliant
  {
    size_t item_size = sizeof(ros_message->right_ankle_compliant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_leg_extension_ratio
  {
    size_t item_size = sizeof(ros_message->left_leg_extension_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_ankle_angle
  {
    size_t item_size = sizeof(ros_message->left_ankle_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_ankle_compliant
  {
    size_t item_size = sizeof(ros_message->left_ankle_compliant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CmdBip__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lapin_msgs__msg__CmdBip(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lapin_msgs
size_t max_serialized_size_lapin_msgs__msg__CmdBip(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: sagittal_bissecting_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: frontal_bissecting_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sway_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: compliant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_leg_extension_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_ankle_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_ankle_compliant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_leg_extension_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_ankle_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_ankle_compliant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CmdBip__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_lapin_msgs__msg__CmdBip(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CmdBip = {
  "lapin_msgs::msg",
  "CmdBip",
  _CmdBip__cdr_serialize,
  _CmdBip__cdr_deserialize,
  _CmdBip__get_serialized_size,
  _CmdBip__max_serialized_size
};

static rosidl_message_type_support_t _CmdBip__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CmdBip,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lapin_msgs, msg, CmdBip)() {
  return &_CmdBip__type_support;
}

#if defined(__cplusplus)
}
#endif
