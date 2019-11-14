;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::EmergencyStopState)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'EmergencyStopState (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::EMERGENCYSTOPSTATE")
  (make-package "NEO_MSGS::EMERGENCYSTOPSTATE"))

(in-package "ROS")
;;//! \htmlinclude EmergencyStopState.msg.html


(intern "*EMFREE*" (find-package "NEO_MSGS::EMERGENCYSTOPSTATE"))
(shadow '*EMFREE* (find-package "NEO_MSGS::EMERGENCYSTOPSTATE"))
(defconstant neo_msgs::EmergencyStopState::*EMFREE* 0)
(intern "*EMSTOP*" (find-package "NEO_MSGS::EMERGENCYSTOPSTATE"))
(shadow '*EMSTOP* (find-package "NEO_MSGS::EMERGENCYSTOPSTATE"))
(defconstant neo_msgs::EmergencyStopState::*EMSTOP* 1)
(intern "*EMCONFIRMED*" (find-package "NEO_MSGS::EMERGENCYSTOPSTATE"))
(shadow '*EMCONFIRMED* (find-package "NEO_MSGS::EMERGENCYSTOPSTATE"))
(defconstant neo_msgs::EmergencyStopState::*EMCONFIRMED* 2)
(defclass neo_msgs::EmergencyStopState
  :super ros::object
  :slots (_emergency_button_stop _scanner_stop _emergency_state ))

(defmethod neo_msgs::EmergencyStopState
  (:init
   (&key
    ((:emergency_button_stop __emergency_button_stop) nil)
    ((:scanner_stop __scanner_stop) nil)
    ((:emergency_state __emergency_state) 0)
    )
   (send-super :init)
   (setq _emergency_button_stop __emergency_button_stop)
   (setq _scanner_stop __scanner_stop)
   (setq _emergency_state (round __emergency_state))
   self)
  (:emergency_button_stop
   (&optional __emergency_button_stop)
   (if __emergency_button_stop (setq _emergency_button_stop __emergency_button_stop)) _emergency_button_stop)
  (:scanner_stop
   (&optional __scanner_stop)
   (if __scanner_stop (setq _scanner_stop __scanner_stop)) _scanner_stop)
  (:emergency_state
   (&optional __emergency_state)
   (if __emergency_state (setq _emergency_state __emergency_state)) _emergency_state)
  (:serialization-length
   ()
   (+
    ;; bool _emergency_button_stop
    1
    ;; bool _scanner_stop
    1
    ;; int16 _emergency_state
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _emergency_button_stop
       (if _emergency_button_stop (write-byte -1 s) (write-byte 0 s))
     ;; bool _scanner_stop
       (if _scanner_stop (write-byte -1 s) (write-byte 0 s))
     ;; int16 _emergency_state
       (write-word _emergency_state s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _emergency_button_stop
     (setq _emergency_button_stop (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _scanner_stop
     (setq _scanner_stop (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int16 _emergency_state
     (setq _emergency_state (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get neo_msgs::EmergencyStopState :md5sum-) "d857d7312ffc16f75239036504e493e9")
(setf (get neo_msgs::EmergencyStopState :datatype-) "neo_msgs/EmergencyStopState")
(setf (get neo_msgs::EmergencyStopState :definition-)
      "# This message holds the emergency stop (EMStop) status of the robot. It detects wether an EMStop is caused by the safety laserscanner or the emergency stop buttons. Moreover, it gives signalizes wether the EMStop was confirmed (after Button press stop) and the system is free again.

# Possible EMStop States
int16 EMFREE = 0 		# system operatign normal
int16 EMSTOP = 1 		# emergency stop is active (Button pressed; obstacle in safety field of scanner)
int16 EMCONFIRMED = 2 	# emergency stop was confirmed system is reinitializing and going back to normal

bool emergency_button_stop	# true = emergency stop signal is issued by button pressed
bool scanner_stop			# true = emergency stop signal is issued by scanner
int16 emergency_state		# state (including confimation by key-switch), values see above


")



(provide :neo_msgs/EmergencyStopState "d857d7312ffc16f75239036504e493e9")


