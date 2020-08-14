# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lapin_msgs:msg/CmdBip.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CmdBip(type):
    """Metaclass of message 'CmdBip'."""

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
                'lapin_msgs.msg.CmdBip')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cmd_bip
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cmd_bip
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cmd_bip
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cmd_bip
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cmd_bip

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


class CmdBip(metaclass=Metaclass_CmdBip):
    """Message class 'CmdBip'."""

    __slots__ = [
        '_header',
        '_sagittal_bissecting_angle',
        '_frontal_bissecting_angle',
        '_sway_angle',
        '_compliant',
        '_speed',
        '_right_leg_extension_ratio',
        '_right_ankle_angle',
        '_right_ankle_compliant',
        '_left_leg_extension_ratio',
        '_left_ankle_angle',
        '_left_ankle_compliant',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sagittal_bissecting_angle': 'double',
        'frontal_bissecting_angle': 'double',
        'sway_angle': 'double',
        'compliant': 'boolean',
        'speed': 'int64',
        'right_leg_extension_ratio': 'double',
        'right_ankle_angle': 'double',
        'right_ankle_compliant': 'boolean',
        'left_leg_extension_ratio': 'double',
        'left_ankle_angle': 'double',
        'left_ankle_compliant': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sagittal_bissecting_angle = kwargs.get('sagittal_bissecting_angle', float())
        self.frontal_bissecting_angle = kwargs.get('frontal_bissecting_angle', float())
        self.sway_angle = kwargs.get('sway_angle', float())
        self.compliant = kwargs.get('compliant', bool())
        self.speed = kwargs.get('speed', int())
        self.right_leg_extension_ratio = kwargs.get('right_leg_extension_ratio', float())
        self.right_ankle_angle = kwargs.get('right_ankle_angle', float())
        self.right_ankle_compliant = kwargs.get('right_ankle_compliant', bool())
        self.left_leg_extension_ratio = kwargs.get('left_leg_extension_ratio', float())
        self.left_ankle_angle = kwargs.get('left_ankle_angle', float())
        self.left_ankle_compliant = kwargs.get('left_ankle_compliant', bool())

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
        if self.sagittal_bissecting_angle != other.sagittal_bissecting_angle:
            return False
        if self.frontal_bissecting_angle != other.frontal_bissecting_angle:
            return False
        if self.sway_angle != other.sway_angle:
            return False
        if self.compliant != other.compliant:
            return False
        if self.speed != other.speed:
            return False
        if self.right_leg_extension_ratio != other.right_leg_extension_ratio:
            return False
        if self.right_ankle_angle != other.right_ankle_angle:
            return False
        if self.right_ankle_compliant != other.right_ankle_compliant:
            return False
        if self.left_leg_extension_ratio != other.left_leg_extension_ratio:
            return False
        if self.left_ankle_angle != other.left_ankle_angle:
            return False
        if self.left_ankle_compliant != other.left_ankle_compliant:
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
    def sagittal_bissecting_angle(self):
        """Message field 'sagittal_bissecting_angle'."""
        return self._sagittal_bissecting_angle

    @sagittal_bissecting_angle.setter
    def sagittal_bissecting_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sagittal_bissecting_angle' field must be of type 'float'"
        self._sagittal_bissecting_angle = value

    @property
    def frontal_bissecting_angle(self):
        """Message field 'frontal_bissecting_angle'."""
        return self._frontal_bissecting_angle

    @frontal_bissecting_angle.setter
    def frontal_bissecting_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'frontal_bissecting_angle' field must be of type 'float'"
        self._frontal_bissecting_angle = value

    @property
    def sway_angle(self):
        """Message field 'sway_angle'."""
        return self._sway_angle

    @sway_angle.setter
    def sway_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sway_angle' field must be of type 'float'"
        self._sway_angle = value

    @property
    def compliant(self):
        """Message field 'compliant'."""
        return self._compliant

    @compliant.setter
    def compliant(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'compliant' field must be of type 'bool'"
        self._compliant = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'speed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._speed = value

    @property
    def right_leg_extension_ratio(self):
        """Message field 'right_leg_extension_ratio'."""
        return self._right_leg_extension_ratio

    @right_leg_extension_ratio.setter
    def right_leg_extension_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_leg_extension_ratio' field must be of type 'float'"
        self._right_leg_extension_ratio = value

    @property
    def right_ankle_angle(self):
        """Message field 'right_ankle_angle'."""
        return self._right_ankle_angle

    @right_ankle_angle.setter
    def right_ankle_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_ankle_angle' field must be of type 'float'"
        self._right_ankle_angle = value

    @property
    def right_ankle_compliant(self):
        """Message field 'right_ankle_compliant'."""
        return self._right_ankle_compliant

    @right_ankle_compliant.setter
    def right_ankle_compliant(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_ankle_compliant' field must be of type 'bool'"
        self._right_ankle_compliant = value

    @property
    def left_leg_extension_ratio(self):
        """Message field 'left_leg_extension_ratio'."""
        return self._left_leg_extension_ratio

    @left_leg_extension_ratio.setter
    def left_leg_extension_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_leg_extension_ratio' field must be of type 'float'"
        self._left_leg_extension_ratio = value

    @property
    def left_ankle_angle(self):
        """Message field 'left_ankle_angle'."""
        return self._left_ankle_angle

    @left_ankle_angle.setter
    def left_ankle_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_ankle_angle' field must be of type 'float'"
        self._left_ankle_angle = value

    @property
    def left_ankle_compliant(self):
        """Message field 'left_ankle_compliant'."""
        return self._left_ankle_compliant

    @left_ankle_compliant.setter
    def left_ankle_compliant(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_ankle_compliant' field must be of type 'bool'"
        self._left_ankle_compliant = value
