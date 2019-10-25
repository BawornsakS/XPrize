
(cl:in-package :asdf)

(defsystem "open_base-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :open_base-msg
)
  :components ((:file "_package")
    (:file "FrameToFrame" :depends-on ("_package_FrameToFrame"))
    (:file "_package_FrameToFrame" :depends-on ("_package"))
    (:file "KinematicsForward" :depends-on ("_package_KinematicsForward"))
    (:file "_package_KinematicsForward" :depends-on ("_package"))
    (:file "KinematicsInverse" :depends-on ("_package_KinematicsInverse"))
    (:file "_package_KinematicsInverse" :depends-on ("_package"))
  ))