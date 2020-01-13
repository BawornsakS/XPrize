; Auto-generated. Do not edit!


(cl:in-package open_base-msg)


;//! \htmlinclude MovementGeneric.msg.html

(cl:defclass <MovementGeneric> (roslisp-msg-protocol:ros-message)
  ((type
    :reader type
    :initarg :type
    :type cl:fixnum
    :initform 0)
   (frame
    :reader frame
    :initarg :frame
    :type cl:fixnum
    :initform 0)
   (target
    :reader target
    :initarg :target
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D)))
)

(cl:defclass MovementGeneric (<MovementGeneric>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MovementGeneric>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MovementGeneric)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-msg:<MovementGeneric> is deprecated: use open_base-msg:MovementGeneric instead.")))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <MovementGeneric>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:type-val is deprecated.  Use open_base-msg:type instead.")
  (type m))

(cl:ensure-generic-function 'frame-val :lambda-list '(m))
(cl:defmethod frame-val ((m <MovementGeneric>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:frame-val is deprecated.  Use open_base-msg:frame instead.")
  (frame m))

(cl:ensure-generic-function 'target-val :lambda-list '(m))
(cl:defmethod target-val ((m <MovementGeneric>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:target-val is deprecated.  Use open_base-msg:target instead.")
  (target m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MovementGeneric>) ostream)
  "Serializes a message object of type '<MovementGeneric>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'frame)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'target) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MovementGeneric>) istream)
  "Deserializes a message object of type '<MovementGeneric>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'frame)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'target) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MovementGeneric>)))
  "Returns string type for a message object of type '<MovementGeneric>"
  "open_base/MovementGeneric")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MovementGeneric)))
  "Returns string type for a message object of type 'MovementGeneric"
  "open_base/MovementGeneric")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MovementGeneric>)))
  "Returns md5sum for a message object of type '<MovementGeneric>"
  "4524cf69d2ddd194d9c04f05478153fd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MovementGeneric)))
  "Returns md5sum for a message object of type 'MovementGeneric"
  "4524cf69d2ddd194d9c04f05478153fd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MovementGeneric>)))
  "Returns full string definition for message of type '<MovementGeneric>"
  (cl:format cl:nil "uint8 type~%uint8 frame~%geometry_msgs/Pose2D target~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MovementGeneric)))
  "Returns full string definition for message of type 'MovementGeneric"
  (cl:format cl:nil "uint8 type~%uint8 frame~%geometry_msgs/Pose2D target~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MovementGeneric>))
  (cl:+ 0
     1
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'target))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MovementGeneric>))
  "Converts a ROS message object to a list"
  (cl:list 'MovementGeneric
    (cl:cons ':type (type msg))
    (cl:cons ':frame (frame msg))
    (cl:cons ':target (target msg))
))
