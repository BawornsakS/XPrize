// Auto-generated. Do not edit!

// (in-package open_base.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Velocity = require('../msg/Velocity.js');

//-----------------------------------------------------------

let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class KinematicsForwardRequest {
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
        this.input = new Velocity();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type KinematicsForwardRequest
    // Serialize message field [input]
    bufferOffset = Velocity.serialize(obj.input, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type KinematicsForwardRequest
    let len;
    let data = new KinematicsForwardRequest(null);
    // Deserialize message field [input]
    data.input = Velocity.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a service object
    return 'open_base/KinematicsForwardRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '29bd53674d0c2a2c975ed4e5dc6ba2a3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    open_base/Velocity input
    
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
    const resolved = new KinematicsForwardRequest(null);
    if (msg.input !== undefined) {
      resolved.input = Velocity.Resolve(msg.input)
    }
    else {
      resolved.input = new Velocity()
    }

    return resolved;
    }
};

class KinematicsForwardResponse {
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
        this.output = new geometry_msgs.msg.Pose2D();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type KinematicsForwardResponse
    // Serialize message field [output]
    bufferOffset = geometry_msgs.msg.Pose2D.serialize(obj.output, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type KinematicsForwardResponse
    let len;
    let data = new KinematicsForwardResponse(null);
    // Deserialize message field [output]
    data.output = geometry_msgs.msg.Pose2D.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a service object
    return 'open_base/KinematicsForwardResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4dc0c3656ea8ad48f1d7d90c513fe25a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/Pose2D output
    
    
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
    const resolved = new KinematicsForwardResponse(null);
    if (msg.output !== undefined) {
      resolved.output = geometry_msgs.msg.Pose2D.Resolve(msg.output)
    }
    else {
      resolved.output = new geometry_msgs.msg.Pose2D()
    }

    return resolved;
    }
};

module.exports = {
  Request: KinematicsForwardRequest,
  Response: KinematicsForwardResponse,
  md5sum() { return '4f057007e926424c383ecaa1817c5251'; },
  datatype() { return 'open_base/KinematicsForward'; }
};
