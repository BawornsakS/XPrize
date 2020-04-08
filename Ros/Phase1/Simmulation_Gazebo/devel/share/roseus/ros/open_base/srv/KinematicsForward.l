;; Auto-generated. Do not edit!


(when (boundp 'open_base::KinematicsForward)
  (if (not (find-package "OPEN_BASE"))
    (make-package "OPEN_BASE"))
  (shadow 'KinematicsForward (find-package "OPEN_BASE")))
(unless (find-package "OPEN_BASE::KINEMATICSFORWARD")
  (make-package "OPEN_BASE::KINEMATICSFORWARD"))
(unless (find-package "OPEN_BASE::KINEMATICSFORWARDREQUEST")
  (make-package "OPEN_BASE::KINEMATICSFORWARDREQUEST"))
(unless (find-package "OPEN_BASE::KINEMATICSFORWARDRESPONSE")
  (make-package "OPEN_BASE::KINEMATICSFORWARDRESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass open_base::KinematicsForwardRequest
  :super ros::object
  :slots (_input ))

(defmethod open_base::KinematicsForwardRequest
  (:init
   (&key
    ((:input __input) (instance open_base::Velocity :init))
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
    ;; open_base/Velocity _input
    (send _input :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; open_base/Velocity _input
       (send _input :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; open_base/Velocity _input
     (send _input :deserialize buf ptr-) (incf ptr- (send _input :serialization-length))
   ;;
   self)
  )

(defclass open_base::KinematicsForwardResponse
  :super ros::object
  :slots (_output ))

(defmethod open_base::KinematicsForwardResponse
  (:init
   (&key
    ((:output __output) (instance geometry_msgs::Pose2D :init))
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
    ;; geometry_msgs/Pose2D _output
    (send _output :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose2D _output
       (send _output :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose2D _output
     (send _output :deserialize buf ptr-) (incf ptr- (send _output :serialization-length))
   ;;
   self)
  )

(defclass open_base::KinematicsForward
  :super ros::object
  :slots ())

(setf (get open_base::KinematicsForward :md5sum-) "4f057007e926424c383ecaa1817c5251")
(setf (get open_base::KinematicsForward :datatype-) "open_base/KinematicsForward")
(setf (get open_base::KinematicsForward :request) open_base::KinematicsForwardRequest)
(setf (get open_base::KinematicsForward :response) open_base::KinematicsForwardResponse)

(defmethod open_base::KinematicsForwardRequest
  (:response () (instance open_base::KinematicsForwardResponse :init)))

(setf (get open_base::KinematicsForwardRequest :md5sum-) "4f057007e926424c383ecaa1817c5251")
(setf (get open_base::KinematicsForwardRequest :datatype-) "open_base/KinematicsForwardRequest")
(setf (get open_base::KinematicsForwardRequest :definition-)
      "open_base/Velocity input

================================================================================
MSG: open_base/Velocity
float64 v_left
float64 v_back
float64 v_right
---
geometry_msgs/Pose2D output


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

(setf (get open_base::KinematicsForwardResponse :md5sum-) "4f057007e926424c383ecaa1817c5251")
(setf (get open_base::KinematicsForwardResponse :datatype-) "open_base/KinematicsForwardResponse")
(setf (get open_base::KinematicsForwardResponse :definition-)
      "open_base/Velocity input

================================================================================
MSG: open_base/Velocity
float64 v_left
float64 v_back
float64 v_right
---
geometry_msgs/Pose2D output


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



(provide :open_base/KinematicsForward "4f057007e926424c383ecaa1817c5251")


