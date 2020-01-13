// Auto-generated. Do not edit!

// (in-package neo_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Keypad {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.button = null;
    }
    else {
      if (initObj.hasOwnProperty('button')) {
        this.button = initObj.button
      }
      else {
        this.button = new Array(5).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Keypad
    // Check that the constant length array field [button] has the right length
    if (obj.button.length !== 5) {
      throw new Error('Unable to serialize array field button - length must be 5')
    }
    // Serialize message field [button]
    bufferOffset = _arraySerializer.bool(obj.button, buffer, bufferOffset, 5);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Keypad
    let len;
    let data = new Keypad(null);
    // Deserialize message field [button]
    data.button = _arrayDeserializer.bool(buffer, bufferOffset, 5)
    return data;
  }

  static getMessageSize(object) {
    return 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'neo_msgs/Keypad';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'cdd812e75f32f7f8c53f07222b1ffa3c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool[5] button #5 button keypad
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Keypad(null);
    if (msg.button !== undefined) {
      resolved.button = msg.button;
    }
    else {
      resolved.button = new Array(5).fill(0)
    }

    return resolved;
    }
};

module.exports = Keypad;
