// Auto-generated. Do not edit!

// (in-package rm_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class MultiDofCmd {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.stamp = null;
      this.mode = null;
      this.linear = null;
      this.angular = null;
    }
    else {
      if (initObj.hasOwnProperty('stamp')) {
        this.stamp = initObj.stamp
      }
      else {
        this.stamp = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('mode')) {
        this.mode = initObj.mode
      }
      else {
        this.mode = 0;
      }
      if (initObj.hasOwnProperty('linear')) {
        this.linear = initObj.linear
      }
      else {
        this.linear = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('angular')) {
        this.angular = initObj.angular
      }
      else {
        this.angular = new geometry_msgs.msg.Vector3();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MultiDofCmd
    // Serialize message field [stamp]
    bufferOffset = _serializer.time(obj.stamp, buffer, bufferOffset);
    // Serialize message field [mode]
    bufferOffset = _serializer.uint8(obj.mode, buffer, bufferOffset);
    // Serialize message field [linear]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.linear, buffer, bufferOffset);
    // Serialize message field [angular]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.angular, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MultiDofCmd
    let len;
    let data = new MultiDofCmd(null);
    // Deserialize message field [stamp]
    data.stamp = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [mode]
    data.mode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [linear]
    data.linear = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [angular]
    data.angular = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 57;
  }

  static datatype() {
    // Returns string type for a message object
    return 'rm_msgs/MultiDofCmd';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0ef5d8d462010858e9cd0f8a34969a34';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 VELOCITY = 0
    uint8 POSITION = 1
    
    time stamp
    uint8 mode
    
    # VELOCITY/POSITION
    geometry_msgs/Vector3 linear
    geometry_msgs/Vector3 angular
    
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
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MultiDofCmd(null);
    if (msg.stamp !== undefined) {
      resolved.stamp = msg.stamp;
    }
    else {
      resolved.stamp = {secs: 0, nsecs: 0}
    }

    if (msg.mode !== undefined) {
      resolved.mode = msg.mode;
    }
    else {
      resolved.mode = 0
    }

    if (msg.linear !== undefined) {
      resolved.linear = geometry_msgs.msg.Vector3.Resolve(msg.linear)
    }
    else {
      resolved.linear = new geometry_msgs.msg.Vector3()
    }

    if (msg.angular !== undefined) {
      resolved.angular = geometry_msgs.msg.Vector3.Resolve(msg.angular)
    }
    else {
      resolved.angular = new geometry_msgs.msg.Vector3()
    }

    return resolved;
    }
};

// Constants for message
MultiDofCmd.Constants = {
  VELOCITY: 0,
  POSITION: 1,
}

module.exports = MultiDofCmd;