; Auto-generated. Do not edit!


(cl:in-package neo_msgs-msg)


;//! \htmlinclude USBoard.msg.html

(cl:defclass <USBoard> (roslisp-msg-protocol:ros-message)
  ((sensor
    :reader sensor
    :initarg :sensor
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 16 :element-type 'cl:fixnum :initial-element 0))
   (analog
    :reader analog
    :initarg :analog
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 4 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass USBoard (<USBoard>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <USBoard>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'USBoard)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neo_msgs-msg:<USBoard> is deprecated: use neo_msgs-msg:USBoard instead.")))

(cl:ensure-generic-function 'sensor-val :lambda-list '(m))
(cl:defmethod sensor-val ((m <USBoard>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:sensor-val is deprecated.  Use neo_msgs-msg:sensor instead.")
  (sensor m))

(cl:ensure-generic-function 'analog-val :lambda-list '(m))
(cl:defmethod analog-val ((m <USBoard>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:analog-val is deprecated.  Use neo_msgs-msg:analog instead.")
  (analog m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <USBoard>) ostream)
  "Serializes a message object of type '<USBoard>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'sensor))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    ))
   (cl:slot-value msg 'analog))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <USBoard>) istream)
  "Deserializes a message object of type '<USBoard>"
  (cl:setf (cl:slot-value msg 'sensor) (cl:make-array 16))
  (cl:let ((vals (cl:slot-value msg 'sensor)))
    (cl:dotimes (i 16)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))))
  (cl:setf (cl:slot-value msg 'analog) (cl:make-array 4))
  (cl:let ((vals (cl:slot-value msg 'analog)))
    (cl:dotimes (i 4)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<USBoard>)))
  "Returns string type for a message object of type '<USBoard>"
  "neo_msgs/USBoard")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'USBoard)))
  "Returns string type for a message object of type 'USBoard"
  "neo_msgs/USBoard")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<USBoard>)))
  "Returns md5sum for a message object of type '<USBoard>"
  "089d96eea3a0e01a364455ac3fa3cb33")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'USBoard)))
  "Returns md5sum for a message object of type 'USBoard"
  "089d96eea3a0e01a364455ac3fa3cb33")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<USBoard>)))
  "Returns full string definition for message of type '<USBoard>"
  (cl:format cl:nil "uint8[16] sensor 	#sensor measurement~%int16[4] analog 	#analogue input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'USBoard)))
  "Returns full string definition for message of type 'USBoard"
  (cl:format cl:nil "uint8[16] sensor 	#sensor measurement~%int16[4] analog 	#analogue input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <USBoard>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'sensor) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'analog) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <USBoard>))
  "Converts a ROS message object to a list"
  (cl:list 'USBoard
    (cl:cons ':sensor (sensor msg))
    (cl:cons ':analog (analog msg))
))
