; Auto-generated. Do not edit!


(cl:in-package neo_msgs-msg)


;//! \htmlinclude IOOut.msg.html

(cl:defclass <IOOut> (roslisp-msg-protocol:ros-message)
  ((channel
    :reader channel
    :initarg :channel
    :type cl:fixnum
    :initform 0)
   (active
    :reader active
    :initarg :active
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass IOOut (<IOOut>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IOOut>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IOOut)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neo_msgs-msg:<IOOut> is deprecated: use neo_msgs-msg:IOOut instead.")))

(cl:ensure-generic-function 'channel-val :lambda-list '(m))
(cl:defmethod channel-val ((m <IOOut>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:channel-val is deprecated.  Use neo_msgs-msg:channel instead.")
  (channel m))

(cl:ensure-generic-function 'active-val :lambda-list '(m))
(cl:defmethod active-val ((m <IOOut>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:active-val is deprecated.  Use neo_msgs-msg:active instead.")
  (active m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IOOut>) ostream)
  "Serializes a message object of type '<IOOut>"
  (cl:let* ((signed (cl:slot-value msg 'channel)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'active) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IOOut>) istream)
  "Deserializes a message object of type '<IOOut>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'channel) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:slot-value msg 'active) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IOOut>)))
  "Returns string type for a message object of type '<IOOut>"
  "neo_msgs/IOOut")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IOOut)))
  "Returns string type for a message object of type 'IOOut"
  "neo_msgs/IOOut")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IOOut>)))
  "Returns md5sum for a message object of type '<IOOut>"
  "894ccc9cba8043db3f885fa5ca0edd62")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IOOut)))
  "Returns md5sum for a message object of type 'IOOut"
  "894ccc9cba8043db3f885fa5ca0edd62")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IOOut>)))
  "Returns full string definition for message of type '<IOOut>"
  (cl:format cl:nil "int16 channel~%bool active~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IOOut)))
  "Returns full string definition for message of type 'IOOut"
  (cl:format cl:nil "int16 channel~%bool active~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IOOut>))
  (cl:+ 0
     2
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IOOut>))
  "Converts a ROS message object to a list"
  (cl:list 'IOOut
    (cl:cons ':channel (channel msg))
    (cl:cons ':active (active msg))
))
