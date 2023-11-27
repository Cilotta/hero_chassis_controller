# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rm_msgs/ChassisCmd.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import geometry_msgs.msg

class ChassisCmd(genpy.Message):
  _md5sum = "fe292a7583b47379f8efee0364a443f5"
  _type = "rm_msgs/ChassisCmd"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 RAW = 0
uint8 FOLLOW = 1
uint8 TWIST = 2
uint8 UP_SLOPE = 3
uint8 FALLEN = 4

uint8 mode
geometry_msgs/Accel accel
float64 power_limit
string follow_source_frame
string command_source_frame
time stamp

================================================================================
MSG: geometry_msgs/Accel
# This expresses acceleration in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  # Pseudo-constants
  RAW = 0
  FOLLOW = 1
  TWIST = 2
  UP_SLOPE = 3
  FALLEN = 4

  __slots__ = ['mode','accel','power_limit','follow_source_frame','command_source_frame','stamp']
  _slot_types = ['uint8','geometry_msgs/Accel','float64','string','string','time']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       mode,accel,power_limit,follow_source_frame,command_source_frame,stamp

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ChassisCmd, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.mode is None:
        self.mode = 0
      if self.accel is None:
        self.accel = geometry_msgs.msg.Accel()
      if self.power_limit is None:
        self.power_limit = 0.
      if self.follow_source_frame is None:
        self.follow_source_frame = ''
      if self.command_source_frame is None:
        self.command_source_frame = ''
      if self.stamp is None:
        self.stamp = genpy.Time()
    else:
      self.mode = 0
      self.accel = geometry_msgs.msg.Accel()
      self.power_limit = 0.
      self.follow_source_frame = ''
      self.command_source_frame = ''
      self.stamp = genpy.Time()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_B7d().pack(_x.mode, _x.accel.linear.x, _x.accel.linear.y, _x.accel.linear.z, _x.accel.angular.x, _x.accel.angular.y, _x.accel.angular.z, _x.power_limit))
      _x = self.follow_source_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.command_source_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.stamp.secs, _x.stamp.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.accel is None:
        self.accel = geometry_msgs.msg.Accel()
      if self.stamp is None:
        self.stamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 57
      (_x.mode, _x.accel.linear.x, _x.accel.linear.y, _x.accel.linear.z, _x.accel.angular.x, _x.accel.angular.y, _x.accel.angular.z, _x.power_limit,) = _get_struct_B7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.follow_source_frame = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.follow_source_frame = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.command_source_frame = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.command_source_frame = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.stamp.secs, _x.stamp.nsecs,) = _get_struct_2I().unpack(str[start:end])
      self.stamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_B7d().pack(_x.mode, _x.accel.linear.x, _x.accel.linear.y, _x.accel.linear.z, _x.accel.angular.x, _x.accel.angular.y, _x.accel.angular.z, _x.power_limit))
      _x = self.follow_source_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.command_source_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.stamp.secs, _x.stamp.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.accel is None:
        self.accel = geometry_msgs.msg.Accel()
      if self.stamp is None:
        self.stamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 57
      (_x.mode, _x.accel.linear.x, _x.accel.linear.y, _x.accel.linear.z, _x.accel.angular.x, _x.accel.angular.y, _x.accel.angular.z, _x.power_limit,) = _get_struct_B7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.follow_source_frame = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.follow_source_frame = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.command_source_frame = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.command_source_frame = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.stamp.secs, _x.stamp.nsecs,) = _get_struct_2I().unpack(str[start:end])
      self.stamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_B7d = None
def _get_struct_B7d():
    global _struct_B7d
    if _struct_B7d is None:
        _struct_B7d = struct.Struct("<B7d")
    return _struct_B7d
