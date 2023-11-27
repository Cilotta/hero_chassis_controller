# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rm_msgs/PowerManagementUnknownExceptionData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy

class PowerManagementUnknownExceptionData(genpy.Message):
  _md5sum = "fe5796a7df8d9f8ea5253e8284933a59"
  _type = "rm_msgs/PowerManagementUnknownExceptionData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 abnormal_reset_reason
uint8 state_machine_before_reset_mode
uint8 power_management_before_reset_topology

time stamp
"""
  __slots__ = ['abnormal_reset_reason','state_machine_before_reset_mode','power_management_before_reset_topology','stamp']
  _slot_types = ['uint8','uint8','uint8','time']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       abnormal_reset_reason,state_machine_before_reset_mode,power_management_before_reset_topology,stamp

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PowerManagementUnknownExceptionData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.abnormal_reset_reason is None:
        self.abnormal_reset_reason = 0
      if self.state_machine_before_reset_mode is None:
        self.state_machine_before_reset_mode = 0
      if self.power_management_before_reset_topology is None:
        self.power_management_before_reset_topology = 0
      if self.stamp is None:
        self.stamp = genpy.Time()
    else:
      self.abnormal_reset_reason = 0
      self.state_machine_before_reset_mode = 0
      self.power_management_before_reset_topology = 0
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
      buff.write(_get_struct_3B2I().pack(_x.abnormal_reset_reason, _x.state_machine_before_reset_mode, _x.power_management_before_reset_topology, _x.stamp.secs, _x.stamp.nsecs))
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
      if self.stamp is None:
        self.stamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 11
      (_x.abnormal_reset_reason, _x.state_machine_before_reset_mode, _x.power_management_before_reset_topology, _x.stamp.secs, _x.stamp.nsecs,) = _get_struct_3B2I().unpack(str[start:end])
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
      buff.write(_get_struct_3B2I().pack(_x.abnormal_reset_reason, _x.state_machine_before_reset_mode, _x.power_management_before_reset_topology, _x.stamp.secs, _x.stamp.nsecs))
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
      if self.stamp is None:
        self.stamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 11
      (_x.abnormal_reset_reason, _x.state_machine_before_reset_mode, _x.power_management_before_reset_topology, _x.stamp.secs, _x.stamp.nsecs,) = _get_struct_3B2I().unpack(str[start:end])
      self.stamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B2I = None
def _get_struct_3B2I():
    global _struct_3B2I
    if _struct_3B2I is None:
        _struct_3B2I = struct.Struct("<3B2I")
    return _struct_3B2I