; Auto-generated. Do not edit!


(cl:in-package neo_msgs-msg)


;//! \htmlinclude LCDOutput.msg.html

(cl:defclass <LCDOutput> (roslisp-msg-protocol:ros-message)
  ((msg_line
    :reader msg_line
    :initarg :msg_line
    :type cl:string
    :initform ""))
)

(cl:defclass LCDOutput (<LCDOutput>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LCDOutput>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LCDOutput)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neo_msgs-msg:<LCDOutput> is deprecated: use neo_msgs-msg:LCDOutput instead.")))

(cl:ensure-generic-function 'msg_line-val :lambda-list '(m))
(cl:defmethod msg_line-val ((m <LCDOutput>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:msg_line-val is deprecated.  Use neo_msgs-msg:msg_line instead.")
  (msg_line m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LCDOutput>) ostream)
  "Serializes a message object of type '<LCDOutput>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'msg_line))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'msg_line))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LCDOutput>) istream)
  "Deserializes a message object of type '<LCDOutput>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'msg_line) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'msg_line) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LCDOutput>)))
  "Returns string type for a message object of type '<LCDOutput>"
  "neo_msgs/LCDOutput")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LCDOutput)))
  "Returns string type for a message object of type 'LCDOutput"
  "neo_msgs/LCDOutput")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LCDOutput>)))
  "Returns md5sum for a message object of type '<LCDOutput>"
  "a223a10d4aa8b3dc5e74a6c05e5047f2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LCDOutput)))
  "Returns md5sum for a message object of type 'LCDOutput"
  "a223a10d4aa8b3dc5e74a6c05e5047f2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LCDOutput>)))
  "Returns full string definition for message of type '<LCDOutput>"
  (cl:format cl:nil "string msg_line 	#in mode 1 msg_lines size is limited to 20 chars~%			#in mode 2 msg_lines size is limited to 60 chars~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LCDOutput)))
  "Returns full string definition for message of type 'LCDOutput"
  (cl:format cl:nil "string msg_line 	#in mode 1 msg_lines size is limited to 20 chars~%			#in mode 2 msg_lines size is limited to 60 chars~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LCDOutput>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'msg_line))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LCDOutput>))
  "Converts a ROS message object to a list"
  (cl:list 'LCDOutput
    (cl:cons ':msg_line (msg_line msg))
))
