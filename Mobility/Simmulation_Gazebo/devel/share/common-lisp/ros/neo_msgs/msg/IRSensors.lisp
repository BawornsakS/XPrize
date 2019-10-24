; Auto-generated. Do not edit!


(cl:in-package neo_msgs-msg)


;//! \htmlinclude IRSensors.msg.html

(cl:defclass <IRSensors> (roslisp-msg-protocol:ros-message)
  ((measurement
    :reader measurement
    :initarg :measurement
    :type (cl:vector cl:integer)
   :initform (cl:make-array 4 :element-type 'cl:integer :initial-element 0)))
)

(cl:defclass IRSensors (<IRSensors>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IRSensors>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IRSensors)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neo_msgs-msg:<IRSensors> is deprecated: use neo_msgs-msg:IRSensors instead.")))

(cl:ensure-generic-function 'measurement-val :lambda-list '(m))
(cl:defmethod measurement-val ((m <IRSensors>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:measurement-val is deprecated.  Use neo_msgs-msg:measurement instead.")
  (measurement m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IRSensors>) ostream)
  "Serializes a message object of type '<IRSensors>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'measurement))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IRSensors>) istream)
  "Deserializes a message object of type '<IRSensors>"
  (cl:setf (cl:slot-value msg 'measurement) (cl:make-array 4))
  (cl:let ((vals (cl:slot-value msg 'measurement)))
    (cl:dotimes (i 4)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IRSensors>)))
  "Returns string type for a message object of type '<IRSensors>"
  "neo_msgs/IRSensors")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IRSensors)))
  "Returns string type for a message object of type 'IRSensors"
  "neo_msgs/IRSensors")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IRSensors>)))
  "Returns md5sum for a message object of type '<IRSensors>"
  "0b608e536c75438a771e1cfb29f4b570")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IRSensors)))
  "Returns md5sum for a message object of type 'IRSensors"
  "0b608e536c75438a771e1cfb29f4b570")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IRSensors>)))
  "Returns full string definition for message of type '<IRSensors>"
  (cl:format cl:nil "int32[4] measurement~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IRSensors)))
  "Returns full string definition for message of type 'IRSensors"
  (cl:format cl:nil "int32[4] measurement~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IRSensors>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'measurement) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IRSensors>))
  "Converts a ROS message object to a list"
  (cl:list 'IRSensors
    (cl:cons ':measurement (measurement msg))
))
