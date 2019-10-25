; Auto-generated. Do not edit!


(cl:in-package open_base-msg)


;//! \htmlinclude MovementBezier.msg.html

(cl:defclass <MovementBezier> (roslisp-msg-protocol:ros-message)
  ((frame
    :reader frame
    :initarg :frame
    :type cl:fixnum
    :initform 0)
   (targetTranslation
    :reader targetTranslation
    :initarg :targetTranslation
    :type (cl:vector geometry_msgs-msg:Pose2D)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Pose2D :initial-element (cl:make-instance 'geometry_msgs-msg:Pose2D)))
   (targetRotation
    :reader targetRotation
    :initarg :targetRotation
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (step
    :reader step
    :initarg :step
    :type cl:float
    :initform 0.0)
   (offsetTraslation
    :reader offsetTraslation
    :initarg :offsetTraslation
    :type cl:boolean
    :initform cl:nil)
   (offsetRotation
    :reader offsetRotation
    :initarg :offsetRotation
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MovementBezier (<MovementBezier>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MovementBezier>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MovementBezier)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_base-msg:<MovementBezier> is deprecated: use open_base-msg:MovementBezier instead.")))

(cl:ensure-generic-function 'frame-val :lambda-list '(m))
(cl:defmethod frame-val ((m <MovementBezier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:frame-val is deprecated.  Use open_base-msg:frame instead.")
  (frame m))

(cl:ensure-generic-function 'targetTranslation-val :lambda-list '(m))
(cl:defmethod targetTranslation-val ((m <MovementBezier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:targetTranslation-val is deprecated.  Use open_base-msg:targetTranslation instead.")
  (targetTranslation m))

(cl:ensure-generic-function 'targetRotation-val :lambda-list '(m))
(cl:defmethod targetRotation-val ((m <MovementBezier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:targetRotation-val is deprecated.  Use open_base-msg:targetRotation instead.")
  (targetRotation m))

(cl:ensure-generic-function 'step-val :lambda-list '(m))
(cl:defmethod step-val ((m <MovementBezier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:step-val is deprecated.  Use open_base-msg:step instead.")
  (step m))

(cl:ensure-generic-function 'offsetTraslation-val :lambda-list '(m))
(cl:defmethod offsetTraslation-val ((m <MovementBezier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:offsetTraslation-val is deprecated.  Use open_base-msg:offsetTraslation instead.")
  (offsetTraslation m))

(cl:ensure-generic-function 'offsetRotation-val :lambda-list '(m))
(cl:defmethod offsetRotation-val ((m <MovementBezier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_base-msg:offsetRotation-val is deprecated.  Use open_base-msg:offsetRotation instead.")
  (offsetRotation m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MovementBezier>) ostream)
  "Serializes a message object of type '<MovementBezier>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'frame)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'targetTranslation))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'targetTranslation))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'targetRotation))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'targetRotation))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'step))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'offsetTraslation) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'offsetRotation) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MovementBezier>) istream)
  "Deserializes a message object of type '<MovementBezier>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'frame)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'targetTranslation) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'targetTranslation)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Pose2D))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'targetRotation) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'targetRotation)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'step) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:slot-value msg 'offsetTraslation) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'offsetRotation) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MovementBezier>)))
  "Returns string type for a message object of type '<MovementBezier>"
  "open_base/MovementBezier")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MovementBezier)))
  "Returns string type for a message object of type 'MovementBezier"
  "open_base/MovementBezier")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MovementBezier>)))
  "Returns md5sum for a message object of type '<MovementBezier>"
  "ded95d34881d8c480a26fcec4fc049df")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MovementBezier)))
  "Returns md5sum for a message object of type 'MovementBezier"
  "ded95d34881d8c480a26fcec4fc049df")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MovementBezier>)))
  "Returns full string definition for message of type '<MovementBezier>"
  (cl:format cl:nil "uint8 frame~%geometry_msgs/Pose2D[] targetTranslation~%float64[] targetRotation~%float64 step~%bool offsetTraslation~%bool offsetRotation~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MovementBezier)))
  "Returns full string definition for message of type 'MovementBezier"
  (cl:format cl:nil "uint8 frame~%geometry_msgs/Pose2D[] targetTranslation~%float64[] targetRotation~%float64 step~%bool offsetTraslation~%bool offsetRotation~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MovementBezier>))
  (cl:+ 0
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'targetTranslation) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'targetRotation) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     8
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MovementBezier>))
  "Converts a ROS message object to a list"
  (cl:list 'MovementBezier
    (cl:cons ':frame (frame msg))
    (cl:cons ':targetTranslation (targetTranslation msg))
    (cl:cons ':targetRotation (targetRotation msg))
    (cl:cons ':step (step msg))
    (cl:cons ':offsetTraslation (offsetTraslation msg))
    (cl:cons ':offsetRotation (offsetRotation msg))
))
