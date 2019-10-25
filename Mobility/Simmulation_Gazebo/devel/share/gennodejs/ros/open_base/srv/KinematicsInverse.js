// Auto-generated. Do not edit!

// (in-package open_base.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

let Velocity = require('../msg/Velocity.js');

//-----------------------------------------------------------

class KinematicsInverseRequest {
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
        this.input = new geometry_msgs.msg.Pose2D();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type KinematicsInverseRequest
    // Serialize message field [input]
    bufferOffset = geometry_msgs.msg.Pose2D.serialize(obj.input, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type KinematicsInverseRequest
    let len;
    let data = new KinematicsInverseRequest(null);
    // Deserialize message field [input]
    data.input = geometry_msgs.msg.Pose2D.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a service object
    return 'open_base/KinematicsInverseRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '455441d3bb20342e466f79502bdf614e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/Pose2D input
    
    ================================================================================
    MSG: geometry_msgs/Pose2D
    # Deprecated
    # Please use the full 3D pose.
    
    # In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.
    
    # If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.
    
    
    # This expresses a position and orientation on a 2D manifold.
    
    float64 x
    float64 y
    float64 theta
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new KinematicsInverseRequest(null);
    if (msg.input !== undefined) {
      resolved.input = geometry_msgs.msg.Pose2D.Resolve(msg.input)
    }
    else {
      resolved.input = new geometry_msgs.msg.Pose2D()
    }

    return resolved;
    }
};

class KinematicsInverseResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.output = null;
    }
    else {
      if (initObj.hasOwnProperty('output')) {
        this.output = initObj.output
      }
      else {
        this.output = new Velocity();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type KinematicsInverseResponse
    // Serialize message field [output]
    bufferOffset = Velocity.serialize(obj.output, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type KinematicsInverseResponse
    let len;
    let data = new KinematicsInverseResponse(null);
    // Deserialize message field [output]
    data.output = Velocity.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a service object
    return 'open_base/KinematicsInverseResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '17afbbcc9d7e674dabef0f5797d91090';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    open_base/Velocity output
    
    
    ================================================================================
    MSG: open_base/Velocity
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
    const resolved = new KinematicsInverseResponse(null);
    if (msg.output !== undefined) {
      resolved.output = Velocity.Resolve(msg.output)
    }
    else {
      resolved.output = new Velocity()
    }

    return resolved;
    }
};

module.exports = {
  Request: KinematicsInverseRequest,
  Response: KinematicsInverseResponse,
  md5sum() { return 'cb684d22809e19793d1c5c527b5f8cf4'; },
  datatype() { return 'open_base/KinematicsInverse'; }
};
