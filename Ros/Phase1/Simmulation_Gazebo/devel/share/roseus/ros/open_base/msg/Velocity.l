;; Auto-generated. Do not edit!


(when (boundp 'open_base::Velocity)
  (if (not (find-package "OPEN_BASE"))
    (make-package "OPEN_BASE"))
  (shadow 'Velocity (find-package "OPEN_BASE")))
(unless (find-package "OPEN_BASE::VELOCITY")
  (make-package "OPEN_BASE::VELOCITY"))

(in-package "ROS")
;;//! \htmlinclude Velocity.msg.html


(defclass open_base::Velocity
  :super ros::object
  :slots (_v_left _v_back _v_right ))

(defmethod open_base::Velocity
  (:init
   (&key
    ((:v_left __v_left) 0.0)
    ((:v_back __v_back) 0.0)
    ((:v_right __v_right) 0.0)
    )
   (send-super :init)
   (setq _v_left (float __v_left))
   (setq _v_back (float __v_back))
   (setq _v_right (float __v_right))
   self)
  (:v_left
   (&optional __v_left)
   (if __v_left (setq _v_left __v_left)) _v_left)
  (:v_back
   (&optional __v_back)
   (if __v_back (setq _v_back __v_back)) _v_back)
  (:v_right
   (&optional __v_right)
   (if __v_right (setq _v_right __v_right)) _v_right)
  (:serialization-length
   ()
   (+
    ;; float64 _v_left
    8
    ;; float64 _v_back
    8
    ;; float64 _v_right
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _v_left
       (sys::poke _v_left (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _v_back
       (sys::poke _v_back (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _v_right
       (sys::poke _v_right (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _v_left
     (setq _v_left (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _v_back
     (setq _v_back (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _v_right
     (setq _v_right (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get open_base::Velocity :md5sum-) "e8a5c19f362eee9352ab07da80a7261d")
(setf (get open_base::Velocity :datatype-) "open_base/Velocity")
(setf (get open_base::Velocity :definition-)
      "float64 v_left
float64 v_back
float64 v_right

")



(provide :open_base/Velocity "e8a5c19f362eee9352ab07da80a7261d")


