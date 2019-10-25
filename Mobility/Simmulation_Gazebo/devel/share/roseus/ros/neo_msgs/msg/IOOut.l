;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::IOOut)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'IOOut (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::IOOUT")
  (make-package "NEO_MSGS::IOOUT"))

(in-package "ROS")
;;//! \htmlinclude IOOut.msg.html


(defclass neo_msgs::IOOut
  :super ros::object
  :slots (_channel _active ))

(defmethod neo_msgs::IOOut
  (:init
   (&key
    ((:channel __channel) 0)
    ((:active __active) nil)
    )
   (send-super :init)
   (setq _channel (round __channel))
   (setq _active __active)
   self)
  (:channel
   (&optional __channel)
   (if __channel (setq _channel __channel)) _channel)
  (:active
   (&optional __active)
   (if __active (setq _active __active)) _active)
  (:serialization-length
   ()
   (+
    ;; int16 _channel
    2
    ;; bool _active
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _channel
       (write-word _channel s)
     ;; bool _active
       (if _active (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _channel
     (setq _channel (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; bool _active
     (setq _active (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get neo_msgs::IOOut :md5sum-) "894ccc9cba8043db3f885fa5ca0edd62")
(setf (get neo_msgs::IOOut :datatype-) "neo_msgs/IOOut")
(setf (get neo_msgs::IOOut :definition-)
      "int16 channel
bool active

")



(provide :neo_msgs/IOOut "894ccc9cba8043db3f885fa5ca0edd62")


