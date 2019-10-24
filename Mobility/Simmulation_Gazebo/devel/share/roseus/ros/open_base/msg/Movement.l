;; Auto-generated. Do not edit!


(when (boundp 'open_base::Movement)
  (if (not (find-package "OPEN_BASE"))
    (make-package "OPEN_BASE"))
  (shadow 'Movement (find-package "OPEN_BASE")))
(unless (find-package "OPEN_BASE::MOVEMENT")
  (make-package "OPEN_BASE::MOVEMENT"))

(in-package "ROS")
;;//! \htmlinclude Movement.msg.html


(intern "*BEZIER*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*BEZIER* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*BEZIER* 0)
(intern "*GENERIC*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*GENERIC* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*GENERIC* 1)
(intern "*NONE*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*NONE* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*NONE* 2)
(intern "*WHEEL*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*WHEEL* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*WHEEL* 3)
(intern "*POSITION_ABSOLUTE*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*POSITION_ABSOLUTE* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*POSITION_ABSOLUTE* 0)
(intern "*POSITION_RELATIVE*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*POSITION_RELATIVE* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*POSITION_RELATIVE* 1)
(intern "*VELOCITY*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*VELOCITY* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*VELOCITY* 2)
(intern "*HYBRID*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*HYBRID* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*HYBRID* 0)
(intern "*MOBILE*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*MOBILE* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*MOBILE* 1)
(intern "*MOBILE_RAW*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*MOBILE_RAW* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*MOBILE_RAW* 2)
(intern "*WORLD*" (find-package "OPEN_BASE::MOVEMENT"))
(shadow '*WORLD* (find-package "OPEN_BASE::MOVEMENT"))
(defconstant open_base::Movement::*WORLD* 3)
(defclass open_base::Movement
  :super ros::object
  :slots (_movement _wheel _generic _bezier ))

(defmethod open_base::Movement
  (:init
   (&key
    ((:movement __movement) 0)
    ((:wheel __wheel) (instance open_base::Velocity :init))
    ((:generic __generic) (instance open_base::MovementGeneric :init))
    ((:bezier __bezier) (instance open_base::MovementBezier :init))
    )
   (send-super :init)
   (setq _movement (round __movement))
   (setq _wheel __wheel)
   (setq _generic __generic)
   (setq _bezier __bezier)
   self)
  (:movement
   (&optional __movement)
   (if __movement (setq _movement __movement)) _movement)
  (:wheel
   (&rest __wheel)
   (if (keywordp (car __wheel))
       (send* _wheel __wheel)
     (progn
       (if __wheel (setq _wheel (car __wheel)))
       _wheel)))
  (:generic
   (&rest __generic)
   (if (keywordp (car __generic))
       (send* _generic __generic)
     (progn
       (if __generic (setq _generic (car __generic)))
       _generic)))
  (:bezier
   (&rest __bezier)
   (if (keywordp (car __bezier))
       (send* _bezier __bezier)
     (progn
       (if __bezier (setq _bezier (car __bezier)))
       _bezier)))
  (:serialization-length
   ()
   (+
    ;; uint8 _movement
    1
    ;; open_base/Velocity _wheel
    (send _wheel :serialization-length)
    ;; open_base/MovementGeneric _generic
    (send _generic :serialization-length)
    ;; open_base/MovementBezier _bezier
    (send _bezier :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _movement
       (write-byte _movement s)
     ;; open_base/Velocity _wheel
       (send _wheel :serialize s)
     ;; open_base/MovementGeneric _generic
       (send _generic :serialize s)
     ;; open_base/MovementBezier _bezier
       (send _bezier :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _movement
     (setq _movement (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; open_base/Velocity _wheel
     (send _wheel :deserialize buf ptr-) (incf ptr- (send _wheel :serialization-length))
   ;; open_base/MovementGeneric _generic
     (send _generic :deserialize buf ptr-) (incf ptr- (send _generic :serialization-length))
   ;; open_base/MovementBezier _bezier
     (send _bezier :deserialize buf ptr-) (incf ptr- (send _bezier :serialization-length))
   ;;
   self)
  )

(setf (get open_base::Movement :md5sum-) "68a9ba8e542ff32c2d272bc9497c5912")
(setf (get open_base::Movement :datatype-) "open_base/Movement")
(setf (get open_base::Movement :definition-)
      "uint8 movement
open_base/Velocity wheel
open_base/MovementGeneric generic
open_base/MovementBezier bezier
# movement constants
uint8 BEZIER=0
uint8 GENERIC=1
uint8 NONE=2
uint8 WHEEL=3
# type constants
uint8 POSITION_ABSOLUTE=0
uint8 POSITION_RELATIVE=1
uint8 VELOCITY=2
# frame constants
uint8 HYBRID=0
uint8 MOBILE=1
uint8 MOBILE_RAW=2
uint8 WORLD=3

================================================================================
MSG: open_base/Velocity
float64 v_left
float64 v_back
float64 v_right

================================================================================
MSG: open_base/MovementGeneric
uint8 type
uint8 frame
geometry_msgs/Pose2D target

================================================================================
MSG: geometry_msgs/Pose2D
# Deprecated
# Please use the full 3D pose.

# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.

# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.


# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta

================================================================================
MSG: open_base/MovementBezier
uint8 frame
geometry_msgs/Pose2D[] targetTranslation
float64[] targetRotation
float64 step
bool offsetTraslation
bool offsetRotation

")



(provide :open_base/Movement "68a9ba8e542ff32c2d272bc9497c5912")


