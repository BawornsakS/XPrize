;; Auto-generated. Do not edit!


(when (boundp 'open_base::MovementGeneric)
  (if (not (find-package "OPEN_BASE"))
    (make-package "OPEN_BASE"))
  (shadow 'MovementGeneric (find-package "OPEN_BASE")))
(unless (find-package "OPEN_BASE::MOVEMENTGENERIC")
  (make-package "OPEN_BASE::MOVEMENTGENERIC"))

(in-package "ROS")
;;//! \htmlinclude MovementGeneric.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass open_base::MovementGeneric
  :super ros::object
  :slots (_type _frame _target ))

(defmethod open_base::MovementGeneric
  (:init
   (&key
    ((:type __type) 0)
    ((:frame __frame) 0)
    ((:target __target) (instance geometry_msgs::Pose2D :init))
    )
   (send-super :init)
   (setq _type (round __type))
   (setq _frame (round __frame))
   (setq _target __target)
   self)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:frame
   (&optional __frame)
   (if __frame (setq _frame __frame)) _frame)
  (:target
   (&rest __target)
   (if (keywordp (car __target))
       (send* _target __target)
     (progn
       (if __target (setq _target (car __target)))
       _target)))
  (:serialization-length
   ()
   (+
    ;; uint8 _type
    1
    ;; uint8 _frame
    1
    ;; geometry_msgs/Pose2D _target
    (send _target :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _type
       (write-byte _type s)
     ;; uint8 _frame
       (write-byte _frame s)
     ;; geometry_msgs/Pose2D _target
       (send _target :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _type
     (setq _type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _frame
     (setq _frame (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; geometry_msgs/Pose2D _target
     (send _target :deserialize buf ptr-) (incf ptr- (send _target :serialization-length))
   ;;
   self)
  )

(setf (get open_base::MovementGeneric :md5sum-) "4524cf69d2ddd194d9c04f05478153fd")
(setf (get open_base::MovementGeneric :datatype-) "open_base/MovementGeneric")
(setf (get open_base::MovementGeneric :definition-)
      "uint8 type
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

")



(provide :open_base/MovementGeneric "4524cf69d2ddd194d9c04f05478153fd")


