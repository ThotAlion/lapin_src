// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lapin_msgs:msg/Feet.idl
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
#include "lapin_msgs/msg/detail/feet__struct.h"
#include "lapin_msgs/msg/detail/feet__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lapin_msgs__msg__feet__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[26];
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
    assert(strncmp("lapin_msgs.msg._feet.Feet", full_classname_dest, 25) == 0);
  }
  lapin_msgs__msg__Feet * ros_message = _ros_message;
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
  {  // right_front_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_front_force");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_front_force = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // right_front_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_front_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_front_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_back_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_back_force");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_back_force = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // right_back_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_back_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_back_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_front_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_front_force");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_front_force = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // left_front_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_front_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_front_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_back_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_back_force");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_back_force = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // left_back_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_back_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_back_valid = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lapin_msgs__msg__feet__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Feet */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lapin_msgs.msg._feet");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Feet");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lapin_msgs__msg__Feet * ros_message = (lapin_msgs__msg__Feet *)raw_ros_message;
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
  {  // right_front_force
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->right_front_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_front_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_front_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_front_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_front_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_back_force
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->right_back_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_back_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_back_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_back_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_back_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_front_force
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->left_front_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_front_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_front_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_front_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_front_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_back_force
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->left_back_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_back_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_back_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_back_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_back_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
