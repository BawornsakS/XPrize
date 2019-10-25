; Auto-generated. Do not edit!


(cl:in-package neo_msgs-msg)


;//! \htmlinclude IOAnalogIn.msg.html

(cl:defclass <IOAnalogIn> (roslisp-msg-protocol:ros-message)
  ((input
    :reader input
    :initarg :input
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 8 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass IOAnalogIn (<IOAnalogIn>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IOAnalogIn>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IOAnalogIn)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neo_msgs-msg:<IOAnalogIn> is deprecated: use neo_msgs-msg:IOAnalogIn instead.")))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <IOAnalogIn>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:input-val is deprecated.  Use neo_msgs-msg:input instead.")
  (input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IOAnalogIn>) ostream)
  "Serializes a message object of type '<IOAnalogIn>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    ))
   (cl:slot-value msg 'input))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IOAnalogIn>) istream)
  "Deserializes a message object of type '<IOAnalogIn>"
  (cl:setf (cl:slot-value msg 'input) (cl:make-array 8))
  (cl:let ((vals (cl:slot-value msg 'input)))
    (cl:dotimes (i 8)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IOAnalogIn>)))
  "Returns string type for a message object of type '<IOAnalogIn>"
  "neo_msgs/IOAnalogIn")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IOAnalogIn)))
  "Returns string type for a message object of type 'IOAnalogIn"
  "neo_msgs/IOAnalogIn")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IOAnalogIn>)))
  "Returns md5sum for a message object of type '<IOAnalogIn>"
  "4b0e4815c9bd4f4b74f05fb5691e16a6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IOAnalogIn)))
  "Returns md5sum for a message object of type 'IOAnalogIn"
  "4b0e4815c9bd4f4b74f05fb5691e16a6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IOAnalogIn>)))
  "Returns full string definition for message of type '<IOAnalogIn>"
  (cl:format cl:nil "int16[8] input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IOAnalogIn)))
  "Returns full string definition for message of type 'IOAnalogIn"
  (cl:format cl:nil "int16[8] input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IOAnalogIn>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'input) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IOAnalogIn>))
  "Converts a ROS message object to a list"
  (cl:list 'IOAnalogIn
    (cl:cons ':input (input msg))
))
