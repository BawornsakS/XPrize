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

class USBoard {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sensor = null;
      this.analog = null;
    }
    else {
      if (initObj.hasOwnProperty('sensor')) {
        this.sensor = initObj.sensor
      }
      else {
        this.sensor = new Array(16).fill(0);
      }
      if (initObj.hasOwnProperty('analog')) {
        this.analog = initObj.analog
      }
      else {
        this.analog = new Array(4).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type USBoard
    // Check that the constant length array field [sensor] has the right length
    if (obj.sensor.length !== 16) {
      throw new Error('Unable to serialize array field sensor - length must be 16')
    }
    // Serialize message field [sensor]
    bufferOffset = _arraySerializer.uint8(obj.sensor, buffer, bufferOffset, 16);
    // Check that the constant length array field [analog] has the right length
    if (obj.analog.length !== 4) {
      throw new Error('Unable to serialize array field analog - length must be 4')
    }
    // Serialize message field [analog]
    bufferOffset = _arraySerializer.int16(obj.analog, buffer, bufferOffset, 4);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type USBoard
    let len;
    let data = new USBoard(null);
    // Deserialize message field [sensor]
    data.sensor = _arrayDeserializer.uint8(buffer, bufferOffset, 16)
    // Deserialize message field [analog]
    data.analog = _arrayDeserializer.int16(buffer, bufferOffset, 4)
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'neo_msgs/USBoard';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '089d96eea3a0e01a364455ac3fa3cb33';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8[16] sensor 	#sensor measurement
    int16[4] analog 	#analogue input
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new USBoard(null);
    if (msg.sensor !== undefined) {
      resolved.sensor = msg.sensor;
    }
    else {
      resolved.sensor = new Array(16).fill(0)
    }

    if (msg.analog !== undefined) {
      resolved.analog = msg.analog;
    }
    else {
      resolved.analog = new Array(4).fill(0)
    }

    return resolved;
    }
};

module.exports = USBoard;
