;; Auto-generated. Do not edit!


(when (boundp 'open_base::MovementBezier)
  (if (not (find-package "OPEN_BASE"))
    (make-package "OPEN_BASE"))
  (shadow 'MovementBezier (find-package "OPEN_BASE")))
(unless (find-package "OPEN_BASE::MOVEMENTBEZIER")
  (make-package "OPEN_BASE::MOVEMENTBEZIER"))

(in-package "ROS")
;;//! \htmlinclude MovementBezier.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass open_base::MovementBezier
  :super ros::object
  :slots (_frame _targetTranslation _targetRotation _step _offsetTraslation _offsetRotation ))

(defmethod open_base::MovementBezier
  (:init
   (&key
    ((:frame __frame) 0)
    ((:targetTranslation __targetTranslation) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Pose2D :init) r)) r))
    ((:targetRotation __targetRotation) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:step __step) 0.0)
    ((:offsetTraslation __offsetTraslation) nil)
    ((:offsetRotation __offsetRotation) nil)
    )
   (send-super :init)
   (setq _frame (round __frame))
   (setq _targetTranslation __targetTranslation)
   (setq _targetRotation __targetRotation)
   (setq _step (float __step))
   (setq _offsetTraslation __offsetTraslation)
   (setq _offsetRotation __offsetRotation)
   self)
  (:frame
   (&optional __frame)
   (if __frame (setq _frame __frame)) _frame)
  (:targetTranslation
   (&rest __targetTranslation)
   (if (keywordp (car __targetTranslation))
       (send* _targetTranslation __targetTranslation)
     (progn
       (if __targetTranslation (setq _targetTranslation (car __targetTranslation)))
       _targetTranslation)))
  (:targetRotation
   (&optional __targetRotation)
   (if __targetRotation (setq _targetRotation __targetRotation)) _targetRotation)
  (:step
   (&optional __step)
   (if __step (setq _step __step)) _step)
  (:offsetTraslation
   (&optional __offsetTraslation)
   (if __offsetTraslation (setq _offsetTraslation __offsetTraslation)) _offsetTraslation)
  (:offsetRotation
   (&optional __offsetRotation)
   (if __offsetRotation (setq _offsetRotation __offsetRotation)) _offsetRotation)
  (:serialization-length
   ()
   (+
    ;; uint8 _frame
    1
    ;; geometry_msgs/Pose2D[] _targetTranslation
    (apply #'+ (send-all _targetTranslation :serialization-length)) 4
    ;; float64[] _targetRotation
    (* 8    (length _targetRotation)) 4
    ;; float64 _step
    8
    ;; bool _offsetTraslation
    1
    ;; bool _offsetRotation
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _frame
       (write-byte _frame s)
     ;; geometry_msgs/Pose2D[] _targetTranslation
     (write-long (length _targetTranslation) s)
     (dolist (elem _targetTranslation)
       (send elem :serialize s)
       )
     ;; float64[] _targetRotation
     (write-long (length _targetRotation) s)
     (dotimes (i (length _targetRotation))
       (sys::poke (elt _targetRotation i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64 _step
       (sys::poke _step (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; bool _offsetTraslation
       (if _offsetTraslation (write-byte -1 s) (write-byte 0 s))
     ;; bool _offsetRotation
       (if _offsetRotation (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _frame
     (setq _frame (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; geometry_msgs/Pose2D[] _targetTranslation
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _targetTranslation (let (r) (dotimes (i n) (push (instance geometry_msgs::Pose2D :init) r)) r))
     (dolist (elem- _targetTranslation)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; float64[] _targetRotation
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _targetRotation (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _targetRotation i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64 _step
     (setq _step (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; bool _offsetTraslation
     (setq _offsetTraslation (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _offsetRotation
     (setq _offsetRotation (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get open_base::MovementBezier :md5sum-) "ded95d34881d8c480a26fcec4fc049df")
(setf (get open_base::MovementBezier :datatype-) "open_base/MovementBezier")
(setf (get open_base::MovementBezier :definition-)
      "uint8 frame
geometry_msgs/Pose2D[] targetTranslation
float64[] targetRotation
float64 step
bool offsetTraslation
bool offsetRotation

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



(provide :open_base/MovementBezier "ded95d34881d8c480a26fcec4fc049df")


