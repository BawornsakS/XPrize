# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "neo_msgs: 11 messages, 0 services")

set(MSG_I_FLAGS "-Ineo_msgs:/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(neo_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg" ""
)

get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg" NAME_WE)
add_custom_target(_neo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neo_msgs" "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)
_generate_msg_cpp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(neo_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(neo_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(neo_msgs_generate_messages neo_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_cpp _neo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neo_msgs_gencpp)
add_dependencies(neo_msgs_gencpp neo_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neo_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)
_generate_msg_eus(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(neo_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(neo_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(neo_msgs_generate_messages neo_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_eus _neo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neo_msgs_geneus)
add_dependencies(neo_msgs_geneus neo_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neo_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)
_generate_msg_lisp(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(neo_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(neo_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(neo_msgs_generate_messages neo_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_lisp _neo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neo_msgs_genlisp)
add_dependencies(neo_msgs_genlisp neo_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neo_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)
_generate_msg_nodejs(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(neo_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(neo_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(neo_msgs_generate_messages neo_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_nodejs _neo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neo_msgs_gennodejs)
add_dependencies(neo_msgs_gennodejs neo_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neo_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)
_generate_msg_py(neo_msgs
  "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(neo_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(neo_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(neo_msgs_generate_messages neo_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/Keypad.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOOut.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/EmergencyStopState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/RadarBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IOAnalogIn.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/USBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/GyroBoard.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/PowerBoardState.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/IRSensors.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg/LCDOutput.msg" NAME_WE)
add_dependencies(neo_msgs_generate_messages_py _neo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neo_msgs_genpy)
add_dependencies(neo_msgs_genpy neo_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neo_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neo_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(neo_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neo_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(neo_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neo_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(neo_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neo_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(neo_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neo_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(neo_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
