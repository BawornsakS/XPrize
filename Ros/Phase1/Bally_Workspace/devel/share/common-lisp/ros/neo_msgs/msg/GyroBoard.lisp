; Auto-generated. Do not edit!


(cl:in-package neo_msgs-msg)


;//! \htmlinclude GyroBoard.msg.html

(cl:defclass <GyroBoard> (roslisp-msg-protocol:ros-message)
  ((acceleration
    :reader acceleration
    :initarg :acceleration
    :type (cl:vector cl:float)
   :initform (cl:make-array 3 :element-type 'cl:float :initial-element 0.0))
   (orientation
    :reader orientation
    :initarg :orientation
    :type cl:float
    :initform 0.0))
)

(cl:defclass GyroBoard (<GyroBoard>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GyroBoard>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GyroBoard)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neo_msgs-msg:<GyroBoard> is deprecated: use neo_msgs-msg:GyroBoard instead.")))

(cl:ensure-generic-function 'acceleration-val :lambda-list '(m))
(cl:defmethod acceleration-val ((m <GyroBoard>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:acceleration-val is deprecated.  Use neo_msgs-msg:acceleration instead.")
  (acceleration m))

(cl:ensure-generic-function 'orientation-val :lambda-list '(m))
(cl:defmethod orientation-val ((m <GyroBoard>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:orientation-val is deprecated.  Use neo_msgs-msg:orientation instead.")
  (orientation m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GyroBoard>) ostream)
  "Serializes a message object of type '<GyroBoard>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'acceleration))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'orientation))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GyroBoard>) istream)
  "Deserializes a message object of type '<GyroBoard>"
  (cl:setf (cl:slot-value msg 'acceleration) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'acceleration)))
    (cl:dotimes (i 3)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'orientation) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GyroBoard>)))
  "Returns string type for a message object of type '<GyroBoard>"
  "neo_msgs/GyroBoard")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GyroBoard)))
  "Returns string type for a message object of type 'GyroBoard"
  "neo_msgs/GyroBoard")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GyroBoard>)))
  "Returns md5sum for a message object of type '<GyroBoard>"
  "2b635625b22ccc397d44e4cb7dac6a32")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GyroBoard)))
  "Returns md5sum for a message object of type 'GyroBoard"
  "2b635625b22ccc397d44e4cb7dac6a32")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GyroBoard>)))
  "Returns full string definition for message of type '<GyroBoard>"
  (cl:format cl:nil "float64[3] acceleration #acceleration along the 3 axis~%float64 orientation #angle around the 3rd axe~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GyroBoard)))
  "Returns full string definition for message of type 'GyroBoard"
  (cl:format cl:nil "float64[3] acceleration #acceleration along the 3 axis~%float64 orientation #angle around the 3rd axe~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GyroBoard>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'acceleration) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GyroBoard>))
  "Converts a ROS message object to a list"
  (cl:list 'GyroBoard
    (cl:cons ':acceleration (acceleration msg))
    (cl:cons ':orientation (orientation msg))
))
