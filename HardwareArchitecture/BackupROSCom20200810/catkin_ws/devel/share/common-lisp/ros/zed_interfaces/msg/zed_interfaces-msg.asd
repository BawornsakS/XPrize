
(cl:in-package :asdf)

(defsystem "zed_interfaces-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "ObjectStamped" :depends-on ("_package_ObjectStamped"))
    (:file "_package_ObjectStamped" :depends-on ("_package"))
    (:file "Objects" :depends-on ("_package_Objects"))
    (:file "_package_Objects" :depends-on ("_package"))
    (:file "RGBDSensors" :depends-on ("_package_RGBDSensors"))
    (:file "_package_RGBDSensors" :depends-on ("_package"))
  ))