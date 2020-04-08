;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::GyroBoard)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'GyroBoard (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::GYROBOARD")
  (make-package "NEO_MSGS::GYROBOARD"))

(in-package "ROS")
;;//! \htmlinclude GyroBoard.msg.html


(defclass neo_msgs::GyroBoard
  :super ros::object
  :slots (_acceleration _orientation ))

(defmethod neo_msgs::GyroBoard
  (:init
   (&key
    ((:acceleration __acceleration) (make-array 3 :initial-element 0.0 :element-type :float))
    ((:orientation __orientation) 0.0)
    )
   (send-super :init)
   (setq _acceleration __acceleration)
   (setq _orientation (float __orientation))
   self)
  (:acceleration
   (&optional __acceleration)
   (if __acceleration (setq _acceleration __acceleration)) _acceleration)
  (:orientation
   (&optional __orientation)
   (if __orientation (setq _orientation __orientation)) _orientation)
  (:serialization-length
   ()
   (+
    ;; float64[3] _acceleration
    (* 8    3)
    ;; float64 _orientation
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[3] _acceleration
     (dotimes (i 3)
       (sys::poke (elt _acceleration i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64 _orientation
       (sys::poke _orientation (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[3] _acceleration
   (dotimes (i (length _acceleration))
     (setf (elt _acceleration i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64 _orientation
     (setq _orientation (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get neo_msgs::GyroBoard :md5sum-) "2b635625b22ccc397d44e4cb7dac6a32")
(setf (get neo_msgs::GyroBoard :datatype-) "neo_msgs/GyroBoard")
(setf (get neo_msgs::GyroBoard :definition-)
      "float64[3] acceleration #acceleration along the 3 axis
float64 orientation #angle around the 3rd axe

")



(provide :neo_msgs/GyroBoard "2b635625b22ccc397d44e4cb7dac6a32")


