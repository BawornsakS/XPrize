// Auto-generated. Do not edit!

// (in-package open_base.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Velocity {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.v_left = null;
      this.v_back = null;
      this.v_right = null;
    }
    else {
      if (initObj.hasOwnProperty('v_left')) {
        this.v_left = initObj.v_left
      }
      else {
        this.v_left = 0.0;
      }
      if (initObj.hasOwnProperty('v_back')) {
        this.v_back = initObj.v_back
      }
      else {
        this.v_back = 0.0;
      }
      if (initObj.hasOwnProperty('v_right')) {
        this.v_right = initObj.v_right
      }
      else {
        this.v_right = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Velocity
    // Serialize message field [v_left]
    bufferOffset = _serializer.float64(obj.v_left, buffer, bufferOffset);
    // Serialize message field [v_back]
    bufferOffset = _serializer.float64(obj.v_back, buffer, bufferOffset);
    // Serialize message field [v_right]
    bufferOffset = _serializer.float64(obj.v_right, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Velocity
    let len;
    let data = new Velocity(null);
    // Deserialize message field [v_left]
    data.v_left = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [v_back]
    data.v_back = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [v_right]
    data.v_right = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'open_base/Velocity';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e8a5c19f362eee9352ab07da80a7261d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 v_left
    float64 v_back
    float64 v_right
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Velocity(null);
    if (msg.v_left !== undefined) {
      resolved.v_left = msg.v_left;
    }
    else {
      resolved.v_left = 0.0
    }

    if (msg.v_back !== undefined) {
      resolved.v_back = msg.v_back;
    }
    else {
      resolved.v_back = 0.0
    }

    if (msg.v_right !== undefined) {
      resolved.v_right = msg.v_right;
    }
    else {
      resolved.v_right = 0.0
    }

    return resolved;
    }
};

module.exports = Velocity;
