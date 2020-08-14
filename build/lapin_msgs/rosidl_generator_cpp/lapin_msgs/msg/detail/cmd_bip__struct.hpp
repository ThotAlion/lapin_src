// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lapin_msgs:msg/CmdBip.idl
// generated code does not contain a copyright notice

#ifndef LAPIN_MSGS__MSG__DETAIL__CMD_BIP__STRUCT_HPP_
#define LAPIN_MSGS__MSG__DETAIL__CMD_BIP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lapin_msgs__msg__CmdBip __attribute__((deprecated))
#else
# define DEPRECATED__lapin_msgs__msg__CmdBip __declspec(deprecated)
#endif

namespace lapin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CmdBip_
{
  using Type = CmdBip_<ContainerAllocator>;

  explicit CmdBip_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sagittal_bissecting_angle = 0.0;
      this->frontal_bissecting_angle = 0.0;
      this->sway_angle = 0.0;
      this->compliant = false;
      this->speed = 0ll;
      this->right_leg_extension_ratio = 0.0;
      this->right_ankle_angle = 0.0;
      this->right_ankle_compliant = false;
      this->left_leg_extension_ratio = 0.0;
      this->left_ankle_angle = 0.0;
      this->left_ankle_compliant = false;
    }
  }

  explicit CmdBip_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sagittal_bissecting_angle = 0.0;
      this->frontal_bissecting_angle = 0.0;
      this->sway_angle = 0.0;
      this->compliant = false;
      this->speed = 0ll;
      this->right_leg_extension_ratio = 0.0;
      this->right_ankle_angle = 0.0;
      this->right_ankle_compliant = false;
      this->left_leg_extension_ratio = 0.0;
      this->left_ankle_angle = 0.0;
      this->left_ankle_compliant = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sagittal_bissecting_angle_type =
    double;
  _sagittal_bissecting_angle_type sagittal_bissecting_angle;
  using _frontal_bissecting_angle_type =
    double;
  _frontal_bissecting_angle_type frontal_bissecting_angle;
  using _sway_angle_type =
    double;
  _sway_angle_type sway_angle;
  using _compliant_type =
    bool;
  _compliant_type compliant;
  using _speed_type =
    int64_t;
  _speed_type speed;
  using _right_leg_extension_ratio_type =
    double;
  _right_leg_extension_ratio_type right_leg_extension_ratio;
  using _right_ankle_angle_type =
    double;
  _right_ankle_angle_type right_ankle_angle;
  using _right_ankle_compliant_type =
    bool;
  _right_ankle_compliant_type right_ankle_compliant;
  using _left_leg_extension_ratio_type =
    double;
  _left_leg_extension_ratio_type left_leg_extension_ratio;
  using _left_ankle_angle_type =
    double;
  _left_ankle_angle_type left_ankle_angle;
  using _left_ankle_compliant_type =
    bool;
  _left_ankle_compliant_type left_ankle_compliant;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sagittal_bissecting_angle(
    const double & _arg)
  {
    this->sagittal_bissecting_angle = _arg;
    return *this;
  }
  Type & set__frontal_bissecting_angle(
    const double & _arg)
  {
    this->frontal_bissecting_angle = _arg;
    return *this;
  }
  Type & set__sway_angle(
    const double & _arg)
  {
    this->sway_angle = _arg;
    return *this;
  }
  Type & set__compliant(
    const bool & _arg)
  {
    this->compliant = _arg;
    return *this;
  }
  Type & set__speed(
    const int64_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__right_leg_extension_ratio(
    const double & _arg)
  {
    this->right_leg_extension_ratio = _arg;
    return *this;
  }
  Type & set__right_ankle_angle(
    const double & _arg)
  {
    this->right_ankle_angle = _arg;
    return *this;
  }
  Type & set__right_ankle_compliant(
    const bool & _arg)
  {
    this->right_ankle_compliant = _arg;
    return *this;
  }
  Type & set__left_leg_extension_ratio(
    const double & _arg)
  {
    this->left_leg_extension_ratio = _arg;
    return *this;
  }
  Type & set__left_ankle_angle(
    const double & _arg)
  {
    this->left_ankle_angle = _arg;
    return *this;
  }
  Type & set__left_ankle_compliant(
    const bool & _arg)
  {
    this->left_ankle_compliant = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lapin_msgs::msg::CmdBip_<ContainerAllocator> *;
  using ConstRawPtr =
    const lapin_msgs::msg::CmdBip_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lapin_msgs::msg::CmdBip_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lapin_msgs::msg::CmdBip_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lapin_msgs::msg::CmdBip_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lapin_msgs::msg::CmdBip_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lapin_msgs::msg::CmdBip_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lapin_msgs::msg::CmdBip_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lapin_msgs::msg::CmdBip_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lapin_msgs::msg::CmdBip_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lapin_msgs__msg__CmdBip
    std::shared_ptr<lapin_msgs::msg::CmdBip_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lapin_msgs__msg__CmdBip
    std::shared_ptr<lapin_msgs::msg::CmdBip_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdBip_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sagittal_bissecting_angle != other.sagittal_bissecting_angle) {
      return false;
    }
    if (this->frontal_bissecting_angle != other.frontal_bissecting_angle) {
      return false;
    }
    if (this->sway_angle != other.sway_angle) {
      return false;
    }
    if (this->compliant != other.compliant) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->right_leg_extension_ratio != other.right_leg_extension_ratio) {
      return false;
    }
    if (this->right_ankle_angle != other.right_ankle_angle) {
      return false;
    }
    if (this->right_ankle_compliant != other.right_ankle_compliant) {
      return false;
    }
    if (this->left_leg_extension_ratio != other.left_leg_extension_ratio) {
      return false;
    }
    if (this->left_ankle_angle != other.left_ankle_angle) {
      return false;
    }
    if (this->left_ankle_compliant != other.left_ankle_compliant) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdBip_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdBip_

// alias to use template instance with default allocator
using CmdBip =
  lapin_msgs::msg::CmdBip_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lapin_msgs

#endif  // LAPIN_MSGS__MSG__DETAIL__CMD_BIP__STRUCT_HPP_
