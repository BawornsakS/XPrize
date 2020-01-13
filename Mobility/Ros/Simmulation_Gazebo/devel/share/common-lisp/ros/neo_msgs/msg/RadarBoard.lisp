; Auto-generated. Do not edit!


(cl:in-package neo_msgs-msg)


;//! \htmlinclude RadarBoard.msg.html

(cl:defclass <RadarBoard> (roslisp-msg-protocol:ros-message)
  ((velocity
    :reader velocity
    :initarg :velocity
    :type (cl:vector cl:float)
   :initform (cl:make-array 3 :element-type 'cl:float :initial-element 0.0))
   (state
    :reader state
    :initarg :state
    :type cl:integer
    :initform 0))
)

(cl:defclass RadarBoard (<RadarBoard>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RadarBoard>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RadarBoard)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neo_msgs-msg:<RadarBoard> is deprecated: use neo_msgs-msg:RadarBoard instead.")))

(cl:ensure-generic-function 'velocity-val :lambda-list '(m))
(cl:defmethod velocity-val ((m <RadarBoard>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:velocity-val is deprecated.  Use neo_msgs-msg:velocity instead.")
  (velocity m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <RadarBoard>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:state-val is deprecated.  Use neo_msgs-msg:state instead.")
  (state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RadarBoard>) ostream)
  "Serializes a message object of type '<RadarBoard>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'velocity))
  (cl:let* ((signed (cl:slot-value msg 'state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RadarBoard>) istream)
  "Deserializes a message object of type '<RadarBoard>"
  (cl:setf (cl:slot-value msg 'velocity) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'velocity)))
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
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'state) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RadarBoard>)))
  "Returns string type for a message object of type '<RadarBoard>"
  "neo_msgs/RadarBoard")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RadarBoard)))
  "Returns string type for a message object of type 'RadarBoard"
  "neo_msgs/RadarBoard")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RadarBoard>)))
  "Returns md5sum for a message object of type '<RadarBoard>"
  "2a5dbee0d40bb12d02b78bf551ec141d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RadarBoard)))
  "Returns md5sum for a message object of type 'RadarBoard"
  "2a5dbee0d40bb12d02b78bf551ec141d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RadarBoard>)))
  "Returns full string definition for message of type '<RadarBoard>"
  (cl:format cl:nil "float64[3] velocity~%int32 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RadarBoard)))
  "Returns full string definition for message of type 'RadarBoard"
  (cl:format cl:nil "float64[3] velocity~%int32 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RadarBoard>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'velocity) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RadarBoard>))
  "Converts a ROS message object to a list"
  (cl:list 'RadarBoard
    (cl:cons ':velocity (velocity msg))
    (cl:cons ':state (state msg))
))
