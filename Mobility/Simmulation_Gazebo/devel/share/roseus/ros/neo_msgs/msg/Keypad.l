;; Auto-generated. Do not edit!


(when (boundp 'neo_msgs::Keypad)
  (if (not (find-package "NEO_MSGS"))
    (make-package "NEO_MSGS"))
  (shadow 'Keypad (find-package "NEO_MSGS")))
(unless (find-package "NEO_MSGS::KEYPAD")
  (make-package "NEO_MSGS::KEYPAD"))

(in-package "ROS")
;;//! \htmlinclude Keypad.msg.html


(defclass neo_msgs::Keypad
  :super ros::object
  :slots (_button ))

(defmethod neo_msgs::Keypad
  (:init
   (&key
    ((:button __button) (let (r) (dotimes (i 5) (push nil r)) r))
    )
   (send-super :init)
   (setq _button __button)
   self)
  (:button
   (&optional __button)
   (if __button (setq _button __button)) _button)
  (:serialization-length
   ()
   (+
    ;; bool[5] _button
    (* 1    5)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool[5] _button
     (dotimes (i 5)
       (if (elt _button i) (write-byte -1 s) (write-byte 0 s))
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool[5] _button
   (dotimes (i (length _button))
     (setf (elt _button i) (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
     )
   ;;
   self)
  )

(setf (get neo_msgs::Keypad :md5sum-) "cdd812e75f32f7f8c53f07222b1ffa3c")
(setf (get neo_msgs::Keypad :datatype-) "neo_msgs/Keypad")
(setf (get neo_msgs::Keypad :definition-)
      "bool[5] button #5 button keypad

")



(provide :neo_msgs/Keypad "cdd812e75f32f7f8c53f07222b1ffa3c")


