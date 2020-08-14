// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lapin_msgs:msg/CmdBip.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "lapin_msgs/msg/detail/cmd_bip__struct.h"
#include "lapin_msgs/msg/detail/cmd_bip__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lapin_msgs__msg__cmd_bip__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("lapin_msgs.msg._cmd_bip.CmdBip", full_classname_dest, 30) == 0);
  }
  lapin_msgs__msg__CmdBip * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sagittal_bissecting_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "sagittal_bissecting_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sagittal_bissecting_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // frontal_bissecting_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "frontal_bissecting_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->frontal_bissecting_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sway_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "sway_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sway_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // compliant
    PyObject * field = PyObject_GetAttrString(_pymsg, "compliant");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->compliant = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // right_leg_extension_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_leg_extension_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_leg_extension_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_ankle_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_ankle_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_ankle_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_ankle_compliant
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_ankle_compliant");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_ankle_compliant = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_leg_extension_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_leg_extension_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_leg_extension_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_ankle_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_ankle_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_ankle_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_ankle_compliant
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_ankle_compliant");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_ankle_compliant = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lapin_msgs__msg__cmd_bip__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CmdBip */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lapin_msgs.msg._cmd_bip");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CmdBip");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lapin_msgs__msg__CmdBip * ros_message = (lapin_msgs__msg__CmdBip *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sagittal_bissecting_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sagittal_bissecting_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sagittal_bissecting_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frontal_bissecting_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->frontal_bissecting_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frontal_bissecting_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sway_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sway_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sway_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // compliant
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->compliant ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "compliant", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_leg_extension_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_leg_extension_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_leg_extension_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_ankle_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_ankle_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_ankle_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_ankle_compliant
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_ankle_compliant ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_ankle_compliant", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_leg_extension_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_leg_extension_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_leg_extension_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_ankle_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_ankle_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_ankle_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_ankle_compliant
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_ankle_compliant ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_ankle_compliant", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
