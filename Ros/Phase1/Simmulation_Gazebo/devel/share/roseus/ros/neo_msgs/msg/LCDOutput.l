;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::LCDOutput)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'LCDOutput (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::LCDOUTPUT")
  (make-package "NEO_MSGS::LCDOUTPUT"))

(in-package "ROS")
;;//! \htmlinclude LCDOutput.msg.html


(defclass neo_msgs::LCDOutput
  :super ros::object
  :slots (_msg_line ))

(defmethod neo_msgs::LCDOutput
  (:init
   (&key
    ((:msg_line __msg_line) "")
    )
   (send-super :init)
   (setq _msg_line (string __msg_line))
   self)
  (:msg_line
   (&optional __msg_line)
   (if __msg_line (setq _msg_line __msg_line)) _msg_line)
  (:serialization-length
   ()
   (+
    ;; string _msg_line
    4 (length _msg_line)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _msg_line
       (write-long (length _msg_line) s) (princ _msg_line s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _msg_line
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _msg_line (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get neo_msgs::LCDOutput :md5sum-) "a223a10d4aa8b3dc5e74a6c05e5047f2")
(setf (get neo_msgs::LCDOutput :datatype-) "neo_msgs/LCDOutput")
(setf (get neo_msgs::LCDOutput :definition-)
      "string msg_line 	#in mode 1 msg_lines size is limited to 20 chars
			#in mode 2 msg_lines size is limited to 60 chars

")



(provide :neo_msgs/LCDOutput "a223a10d4aa8b3dc5e74a6c05e5047f2")


