; Auto-generated. Do not edit!


(cl:in-package open_base-srv)


;//! \htmlinclude KinematicsForward-request.msg.html

(cl:defclass <KinematicsForward-request> (roslisp-msg-protocol:ros-message)
  ((input
    :reader input
    :initarg :input
    :type open_base-msg:Velocity
    :initform (cl:make-instance 'open_base-msg:Velocity)))
)

(cl:defclass KinematicsForward-request (<KinematicsForward-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <KinematicsForward-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'KinematicsForward-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-srv:<KinematicsForward-request> is deprecated: use open_base-srv:KinematicsForward-request instead.")))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <KinematicsForward-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-srv:input-val is deprecated.  Use open_base-srv:input instead.")
  (input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <KinematicsForward-request>) ostream)
  "Serializes a message object of type '<KinematicsForward-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'input) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <KinematicsForward-request>) istream)
  "Deserializes a message object of type '<KinematicsForward-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'input) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<KinematicsForward-request>)))
  "Returns string type for a service object of type '<KinematicsForward-request>"
  "open_base/KinematicsForwardRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'KinematicsForward-request)))
  "Returns string type for a service object of type 'KinematicsForward-request"
  "open_base/KinematicsForwardRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<KinematicsForward-request>)))
  "Returns md5sum for a message object of type '<KinematicsForward-request>"
  "4f057007e926424c383ecaa1817c5251")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'KinematicsForward-request)))
  "Returns md5sum for a message object of type 'KinematicsForward-request"
  "4f057007e926424c383ecaa1817c5251")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<KinematicsForward-request>)))
  "Returns full string definition for message of type '<KinematicsForward-request>"
  (cl:format cl:nil "open_base/Velocity input~%~%================================================================================~%MSG: open_base/Velocity~%float64 v_left~%float64 v_back~%float64 v_right~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'KinematicsForward-request)))
  "Returns full string definition for message of type 'KinematicsForward-request"
  (cl:format cl:nil "open_base/Velocity input~%~%================================================================================~%MSG: open_base/Velocity~%float64 v_left~%float64 v_back~%float64 v_right~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <KinematicsForward-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'input))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <KinematicsForward-request>))
  "Converts a ROS message object to a list"
  (cl:list 'KinematicsForward-request
    (cl:cons ':input (input msg))
))
;//! \htmlinclude KinematicsForward-response.msg.html

(cl:defclass <KinematicsForward-response> (roslisp-msg-protocol:ros-message)
  ((output
    :reader output
    :initarg :output
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D)))
)

(cl:defclass KinematicsForward-response (<KinematicsForward-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <KinematicsForward-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'KinematicsForward-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-srv:<KinematicsForward-response> is deprecated: use open_base-srv:KinematicsForward-response instead.")))

(cl:ensure-generic-function 'output-val :lambda-list '(m))
(cl:defmethod output-val ((m <KinematicsForward-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-srv:output-val is deprecated.  Use open_base-srv:output instead.")
  (output m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <KinematicsForward-response>) ostream)
  "Serializes a message object of type '<KinematicsForward-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'output) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <KinematicsForward-response>) istream)
  "Deserializes a message object of type '<KinematicsForward-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'output) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<KinematicsForward-response>)))
  "Returns string type for a service object of type '<KinematicsForward-response>"
  "open_base/KinematicsForwardResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'KinematicsForward-response)))
  "Returns string type for a service object of type 'KinematicsForward-response"
  "open_base/KinematicsForwardResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<KinematicsForward-response>)))
  "Returns md5sum for a message object of type '<KinematicsForward-response>"
  "4f057007e926424c383ecaa1817c5251")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'KinematicsForward-response)))
  "Returns md5sum for a message object of type 'KinematicsForward-response"
  "4f057007e926424c383ecaa1817c5251")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<KinematicsForward-response>)))
  "Returns full string definition for message of type '<KinematicsForward-response>"
  (cl:format cl:nil "geometry_msgs/Pose2D output~%~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'KinematicsForward-response)))
  "Returns full string definition for message of type 'KinematicsForward-response"
  (cl:format cl:nil "geometry_msgs/Pose2D output~%~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <KinematicsForward-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'output))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <KinematicsForward-response>))
  "Converts a ROS message object to a list"
  (cl:list 'KinematicsForward-response
    (cl:cons ':output (output msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'KinematicsForward)))
  'KinematicsForward-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'KinematicsForward)))
  'KinematicsForward-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'KinematicsForward)))
  "Returns string type for a service object of type '<KinematicsForward>"
  "open_base/KinematicsForward")