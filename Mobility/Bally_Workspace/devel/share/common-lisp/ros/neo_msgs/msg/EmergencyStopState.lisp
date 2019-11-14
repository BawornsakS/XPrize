; Auto-generated. Do not edit!


(cl:in-package neo_msgs-msg)


;//! \htmlinclude EmergencyStopState.msg.html

(cl:defclass <EmergencyStopState> (roslisp-msg-protocol:ros-message)
  ((emergency_button_stop
    :reader emergency_button_stop
    :initarg :emergency_button_stop
    :type cl:boolean
    :initform cl:nil)
   (scanner_stop
    :reader scanner_stop
    :initarg :scanner_stop
    :type cl:boolean
    :initform cl:nil)
   (emergency_state
    :reader emergency_state
    :initarg :emergency_state
    :type cl:fixnum
    :initform 0))
)

(cl:defclass EmergencyStopState (<EmergencyStopState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EmergencyStopState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EmergencyStopState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neo_msgs-msg:<EmergencyStopState> is deprecated: use neo_msgs-msg:EmergencyStopState instead.")))

(cl:ensure-generic-function 'emergency_button_stop-val :lambda-list '(m))
(cl:defmethod emergency_button_stop-val ((m <EmergencyStopState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:emergency_button_stop-val is deprecated.  Use neo_msgs-msg:emergency_button_stop instead.")
  (emergency_button_stop m))

(cl:ensure-generic-function 'scanner_stop-val :lambda-list '(m))
(cl:defmethod scanner_stop-val ((m <EmergencyStopState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:scanner_stop-val is deprecated.  Use neo_msgs-msg:scanner_stop instead.")
  (scanner_stop m))

(cl:ensure-generic-function 'emergency_state-val :lambda-list '(m))
(cl:defmethod emergency_state-val ((m <EmergencyStopState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neo_msgs-msg:emergency_state-val is deprecated.  Use neo_msgs-msg:emergency_state instead.")
  (emergency_state m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<EmergencyStopState>)))
    "Constants for message type '<EmergencyStopState>"
  '((:EMFREE . 0)
    (:EMSTOP . 1)
    (:EMCONFIRMED . 2))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'EmergencyStopState)))
    "Constants for message type 'EmergencyStopState"
  '((:EMFREE . 0)
    (:EMSTOP . 1)
    (:EMCONFIRMED . 2))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EmergencyStopState>) ostream)
  "Serializes a message object of type '<EmergencyStopState>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'emergency_button_stop) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'scanner_stop) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'emergency_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EmergencyStopState>) istream)
  "Deserializes a message object of type '<EmergencyStopState>"
    (cl:setf (cl:slot-value msg 'emergency_button_stop) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'scanner_stop) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'emergency_state) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EmergencyStopState>)))
  "Returns string type for a message object of type '<EmergencyStopState>"
  "neo_msgs/EmergencyStopState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EmergencyStopState)))
  "Returns string type for a message object of type 'EmergencyStopState"
  "neo_msgs/EmergencyStopState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EmergencyStopState>)))
  "Returns md5sum for a message object of type '<EmergencyStopState>"
  "d857d7312ffc16f75239036504e493e9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EmergencyStopState)))
  "Returns md5sum for a message object of type 'EmergencyStopState"
  "d857d7312ffc16f75239036504e493e9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EmergencyStopState>)))
  "Returns full string definition for message of type '<EmergencyStopState>"
  (cl:format cl:nil "# This message holds the emergency stop (EMStop) status of the robot. It detects wether an EMStop is caused by the safety laserscanner or the emergency stop buttons. Moreover, it gives signalizes wether the EMStop was confirmed (after Button press stop) and the system is free again.~%~%# Possible EMStop States~%int16 EMFREE = 0 		# system operatign normal~%int16 EMSTOP = 1 		# emergency stop is active (Button pressed; obstacle in safety field of scanner)~%int16 EMCONFIRMED = 2 	# emergency stop was confirmed system is reinitializing and going back to normal~%~%bool emergency_button_stop	# true = emergency stop signal is issued by button pressed~%bool scanner_stop			# true = emergency stop signal is issued by scanner~%int16 emergency_state		# state (including confimation by key-switch), values see above~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EmergencyStopState)))
  "Returns full string definition for message of type 'EmergencyStopState"
  (cl:format cl:nil "# This message holds the emergency stop (EMStop) status of the robot. It detects wether an EMStop is caused by the safety laserscanner or the emergency stop buttons. Moreover, it gives signalizes wether the EMStop was confirmed (after Button press stop) and the system is free again.~%~%# Possible EMStop States~%int16 EMFREE = 0 		# system operatign normal~%int16 EMSTOP = 1 		# emergency stop is active (Button pressed; obstacle in safety field of scanner)~%int16 EMCONFIRMED = 2 	# emergency stop was confirmed system is reinitializing and going back to normal~%~%bool emergency_button_stop	# true = emergency stop signal is issued by button pressed~%bool scanner_stop			# true = emergency stop signal is issued by scanner~%int16 emergency_state		# state (including confimation by key-switch), values see above~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EmergencyStopState>))
  (cl:+ 0
     1
     1
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EmergencyStopState>))
  "Converts a ROS message object to a list"
  (cl:list 'EmergencyStopState
    (cl:cons ':emergency_button_stop (emergency_button_stop msg))
    (cl:cons ':scanner_stop (scanner_stop msg))
    (cl:cons ':emergency_state (emergency_state msg))
))
