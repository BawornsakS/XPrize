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

class IOAnalogIn {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.input = null;
    }
    else {
      if (initObj.hasOwnProperty('input')) {
        this.input = initObj.input
      }
      else {
        this.input = new Array(8).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type IOAnalogIn
    // Check that the constant length array field [input] has the right length
    if (obj.input.length !== 8) {
      throw new Error('Unable to serialize array field input - length must be 8')
    }
    // Serialize message field [input]
    bufferOffset = _arraySerializer.int16(obj.input, buffer, bufferOffset, 8);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type IOAnalogIn
    let len;
    let data = new IOAnalogIn(null);
    // Deserialize message field [input]
    data.input = _arrayDeserializer.int16(buffer, bufferOffset, 8)
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'neo_msgs/IOAnalogIn';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4b0e4815c9bd4f4b74f05fb5691e16a6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int16[8] input
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new IOAnalogIn(null);
    if (msg.input !== undefined) {
      resolved.input = msg.input;
    }
    else {
      resolved.input = new Array(8).fill(0)
    }

    return resolved;
    }
};

module.exports = IOAnalogIn;
