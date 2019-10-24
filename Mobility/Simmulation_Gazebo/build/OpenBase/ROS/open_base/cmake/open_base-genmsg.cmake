# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "open_base: 4 messages, 3 services")

set(MSG_I_FLAGS "-Iopen_base:/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(open_base_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg" NAME_WE)
add_custom_target(_open_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "open_base" "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg" "geometry_msgs/Pose2D"
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv" NAME_WE)
add_custom_target(_open_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "open_base" "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv" "geometry_msgs/Pose2D"
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg" NAME_WE)
add_custom_target(_open_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "open_base" "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg" NAME_WE)
add_custom_target(_open_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "open_base" "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg" "geometry_msgs/Pose2D"
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv" NAME_WE)
add_custom_target(_open_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "open_base" "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv" "geometry_msgs/Pose2D:open_base/Velocity"
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg" NAME_WE)
add_custom_target(_open_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "open_base" "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg" "open_base/MovementBezier:open_base/MovementGeneric:open_base/Velocity:geometry_msgs/Pose2D"
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv" NAME_WE)
add_custom_target(_open_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "open_base" "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv" "geometry_msgs/Pose2D:open_base/Velocity"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
)
_generate_msg_cpp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
)
_generate_msg_cpp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
)
_generate_msg_cpp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg"
  "${MSG_I_FLAGS}"
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
)

### Generating Services
_generate_srv_cpp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
)
_generate_srv_cpp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
)
_generate_srv_cpp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
)

### Generating Module File
_generate_module_cpp(open_base
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(open_base_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(open_base_generate_messages open_base_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg" NAME_WE)
add_dependencies(open_base_generate_messages_cpp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv" NAME_WE)
add_dependencies(open_base_generate_messages_cpp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg" NAME_WE)
add_dependencies(open_base_generate_messages_cpp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg" NAME_WE)
add_dependencies(open_base_generate_messages_cpp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv" NAME_WE)
add_dependencies(open_base_generate_messages_cpp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg" NAME_WE)
add_dependencies(open_base_generate_messages_cpp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv" NAME_WE)
add_dependencies(open_base_generate_messages_cpp _open_base_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(open_base_gencpp)
add_dependencies(open_base_gencpp open_base_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS open_base_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
)
_generate_msg_eus(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
)
_generate_msg_eus(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
)
_generate_msg_eus(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg"
  "${MSG_I_FLAGS}"
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
)

### Generating Services
_generate_srv_eus(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
)
_generate_srv_eus(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
)
_generate_srv_eus(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
)

### Generating Module File
_generate_module_eus(open_base
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(open_base_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(open_base_generate_messages open_base_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg" NAME_WE)
add_dependencies(open_base_generate_messages_eus _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv" NAME_WE)
add_dependencies(open_base_generate_messages_eus _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg" NAME_WE)
add_dependencies(open_base_generate_messages_eus _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg" NAME_WE)
add_dependencies(open_base_generate_messages_eus _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv" NAME_WE)
add_dependencies(open_base_generate_messages_eus _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg" NAME_WE)
add_dependencies(open_base_generate_messages_eus _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv" NAME_WE)
add_dependencies(open_base_generate_messages_eus _open_base_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(open_base_geneus)
add_dependencies(open_base_geneus open_base_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS open_base_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
)
_generate_msg_lisp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
)
_generate_msg_lisp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
)
_generate_msg_lisp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg"
  "${MSG_I_FLAGS}"
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
)

### Generating Services
_generate_srv_lisp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
)
_generate_srv_lisp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
)
_generate_srv_lisp(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
)

### Generating Module File
_generate_module_lisp(open_base
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(open_base_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(open_base_generate_messages open_base_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg" NAME_WE)
add_dependencies(open_base_generate_messages_lisp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv" NAME_WE)
add_dependencies(open_base_generate_messages_lisp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg" NAME_WE)
add_dependencies(open_base_generate_messages_lisp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg" NAME_WE)
add_dependencies(open_base_generate_messages_lisp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv" NAME_WE)
add_dependencies(open_base_generate_messages_lisp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg" NAME_WE)
add_dependencies(open_base_generate_messages_lisp _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv" NAME_WE)
add_dependencies(open_base_generate_messages_lisp _open_base_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(open_base_genlisp)
add_dependencies(open_base_genlisp open_base_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS open_base_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
)
_generate_msg_nodejs(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
)
_generate_msg_nodejs(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
)
_generate_msg_nodejs(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg"
  "${MSG_I_FLAGS}"
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
)

### Generating Services
_generate_srv_nodejs(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
)
_generate_srv_nodejs(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
)
_generate_srv_nodejs(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
)

### Generating Module File
_generate_module_nodejs(open_base
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(open_base_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(open_base_generate_messages open_base_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg" NAME_WE)
add_dependencies(open_base_generate_messages_nodejs _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv" NAME_WE)
add_dependencies(open_base_generate_messages_nodejs _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg" NAME_WE)
add_dependencies(open_base_generate_messages_nodejs _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg" NAME_WE)
add_dependencies(open_base_generate_messages_nodejs _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv" NAME_WE)
add_dependencies(open_base_generate_messages_nodejs _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg" NAME_WE)
add_dependencies(open_base_generate_messages_nodejs _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv" NAME_WE)
add_dependencies(open_base_generate_messages_nodejs _open_base_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(open_base_gennodejs)
add_dependencies(open_base_gennodejs open_base_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS open_base_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
)
_generate_msg_py(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
)
_generate_msg_py(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
)
_generate_msg_py(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg"
  "${MSG_I_FLAGS}"
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
)

### Generating Services
_generate_srv_py(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
)
_generate_srv_py(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
)
_generate_srv_py(open_base
  "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
)

### Generating Module File
_generate_module_py(open_base
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(open_base_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(open_base_generate_messages open_base_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementBezier.msg" NAME_WE)
add_dependencies(open_base_generate_messages_py _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/FrameToFrame.srv" NAME_WE)
add_dependencies(open_base_generate_messages_py _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Velocity.msg" NAME_WE)
add_dependencies(open_base_generate_messages_py _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/MovementGeneric.msg" NAME_WE)
add_dependencies(open_base_generate_messages_py _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsForward.srv" NAME_WE)
add_dependencies(open_base_generate_messages_py _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg/Movement.msg" NAME_WE)
add_dependencies(open_base_generate_messages_py _open_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/srv/KinematicsInverse.srv" NAME_WE)
add_dependencies(open_base_generate_messages_py _open_base_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(open_base_genpy)
add_dependencies(open_base_genpy open_base_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS open_base_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/open_base
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(open_base_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(open_base_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/open_base
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(open_base_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(open_base_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/open_base
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(open_base_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(open_base_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/open_base
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(open_base_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(open_base_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/open_base
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(open_base_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(open_base_generate_messages_py geometry_msgs_generate_messages_py)
endif()
