;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::RadarBoard)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'RadarBoard (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::RADARBOARD")
  (make-package "NEO_MSGS::RADARBOARD"))

(in-package "ROS")
;;//! \htmlinclude RadarBoard.msg.html


(defclass neo_msgs::RadarBoard
  :super ros::object
  :slots (_velocity _state ))

(defmethod neo_msgs::RadarBoard
  (:init
   (&key
    ((:velocity __velocity) (make-array 3 :initial-element 0.0 :element-type :float))
    ((:state __state) 0)
    )
   (send-super :init)
   (setq _velocity __velocity)
   (setq _state (round __state))
   self)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:serialization-length
   ()
   (+
    ;; float64[3] _velocity
    (* 8    3)
    ;; int32 _state
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[3] _velocity
     (dotimes (i 3)
       (sys::poke (elt _velocity i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; int32 _state
       (write-long _state s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[3] _velocity
   (dotimes (i (length _velocity))
     (setf (elt _velocity i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; int32 _state
     (setq _state (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get neo_msgs::RadarBoard :md5sum-) "2a5dbee0d40bb12d02b78bf551ec141d")
(setf (get neo_msgs::RadarBoard :datatype-) "neo_msgs/RadarBoard")
(setf (get neo_msgs::RadarBoard :definition-)
      "float64[3] velocity
int32 state

")



(provide :neo_msgs/RadarBoard "2a5dbee0d40bb12d02b78bf551ec141d")


