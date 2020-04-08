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

class LCDOutput {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.msg_line = null;
    }
    else {
      if (initObj.hasOwnProperty('msg_line')) {
        this.msg_line = initObj.msg_line
      }
      else {
        this.msg_line = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LCDOutput
    // Serialize message field [msg_line]
    bufferOffset = _serializer.string(obj.msg_line, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LCDOutput
    let len;
    let data = new LCDOutput(null);
    // Deserialize message field [msg_line]
    data.msg_line = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.msg_line.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'neo_msgs/LCDOutput';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a223a10d4aa8b3dc5e74a6c05e5047f2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string msg_line 	#in mode 1 msg_lines size is limited to 20 chars
    			#in mode 2 msg_lines size is limited to 60 chars
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new LCDOutput(null);
    if (msg.msg_line !== undefined) {
      resolved.msg_line = msg.msg_line;
    }
    else {
      resolved.msg_line = ''
    }

    return resolved;
    }
};

module.exports = LCDOutput;
