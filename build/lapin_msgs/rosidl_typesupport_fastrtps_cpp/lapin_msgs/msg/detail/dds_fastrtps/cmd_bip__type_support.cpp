// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lapin_msgs:msg/CmdBip.idl
// generated code does not contain a copyright notice
#include "lapin_msgs/msg/detail/cmd_bip__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lapin_msgs/msg/detail/cmd_bip__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace lapin_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lapin_msgs
cdr_serialize(
  const lapin_msgs::msg::CmdBip & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: sagittal_bissecting_angle
  cdr << ros_message.sagittal_bissecting_angle;
  // Member: frontal_bissecting_angle
  cdr << ros_message.frontal_bissecting_angle;
  // Member: sway_angle
  cdr << ros_message.sway_angle;
  // Member: compliant
  cdr << (ros_message.compliant ? true : false);
  // Member: speed
  cdr << ros_message.speed;
  // Member: right_leg_extension_ratio
  cdr << ros_message.right_leg_extension_ratio;
  // Member: right_ankle_angle
  cdr << ros_message.right_ankle_angle;
  // Member: right_ankle_compliant
  cdr << (ros_message.right_ankle_compliant ? true : false);
  // Member: left_leg_extension_ratio
  cdr << ros_message.left_leg_extension_ratio;
  // Member: left_ankle_angle
  cdr << ros_message.left_ankle_angle;
  // Member: left_ankle_compliant
  cdr << (ros_message.left_ankle_compliant ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lapin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lapin_msgs::msg::CmdBip & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: sagittal_bissecting_angle
  cdr >> ros_message.sagittal_bissecting_angle;

  // Member: frontal_bissecting_angle
  cdr >> ros_message.frontal_bissecting_angle;

  // Member: sway_angle
  cdr >> ros_message.sway_angle;

  // Member: compliant
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.compliant = tmp ? true : false;
  }

  // Member: speed
  cdr >> ros_message.speed;

  // Member: right_leg_extension_ratio
  cdr >> ros_message.right_leg_extension_ratio;

  // Member: right_ankle_angle
  cdr >> ros_message.right_ankle_angle;

  // Member: right_ankle_compliant
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right_ankle_compliant = tmp ? true : false;
  }

  // Member: left_leg_extension_ratio
  cdr >> ros_message.left_leg_extension_ratio;

  // Member: left_ankle_angle
  cdr >> ros_message.left_ankle_angle;

  // Member: left_ankle_compliant
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left_ankle_compliant = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lapin_msgs
get_serialized_size(
  const lapin_msgs::msg::CmdBip & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: sagittal_bissecting_angle
  {
    size_t item_size = sizeof(ros_message.sagittal_bissecting_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frontal_bissecting_angle
  {
    size_t item_size = sizeof(ros_message.frontal_bissecting_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sway_angle
  {
    size_t item_size = sizeof(ros_message.sway_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compliant
  {
    size_t item_size = sizeof(ros_message.compliant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_leg_extension_ratio
  {
    size_t item_size = sizeof(ros_message.right_leg_extension_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_ankle_angle
  {
    size_t item_size = sizeof(ros_message.right_ankle_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_ankle_compliant
  {
    size_t item_size = sizeof(ros_message.right_ankle_compliant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_leg_extension_ratio
  {
    size_t item_size = sizeof(ros_message.left_leg_extension_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_ankle_angle
  {
    size_t item_size = sizeof(ros_message.left_ankle_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_ankle_compliant
  {
    size_t item_size = sizeof(ros_message.left_ankle_compliant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lapin_msgs
max_serialized_size_CmdBip(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: sagittal_bissecting_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: frontal_bissecting_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sway_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: compliant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_leg_extension_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_ankle_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_ankle_compliant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_leg_extension_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_ankle_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_ankle_compliant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CmdBip__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lapin_msgs::msg::CmdBip *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CmdBip__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lapin_msgs::msg::CmdBip *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CmdBip__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lapin_msgs::msg::CmdBip *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CmdBip__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CmdBip(full_bounded, 0);
}

static message_type_support_callbacks_t _CmdBip__callbacks = {
  "lapin_msgs::msg",
  "CmdBip",
  _CmdBip__cdr_serialize,
  _CmdBip__cdr_deserialize,
  _CmdBip__get_serialized_size,
  _CmdBip__max_serialized_size
};

static rosidl_message_type_support_t _CmdBip__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CmdBip__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lapin_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lapin_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lapin_msgs::msg::CmdBip>()
{
  return &lapin_msgs::msg::typesupport_fastrtps_cpp::_CmdBip__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lapin_msgs, msg, CmdBip)() {
  return &lapin_msgs::msg::typesupport_fastrtps_cpp::_CmdBip__handle;
}

#ifdef __cplusplus
}
#endif
