; Auto-generated. Do not edit!


(cl:in-package open_base-srv)


;//! \htmlinclude KinematicsInverse-request.msg.html

(cl:defclass <KinematicsInverse-request> (roslisp-msg-protocol:ros-message)
  ((input
    :reader input
    :initarg :input
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D)))
)

(cl:defclass KinematicsInverse-request (<KinematicsInverse-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <KinematicsInverse-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'KinematicsInverse-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-srv:<KinematicsInverse-request> is deprecated: use open_base-srv:KinematicsInverse-request instead.")))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <KinematicsInverse-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-srv:input-val is deprecated.  Use open_base-srv:input instead.")
  (input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <KinematicsInverse-request>) ostream)
  "Serializes a message object of type '<KinematicsInverse-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'input) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <KinematicsInverse-request>) istream)
  "Deserializes a message object of type '<KinematicsInverse-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'input) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<KinematicsInverse-request>)))
  "Returns string type for a service object of type '<KinematicsInverse-request>"
  "open_base/KinematicsInverseRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'KinematicsInverse-request)))
  "Returns string type for a service object of type 'KinematicsInverse-request"
  "open_base/KinematicsInverseRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<KinematicsInverse-request>)))
  "Returns md5sum for a message object of type '<KinematicsInverse-request>"
  "cb684d22809e19793d1c5c527b5f8cf4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'KinematicsInverse-request)))
  "Returns md5sum for a message object of type 'KinematicsInverse-request"
  "cb684d22809e19793d1c5c527b5f8cf4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<KinematicsInverse-request>)))
  "Returns full string definition for message of type '<KinematicsInverse-request>"
  (cl:format cl:nil "geometry_msgs/Pose2D input~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'KinematicsInverse-request)))
  "Returns full string definition for message of type 'KinematicsInverse-request"
  (cl:format cl:nil "geometry_msgs/Pose2D input~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <KinematicsInverse-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'input))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <KinematicsInverse-request>))
  "Converts a ROS message object to a list"
  (cl:list 'KinematicsInverse-request
    (cl:cons ':input (input msg))
))
;//! \htmlinclude KinematicsInverse-response.msg.html

(cl:defclass <KinematicsInverse-response> (roslisp-msg-protocol:ros-message)
  ((output
    :reader output
    :initarg :output
    :type open_base-msg:Velocity
    :initform (cl:make-instance 'open_base-msg:Velocity)))
)

(cl:defclass KinematicsInverse-response (<KinematicsInverse-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <KinematicsInverse-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'KinematicsInverse-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-srv:<KinematicsInverse-response> is deprecated: use open_base-srv:KinematicsInverse-response instead.")))

(cl:ensure-generic-function 'output-val :lambda-list '(m))
(cl:defmethod output-val ((m <KinematicsInverse-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-srv:output-val is deprecated.  Use open_base-srv:output instead.")
  (output m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <KinematicsInverse-response>) ostream)
  "Serializes a message object of type '<KinematicsInverse-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'output) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <KinematicsInverse-response>) istream)
  "Deserializes a message object of type '<KinematicsInverse-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'output) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<KinematicsInverse-response>)))
  "Returns string type for a service object of type '<KinematicsInverse-response>"
  "open_base/KinematicsInverseResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'KinematicsInverse-response)))
  "Returns string type for a service object of type 'KinematicsInverse-response"
  "open_base/KinematicsInverseResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<KinematicsInverse-response>)))
  "Returns md5sum for a message object of type '<KinematicsInverse-response>"
  "cb684d22809e19793d1c5c527b5f8cf4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'KinematicsInverse-response)))
  "Returns md5sum for a message object of type 'KinematicsInverse-response"
  "cb684d22809e19793d1c5c527b5f8cf4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<KinematicsInverse-response>)))
  "Returns full string definition for message of type '<KinematicsInverse-response>"
  (cl:format cl:nil "open_base/Velocity output~%~%~%================================================================================~%MSG: open_base/Velocity~%float64 v_left~%float64 v_back~%float64 v_right~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'KinematicsInverse-response)))
  "Returns full string definition for message of type 'KinematicsInverse-response"
  (cl:format cl:nil "open_base/Velocity output~%~%~%================================================================================~%MSG: open_base/Velocity~%float64 v_left~%float64 v_back~%float64 v_right~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <KinematicsInverse-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'output))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <KinematicsInverse-response>))
  "Converts a ROS message object to a list"
  (cl:list 'KinematicsInverse-response
    (cl:cons ':output (output msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'KinematicsInverse)))
  'KinematicsInverse-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'KinematicsInverse)))
  'KinematicsInverse-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'KinematicsInverse)))
  "Returns string type for a service object of type '<KinematicsInverse>"
  "open_base/KinematicsInverse")