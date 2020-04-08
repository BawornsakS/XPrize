;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::IOAnalogIn)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'IOAnalogIn (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::IOANALOGIN")
  (make-package "NEO_MSGS::IOANALOGIN"))

(in-package "ROS")
;;//! \htmlinclude IOAnalogIn.msg.html


(defclass neo_msgs::IOAnalogIn
  :super ros::object
  :slots (_input ))

(defmethod neo_msgs::IOAnalogIn
  (:init
   (&key
    ((:input __input) (make-array 8 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _input __input)
   self)
  (:input
   (&optional __input)
   (if __input (setq _input __input)) _input)
  (:serialization-length
   ()
   (+
    ;; int16[8] _input
    (* 2    8)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16[8] _input
     (dotimes (i 8)
       (write-word (elt _input i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16[8] _input
   (dotimes (i (length _input))
     (setf (elt _input i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     )
   ;;
   self)
  )

(setf (get neo_msgs::IOAnalogIn :md5sum-) "4b0e4815c9bd4f4b74f05fb5691e16a6")
(setf (get neo_msgs::IOAnalogIn :datatype-) "neo_msgs/IOAnalogIn")
(setf (get neo_msgs::IOAnalogIn :definition-)
      "int16[8] input

")



(provide :neo_msgs/IOAnalogIn "4b0e4815c9bd4f4b74f05fb5691e16a6")


