// Auto-generated. Do not edit!

// (in-package open_base.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class MovementBezier {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.frame = null;
      this.targetTranslation = null;
      this.targetRotation = null;
      this.step = null;
      this.offsetTraslation = null;
      this.offsetRotation = null;
    }
    else {
      if (initObj.hasOwnProperty('frame')) {
        this.frame = initObj.frame
      }
      else {
        this.frame = 0;
      }
      if (initObj.hasOwnProperty('targetTranslation')) {
        this.targetTranslation = initObj.targetTranslation
      }
      else {
        this.targetTranslation = [];
      }
      if (initObj.hasOwnProperty('targetRotation')) {
        this.targetRotation = initObj.targetRotation
      }
      else {
        this.targetRotation = [];
      }
      if (initObj.hasOwnProperty('step')) {
        this.step = initObj.step
      }
      else {
        this.step = 0.0;
      }
      if (initObj.hasOwnProperty('offsetTraslation')) {
        this.offsetTraslation = initObj.offsetTraslation
      }
      else {
        this.offsetTraslation = false;
      }
      if (initObj.hasOwnProperty('offsetRotation')) {
        this.offsetRotation = initObj.offsetRotation
      }
      else {
        this.offsetRotation = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MovementBezier
    // Serialize message field [frame]
    bufferOffset = _serializer.uint8(obj.frame, buffer, bufferOffset);
    // Serialize message field [targetTranslation]
    // Serialize the length for message field [targetTranslation]
    bufferOffset = _serializer.uint32(obj.targetTranslation.length, buffer, bufferOffset);
    obj.targetTranslation.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Pose2D.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [targetRotation]
    bufferOffset = _arraySerializer.float64(obj.targetRotation, buffer, bufferOffset, null);
    // Serialize message field [step]
    bufferOffset = _serializer.float64(obj.step, buffer, bufferOffset);
    // Serialize message field [offsetTraslation]
    bufferOffset = _serializer.bool(obj.offsetTraslation, buffer, bufferOffset);
    // Serialize message field [offsetRotation]
    bufferOffset = _serializer.bool(obj.offsetRotation, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MovementBezier
    let len;
    let data = new MovementBezier(null);
    // Deserialize message field [frame]
    data.frame = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [targetTranslation]
    // Deserialize array length for message field [targetTranslation]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.targetTranslation = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.targetTranslation[i] = geometry_msgs.msg.Pose2D.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [targetRotation]
    data.targetRotation = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [step]
    data.step = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [offsetTraslation]
    data.offsetTraslation = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [offsetRotation]
    data.offsetRotation = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 24 * object.targetTranslation.length;
    length += 8 * object.targetRotation.length;
    return length + 19;
  }

  static datatype() {
    // Returns string type for a message object
    return 'open_base/MovementBezier';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ded95d34881d8c480a26fcec4fc049df';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 frame
    geometry_msgs/Pose2D[] targetTranslation
    float64[] targetRotation
    float64 step
    bool offsetTraslation
    bool offsetRotation
    
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
    const resolved = new MovementBezier(null);
    if (msg.frame !== undefined) {
      resolved.frame = msg.frame;
    }
    else {
      resolved.frame = 0
    }

    if (msg.targetTranslation !== undefined) {
      resolved.targetTranslation = new Array(msg.targetTranslation.length);
      for (let i = 0; i < resolved.targetTranslation.length; ++i) {
        resolved.targetTranslation[i] = geometry_msgs.msg.Pose2D.Resolve(msg.targetTranslation[i]);
      }
    }
    else {
      resolved.targetTranslation = []
    }

    if (msg.targetRotation !== undefined) {
      resolved.targetRotation = msg.targetRotation;
    }
    else {
      resolved.targetRotation = []
    }

    if (msg.step !== undefined) {
      resolved.step = msg.step;
    }
    else {
      resolved.step = 0.0
    }

    if (msg.offsetTraslation !== undefined) {
      resolved.offsetTraslation = msg.offsetTraslation;
    }
    else {
      resolved.offsetTraslation = false
    }

    if (msg.offsetRotation !== undefined) {
      resolved.offsetRotation = msg.offsetRotation;
    }
    else {
      resolved.offsetRotation = false
    }

    return resolved;
    }
};

module.exports = MovementBezier;
