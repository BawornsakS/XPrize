// Auto-generated. Do not edit!

// (in-package open_base.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Velocity = require('./Velocity.js');
let MovementGeneric = require('./MovementGeneric.js');
let MovementBezier = require('./MovementBezier.js');

//-----------------------------------------------------------

class Movement {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.movement = null;
      this.wheel = null;
      this.generic = null;
      this.bezier = null;
    }
    else {
      if (initObj.hasOwnProperty('movement')) {
        this.movement = initObj.movement
      }
      else {
        this.movement = 0;
      }
      if (initObj.hasOwnProperty('wheel')) {
        this.wheel = initObj.wheel
      }
      else {
        this.wheel = new Velocity();
      }
      if (initObj.hasOwnProperty('generic')) {
        this.generic = initObj.generic
      }
      else {
        this.generic = new MovementGeneric();
      }
      if (initObj.hasOwnProperty('bezier')) {
        this.bezier = initObj.bezier
      }
      else {
        this.bezier = new MovementBezier();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Movement
    // Serialize message field [movement]
    bufferOffset = _serializer.uint8(obj.movement, buffer, bufferOffset);
    // Serialize message field [wheel]
    bufferOffset = Velocity.serialize(obj.wheel, buffer, bufferOffset);
    // Serialize message field [generic]
    bufferOffset = MovementGeneric.serialize(obj.generic, buffer, bufferOffset);
    // Serialize message field [bezier]
    bufferOffset = MovementBezier.serialize(obj.bezier, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Movement
    let len;
    let data = new Movement(null);
    // Deserialize message field [movement]
    data.movement = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [wheel]
    data.wheel = Velocity.deserialize(buffer, bufferOffset);
    // Deserialize message field [generic]
    data.generic = MovementGeneric.deserialize(buffer, bufferOffset);
    // Deserialize message field [bezier]
    data.bezier = MovementBezier.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += MovementBezier.getMessageSize(object.bezier);
    return length + 51;
  }

  static datatype() {
    // Returns string type for a message object
    return 'open_base/Movement';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '68a9ba8e542ff32c2d272bc9497c5912';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 movement
    open_base/Velocity wheel
    open_base/MovementGeneric generic
    open_base/MovementBezier bezier
    # movement constants
    uint8 BEZIER=0
    uint8 GENERIC=1
    uint8 NONE=2
    uint8 WHEEL=3
    # type constants
    uint8 POSITION_ABSOLUTE=0
    uint8 POSITION_RELATIVE=1
    uint8 VELOCITY=2
    # frame constants
    uint8 HYBRID=0
    uint8 MOBILE=1
    uint8 MOBILE_RAW=2
    uint8 WORLD=3
    
    ================================================================================
    MSG: open_base/Velocity
    float64 v_left
    float64 v_back
    float64 v_right
    
    ================================================================================
    MSG: open_base/MovementGeneric
    uint8 type
    uint8 frame
    geometry_msgs/Pose2D target
    
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
    
    ================================================================================
    MSG: open_base/MovementBezier
    uint8 frame
    geometry_msgs/Pose2D[] targetTranslation
    float64[] targetRotation
    float64 step
    bool offsetTraslation
    bool offsetRotation
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Movement(null);
    if (msg.movement !== undefined) {
      resolved.movement = msg.movement;
    }
    else {
      resolved.movement = 0
    }

    if (msg.wheel !== undefined) {
      resolved.wheel = Velocity.Resolve(msg.wheel)
    }
    else {
      resolved.wheel = new Velocity()
    }

    if (msg.generic !== undefined) {
      resolved.generic = MovementGeneric.Resolve(msg.generic)
    }
    else {
      resolved.generic = new MovementGeneric()
    }

    if (msg.bezier !== undefined) {
      resolved.bezier = MovementBezier.Resolve(msg.bezier)
    }
    else {
      resolved.bezier = new MovementBezier()
    }

    return resolved;
    }
};

// Constants for message
Movement.Constants = {
  BEZIER: 0,
  GENERIC: 1,
  NONE: 2,
  WHEEL: 3,
  POSITION_ABSOLUTE: 0,
  POSITION_RELATIVE: 1,
  VELOCITY: 2,
  HYBRID: 0,
  MOBILE: 1,
  MOBILE_RAW: 2,
  WORLD: 3,
}

module.exports = Movement;
