;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::IRSensors)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'IRSensors (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::IRSENSORS")
  (make-package "NEO_MSGS::IRSENSORS"))

(in-package "ROS")
;;//! \htmlinclude IRSensors.msg.html


(defclass neo_msgs::IRSensors
  :super ros::object
  :slots (_measurement ))

(defmethod neo_msgs::IRSensors
  (:init
   (&key
    ((:measurement __measurement) (make-array 4 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _measurement __measurement)
   self)
  (:measurement
   (&optional __measurement)
   (if __measurement (setq _measurement __measurement)) _measurement)
  (:serialization-length
   ()
   (+
    ;; int32[4] _measurement
    (* 4    4)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32[4] _measurement
     (dotimes (i 4)
       (write-long (elt _measurement i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32[4] _measurement
   (dotimes (i (length _measurement))
     (setf (elt _measurement i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     )
   ;;
   self)
  )

(setf (get neo_msgs::IRSensors :md5sum-) "0b608e536c75438a771e1cfb29f4b570")
(setf (get neo_msgs::IRSensors :datatype-) "neo_msgs/IRSensors")
(setf (get neo_msgs::IRSensors :definition-)
      "int32[4] measurement

")



(provide :neo_msgs/IRSensors "0b608e536c75438a771e1cfb29f4b570")


