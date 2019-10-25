;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::USBoard)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'USBoard (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::USBOARD")
  (make-package "NEO_MSGS::USBOARD"))

(in-package "ROS")
;;//! \htmlinclude USBoard.msg.html


(defclass neo_msgs::USBoard
  :super ros::object
  :slots (_sensor _analog ))

(defmethod neo_msgs::USBoard
  (:init
   (&key
    ((:sensor __sensor) (make-array 16 :initial-element 0 :element-type :char))
    ((:analog __analog) (make-array 4 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _sensor __sensor)
   (setq _analog __analog)
   self)
  (:sensor
   (&optional __sensor)
   (if __sensor (setq _sensor __sensor)) _sensor)
  (:analog
   (&optional __analog)
   (if __analog (setq _analog __analog)) _analog)
  (:serialization-length
   ()
   (+
    ;; uint8[16] _sensor
    (* 1    16)
    ;; int16[4] _analog
    (* 2    4)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8[16] _sensor
     (princ _sensor s)
     ;; int16[4] _analog
     (dotimes (i 4)
       (write-word (elt _analog i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8[16] _sensor
   (setq _sensor (make-array 16 :element-type :char))
   (replace _sensor buf :start2 ptr-) (incf ptr- 16)
   ;; int16[4] _analog
   (dotimes (i (length _analog))
     (setf (elt _analog i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     )
   ;;
   self)
  )

(setf (get neo_msgs::USBoard :md5sum-) "089d96eea3a0e01a364455ac3fa3cb33")
(setf (get neo_msgs::USBoard :datatype-) "neo_msgs/USBoard")
(setf (get neo_msgs::USBoard :definition-)
      "uint8[16] sensor 	#sensor measurement
int16[4] analog 	#analogue input

")



(provide :neo_msgs/USBoard "089d96eea3a0e01a364455ac3fa3cb33")


