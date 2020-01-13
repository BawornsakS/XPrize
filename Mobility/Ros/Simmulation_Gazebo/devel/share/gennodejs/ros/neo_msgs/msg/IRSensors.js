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

class IRSensors {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.measurement = null;
    }
    else {
      if (initObj.hasOwnProperty('measurement')) {
        this.measurement = initObj.measurement
      }
      else {
        this.measurement = new Array(4).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type IRSensors
    // Check that the constant length array field [measurement] has the right length
    if (obj.measurement.length !== 4) {
      throw new Error('Unable to serialize array field measurement - length must be 4')
    }
    // Serialize message field [measurement]
    bufferOffset = _arraySerializer.int32(obj.measurement, buffer, bufferOffset, 4);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type IRSensors
    let len;
    let data = new IRSensors(null);
    // Deserialize message field [measurement]
    data.measurement = _arrayDeserializer.int32(buffer, bufferOffset, 4)
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'neo_msgs/IRSensors';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0b608e536c75438a771e1cfb29f4b570';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32[4] measurement
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new IRSensors(null);
    if (msg.measurement !== undefined) {
      resolved.measurement = msg.measurement;
    }
    else {
      resolved.measurement = new Array(4).fill(0)
    }

    return resolved;
    }
};

module.exports = IRSensors;
