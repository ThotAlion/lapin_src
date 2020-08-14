// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lapin_msgs:msg/Feet.idl
// generated code does not contain a copyright notice
#include "lapin_msgs/msg/detail/feet__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lapin_msgs/msg/detail/feet__struct.hpp"

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
  const lapin_msgs::msg::Feet & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: right_front_force
  cdr << ros_message.right_front_force;
  // Member: right_front_valid
  cdr << (ros_message.right_front_valid ? true : false);
  // Member: right_back_force
  cdr << ros_message.right_back_force;
  // Member: right_back_valid
  cdr << (ros_message.right_back_valid ? true : false);
  // Member: left_front_force
  cdr << ros_message.left_front_force;
  // Member: left_front_valid
  cdr << (ros_message.left_front_valid ? true : false);
  // Member: left_back_force
  cdr << ros_message.left_back_force;
  // Member: left_back_valid
  cdr << (ros_message.left_back_valid ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lapin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lapin_msgs::msg::Feet & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: right_front_force
  cdr >> ros_message.right_front_force;

  // Member: right_front_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right_front_valid = tmp ? true : false;
  }

  // Member: right_back_force
  cdr >> ros_message.right_back_force;

  // Member: right_back_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right_back_valid = tmp ? true : false;
  }

  // Member: left_front_force
  cdr >> ros_message.left_front_force;

  // Member: left_front_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left_front_valid = tmp ? true : false;
  }

  // Member: left_back_force
  cdr >> ros_message.left_back_force;

  // Member: left_back_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left_back_valid = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lapin_msgs
get_serialized_size(
  const lapin_msgs::msg::Feet & ros_message,
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
  // Member: right_front_force
  {
    size_t item_size = sizeof(ros_message.right_front_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_front_valid
  {
    size_t item_size = sizeof(ros_message.right_front_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_back_force
  {
    size_t item_size = sizeof(ros_message.right_back_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_back_valid
  {
    size_t item_size = sizeof(ros_message.right_back_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_front_force
  {
    size_t item_size = sizeof(ros_message.left_front_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_front_valid
  {
    size_t item_size = sizeof(ros_message.left_front_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_back_force
  {
    size_t item_size = sizeof(ros_message.left_back_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_back_valid
  {
    size_t item_size = sizeof(ros_message.left_back_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lapin_msgs
max_serialized_size_Feet(
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

  // Member: right_front_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_front_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_back_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_back_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_front_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_front_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_back_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_back_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Feet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lapin_msgs::msg::Feet *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Feet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lapin_msgs::msg::Feet *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Feet__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lapin_msgs::msg::Feet *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Feet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Feet(full_bounded, 0);
}

static message_type_support_callbacks_t _Feet__callbacks = {
  "lapin_msgs::msg",
  "Feet",
  _Feet__cdr_serialize,
  _Feet__cdr_deserialize,
  _Feet__get_serialized_size,
  _Feet__max_serialized_size
};

static rosidl_message_type_support_t _Feet__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Feet__callbacks,
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
get_message_type_support_handle<lapin_msgs::msg::Feet>()
{
  return &lapin_msgs::msg::typesupport_fastrtps_cpp::_Feet__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lapin_msgs, msg, Feet)() {
  return &lapin_msgs::msg::typesupport_fastrtps_cpp::_Feet__handle;
}

#ifdef __cplusplus
}
#endif
