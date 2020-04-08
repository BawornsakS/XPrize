; Auto-generated. Do not edit!


(cl:in-package open_base-srv)


;//! \htmlinclude FrameToFrame-request.msg.html

(cl:defclass <FrameToFrame-request> (roslisp-msg-protocol:ros-message)
  ((input
    :reader input
    :initarg :input
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D)))
)

(cl:defclass FrameToFrame-request (<FrameToFrame-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FrameToFrame-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FrameToFrame-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-srv:<FrameToFrame-request> is deprecated: use open_base-srv:FrameToFrame-request instead.")))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <FrameToFrame-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-srv:input-val is deprecated.  Use open_base-srv:input instead.")
  (input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FrameToFrame-request>) ostream)
  "Serializes a message object of type '<FrameToFrame-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'input) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FrameToFrame-request>) istream)
  "Deserializes a message object of type '<FrameToFrame-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'input) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FrameToFrame-request>)))
  "Returns string type for a service object of type '<FrameToFrame-request>"
  "open_base/FrameToFrameRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FrameToFrame-request)))
  "Returns string type for a service object of type 'FrameToFrame-request"
  "open_base/FrameToFrameRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FrameToFrame-request>)))
  "Returns md5sum for a message object of type '<FrameToFrame-request>"
  "405de59229ff9ecc65cfa6d1fe41484d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FrameToFrame-request)))
  "Returns md5sum for a message object of type 'FrameToFrame-request"
  "405de59229ff9ecc65cfa6d1fe41484d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FrameToFrame-request>)))
  "Returns full string definition for message of type '<FrameToFrame-request>"
  (cl:format cl:nil "geometry_msgs/Pose2D input~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FrameToFrame-request)))
  "Returns full string definition for message of type 'FrameToFrame-request"
  (cl:format cl:nil "geometry_msgs/Pose2D input~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FrameToFrame-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'input))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FrameToFrame-request>))
  "Converts a ROS message object to a list"
  (cl:list 'FrameToFrame-request
    (cl:cons ':input (input msg))
))
;//! \htmlinclude FrameToFrame-response.msg.html

(cl:defclass <FrameToFrame-response> (roslisp-msg-protocol:ros-message)
  ((output
    :reader output
    :initarg :output
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D)))
)

(cl:defclass FrameToFrame-response (<FrameToFrame-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FrameToFrame-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FrameToFrame-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-srv:<FrameToFrame-response> is deprecated: use open_base-srv:FrameToFrame-response instead.")))

(cl:ensure-generic-function 'output-val :lambda-list '(m))
(cl:defmethod output-val ((m <FrameToFrame-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-srv:output-val is deprecated.  Use open_base-srv:output instead.")
  (output m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FrameToFrame-response>) ostream)
  "Serializes a message object of type '<FrameToFrame-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'output) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FrameToFrame-response>) istream)
  "Deserializes a message object of type '<FrameToFrame-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'output) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FrameToFrame-response>)))
  "Returns string type for a service object of type '<FrameToFrame-response>"
  "open_base/FrameToFrameResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FrameToFrame-response)))
  "Returns string type for a service object of type 'FrameToFrame-response"
  "open_base/FrameToFrameResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FrameToFrame-response>)))
  "Returns md5sum for a message object of type '<FrameToFrame-response>"
  "405de59229ff9ecc65cfa6d1fe41484d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FrameToFrame-response)))
  "Returns md5sum for a message object of type 'FrameToFrame-response"
  "405de59229ff9ecc65cfa6d1fe41484d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FrameToFrame-response>)))
  "Returns full string definition for message of type '<FrameToFrame-response>"
  (cl:format cl:nil "geometry_msgs/Pose2D output~%~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FrameToFrame-response)))
  "Returns full string definition for message of type 'FrameToFrame-response"
  (cl:format cl:nil "geometry_msgs/Pose2D output~%~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FrameToFrame-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'output))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FrameToFrame-response>))
  "Converts a ROS message object to a list"
  (cl:list 'FrameToFrame-response
    (cl:cons ':output (output msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'FrameToFrame)))
  'FrameToFrame-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'FrameToFrame)))
  'FrameToFrame-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FrameToFrame)))
  "Returns string type for a service object of type '<FrameToFrame>"
  "open_base/FrameToFrame")