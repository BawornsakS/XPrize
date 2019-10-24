; Auto-generated. Do not edit!


(cl:in-package open_base-msg)


;//! \htmlinclude Movement.msg.html

(cl:defclass <Movement> (roslisp-msg-protocol:ros-message)
  ((movement
    :reader movement
    :initarg :movement
    :type cl:fixnum
    :initform 0)
   (wheel
    :reader wheel
    :initarg :wheel
    :type open_base-msg:Velocity
    :initform (cl:make-instance 'open_base-msg:Velocity))
   (generic
    :reader generic
    :initarg :generic
    :type open_base-msg:MovementGeneric
    :initform (cl:make-instance 'open_base-msg:MovementGeneric))
   (bezier
    :reader bezier
    :initarg :bezier
    :type open_base-msg:MovementBezier
    :initform (cl:make-instance 'open_base-msg:MovementBezier)))
)

(cl:defclass Movement (<Movement>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Movement>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Movement)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-msg:<Movement> is deprecated: use open_base-msg:Movement instead.")))

(cl:ensure-generic-function 'movement-val :lambda-list '(m))
(cl:defmethod movement-val ((m <Movement>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:movement-val is deprecated.  Use open_base-msg:movement instead.")
  (movement m))

(cl:ensure-generic-function 'wheel-val :lambda-list '(m))
(cl:defmethod wheel-val ((m <Movement>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:wheel-val is deprecated.  Use open_base-msg:wheel instead.")
  (wheel m))

(cl:ensure-generic-function 'generic-val :lambda-list '(m))
(cl:defmethod generic-val ((m <Movement>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:generic-val is deprecated.  Use open_base-msg:generic instead.")
  (generic m))

(cl:ensure-generic-function 'bezier-val :lambda-list '(m))
(cl:defmethod bezier-val ((m <Movement>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:bezier-val is deprecated.  Use open_base-msg:bezier instead.")
  (bezier m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<Movement>)))
    "Constants for message type '<Movement>"
  '((:BEZIER . 0)
    (:GENERIC . 1)
    (:NONE . 2)
    (:WHEEL . 3)
    (:POSITION_ABSOLUTE . 0)
    (:POSITION_RELATIVE . 1)
    (:VELOCITY . 2)
    (:HYBRID . 0)
    (:MOBILE . 1)
    (:MOBILE_RAW . 2)
    (:WORLD . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'Movement)))
    "Constants for message type 'Movement"
  '((:BEZIER . 0)
    (:GENERIC . 1)
    (:NONE . 2)
    (:WHEEL . 3)
    (:POSITION_ABSOLUTE . 0)
    (:POSITION_RELATIVE . 1)
    (:VELOCITY . 2)
    (:HYBRID . 0)
    (:MOBILE . 1)
    (:MOBILE_RAW . 2)
    (:WORLD . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Movement>) ostream)
  "Serializes a message object of type '<Movement>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'movement)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'wheel) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'generic) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'bezier) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Movement>) istream)
  "Deserializes a message object of type '<Movement>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'movement)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'wheel) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'generic) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'bezier) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Movement>)))
  "Returns string type for a message object of type '<Movement>"
  "open_base/Movement")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Movement)))
  "Returns string type for a message object of type 'Movement"
  "open_base/Movement")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Movement>)))
  "Returns md5sum for a message object of type '<Movement>"
  "68a9ba8e542ff32c2d272bc9497c5912")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Movement)))
  "Returns md5sum for a message object of type 'Movement"
  "68a9ba8e542ff32c2d272bc9497c5912")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Movement>)))
  "Returns full string definition for message of type '<Movement>"
  (cl:format cl:nil "uint8 movement~%open_base/Velocity wheel~%open_base/MovementGeneric generic~%open_base/MovementBezier bezier~%# movement constants~%uint8 BEZIER=0~%uint8 GENERIC=1~%uint8 NONE=2~%uint8 WHEEL=3~%# type constants~%uint8 POSITION_ABSOLUTE=0~%uint8 POSITION_RELATIVE=1~%uint8 VELOCITY=2~%# frame constants~%uint8 HYBRID=0~%uint8 MOBILE=1~%uint8 MOBILE_RAW=2~%uint8 WORLD=3~%~%================================================================================~%MSG: open_base/Velocity~%float64 v_left~%float64 v_back~%float64 v_right~%~%================================================================================~%MSG: open_base/MovementGeneric~%uint8 type~%uint8 frame~%geometry_msgs/Pose2D target~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%================================================================================~%MSG: open_base/MovementBezier~%uint8 frame~%geometry_msgs/Pose2D[] targetTranslation~%float64[] targetRotation~%float64 step~%bool offsetTraslation~%bool offsetRotation~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Movement)))
  "Returns full string definition for message of type 'Movement"
  (cl:format cl:nil "uint8 movement~%open_base/Velocity wheel~%open_base/MovementGeneric generic~%open_base/MovementBezier bezier~%# movement constants~%uint8 BEZIER=0~%uint8 GENERIC=1~%uint8 NONE=2~%uint8 WHEEL=3~%# type constants~%uint8 POSITION_ABSOLUTE=0~%uint8 POSITION_RELATIVE=1~%uint8 VELOCITY=2~%# frame constants~%uint8 HYBRID=0~%uint8 MOBILE=1~%uint8 MOBILE_RAW=2~%uint8 WORLD=3~%~%================================================================================~%MSG: open_base/Velocity~%float64 v_left~%float64 v_back~%float64 v_right~%~%================================================================================~%MSG: open_base/MovementGeneric~%uint8 type~%uint8 frame~%geometry_msgs/Pose2D target~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%================================================================================~%MSG: open_base/MovementBezier~%uint8 frame~%geometry_msgs/Pose2D[] targetTranslation~%float64[] targetRotation~%float64 step~%bool offsetTraslation~%bool offsetRotation~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Movement>))
  (cl:+ 0
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'wheel))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'generic))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'bezier))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Movement>))
  "Converts a ROS message object to a list"
  (cl:list 'Movement
    (cl:cons ':movement (movement msg))
    (cl:cons ':wheel (wheel msg))
    (cl:cons ':generic (generic msg))
    (cl:cons ':bezier (bezier msg))
))
