;; Auto-generated. Do not edit!


(when (boundp 'open_base::KinematicsInverse)
  (if (not (find-package "OPEN_BASE"))
    (make-package "OPEN_BASE"))
  (shadow 'KinematicsInverse (find-package "OPEN_BASE")))
(unless (find-package "OPEN_BASE::KINEMATICSINVERSE")
  (make-package "OPEN_BASE::KINEMATICSINVERSE"))
(unless (find-package "OPEN_BASE::KINEMATICSINVERSEREQUEST")
  (make-package "OPEN_BASE::KINEMATICSINVERSEREQUEST"))
(unless (find-package "OPEN_BASE::KINEMATICSINVERSERESPONSE")
  (make-package "OPEN_BASE::KINEMATICSINVERSERESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass open_base::KinematicsInverseRequest
  :super ros::object
  :slots (_input ))

(defmethod open_base::KinematicsInverseRequest
  (:init
   (&key
    ((:input __input) (instance geometry_msgs::Pose2D :init))
    )
   (send-super :init)
   (setq _input __input)
   self)
  (:input
   (&rest __input)
   (if (keywordp (car __input))
       (send* _input __input)
     (progn
       (if __input (setq _input (car __input)))
       _input)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Pose2D _input
    (send _input :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose2D _input
       (send _input :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose2D _input
     (send _input :deserialize buf ptr-) (incf ptr- (send _input :serialization-length))
   ;;
   self)
  )

(defclass open_base::KinematicsInverseResponse
  :super ros::object
  :slots (_output ))

(defmethod open_base::KinematicsInverseResponse
  (:init
   (&key
    ((:output __output) (instance open_base::Velocity :init))
    )
   (send-super :init)
   (setq _output __output)
   self)
  (:output
   (&rest __output)
   (if (keywordp (car __output))
       (send* _output __output)
     (progn
       (if __output (setq _output (car __output)))
       _output)))
  (:serialization-length
   ()
   (+
    ;; open_base/Velocity _output
    (send _output :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; open_base/Velocity _output
       (send _output :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; open_base/Velocity _output
     (send _output :deserialize buf ptr-) (incf ptr- (send _output :serialization-length))
   ;;
   self)
  )

(defclass open_base::KinematicsInverse
  :super ros::object
  :slots ())

(setf (get open_base::KinematicsInverse :md5sum-) "cb684d22809e19793d1c5c527b5f8cf4")
(setf (get open_base::KinematicsInverse :datatype-) "open_base/KinematicsInverse")
(setf (get open_base::KinematicsInverse :request) open_base::KinematicsInverseRequest)
(setf (get open_base::KinematicsInverse :response) open_base::KinematicsInverseResponse)

(defmethod open_base::KinematicsInverseRequest
  (:response () (instance open_base::KinematicsInverseResponse :init)))

(setf (get open_base::KinematicsInverseRequest :md5sum-) "cb684d22809e19793d1c5c527b5f8cf4")
(setf (get open_base::KinematicsInverseRequest :datatype-) "open_base/KinematicsInverseRequest")
(setf (get open_base::KinematicsInverseRequest :definition-)
      "geometry_msgs/Pose2D input

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
---
open_base/Velocity output


================================================================================
MSG: open_base/Velocity
float64 v_left
float64 v_back
float64 v_right
")

(setf (get open_base::KinematicsInverseResponse :md5sum-) "cb684d22809e19793d1c5c527b5f8cf4")
(setf (get open_base::KinematicsInverseResponse :datatype-) "open_base/KinematicsInverseResponse")
(setf (get open_base::KinematicsInverseResponse :definition-)
      "geometry_msgs/Pose2D input

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
---
open_base/Velocity output


================================================================================
MSG: open_base/Velocity
float64 v_left
float64 v_back
float64 v_right
")



(provide :open_base/KinematicsInverse "cb684d22809e19793d1c5c527b5f8cf4")


