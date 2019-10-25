
(cl:in-package :asdf)

(defsystem "open_base-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "Movement" :depends-on ("_package_Movement"))
    (:file "_package_Movement" :depends-on ("_package"))
    (:file "MovementBezier" :depends-on ("_package_MovementBezier"))
    (:file "_package_MovementBezier" :depends-on ("_package"))
    (:file "MovementGeneric" :depends-on ("_package_MovementGeneric"))
    (:file "_package_MovementGeneric" :depends-on ("_package"))
    (:file "Velocity" :depends-on ("_package_Velocity"))
    (:file "_package_Velocity" :depends-on ("_package"))
  ))