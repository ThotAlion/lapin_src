# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lapin_msgs:msg/Feet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Feet(type):
    """Metaclass of message 'Feet'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lapin_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lapin_msgs.msg.Feet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__feet
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__feet
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__feet
            cls._TYPE_SUPPORT = module.type_support_msg__msg__feet
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__feet

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Feet(metaclass=Metaclass_Feet):
    """Message class 'Feet'."""

    __slots__ = [
        '_header',
        '_right_front_force',
        '_right_front_valid',
        '_right_back_force',
        '_right_back_valid',
        '_left_front_force',
        '_left_front_valid',
        '_left_back_force',
        '_left_back_valid',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'right_front_force': 'int64',
        'right_front_valid': 'boolean',
        'right_back_force': 'int64',
        'right_back_valid': 'boolean',
        'left_front_force': 'int64',
        'left_front_valid': 'boolean',
        'left_back_force': 'int64',
        'left_back_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.right_front_force = kwargs.get('right_front_force', int())
        self.right_front_valid = kwargs.get('right_front_valid', bool())
        self.right_back_force = kwargs.get('right_back_force', int())
        self.right_back_valid = kwargs.get('right_back_valid', bool())
        self.left_front_force = kwargs.get('left_front_force', int())
        self.left_front_valid = kwargs.get('left_front_valid', bool())
        self.left_back_force = kwargs.get('left_back_force', int())
        self.left_back_valid = kwargs.get('left_back_valid', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.right_front_force != other.right_front_force:
            return False
        if self.right_front_valid != other.right_front_valid:
            return False
        if self.right_back_force != other.right_back_force:
            return False
        if self.right_back_valid != other.right_back_valid:
            return False
        if self.left_front_force != other.left_front_force:
            return False
        if self.left_front_valid != other.left_front_valid:
            return False
        if self.left_back_force != other.left_back_force:
            return False
        if self.left_back_valid != other.left_back_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def right_front_force(self):
        """Message field 'right_front_force'."""
        return self._right_front_force

    @right_front_force.setter
    def right_front_force(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_front_force' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'right_front_force' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._right_front_force = value

    @property
    def right_front_valid(self):
        """Message field 'right_front_valid'."""
        return self._right_front_valid

    @right_front_valid.setter
    def right_front_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_front_valid' field must be of type 'bool'"
        self._right_front_valid = value

    @property
    def right_back_force(self):
        """Message field 'right_back_force'."""
        return self._right_back_force

    @right_back_force.setter
    def right_back_force(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_back_force' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'right_back_force' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._right_back_force = value

    @property
    def right_back_valid(self):
        """Message field 'right_back_valid'."""
        return self._right_back_valid

    @right_back_valid.setter
    def right_back_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_back_valid' field must be of type 'bool'"
        self._right_back_valid = value

    @property
    def left_front_force(self):
        """Message field 'left_front_force'."""
        return self._left_front_force

    @left_front_force.setter
    def left_front_force(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_front_force' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'left_front_force' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._left_front_force = value

    @property
    def left_front_valid(self):
        """Message field 'left_front_valid'."""
        return self._left_front_valid

    @left_front_valid.setter
    def left_front_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_front_valid' field must be of type 'bool'"
        self._left_front_valid = value

    @property
    def left_back_force(self):
        """Message field 'left_back_force'."""
        return self._left_back_force

    @left_back_force.setter
    def left_back_force(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_back_force' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'left_back_force' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._left_back_force = value

    @property
    def left_back_valid(self):
        """Message field 'left_back_valid'."""
        return self._left_back_valid

    @left_back_valid.setter
    def left_back_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_back_valid' field must be of type 'bool'"
        self._left_back_valid = value
