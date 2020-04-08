// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef TURTLESIM__MSG__POSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TURTLESIM__MSG__POSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "turtlesim/msg/pose__struct.hpp"
#include "turtlesim/msg/dds_opensplice/ccpp_Pose_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace turtlesim
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim
extern void register_type__Pose(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim
extern void convert_ros_message_to_dds(
  const turtlesim::msg::Pose & ros_message,
  turtlesim::msg::dds_::Pose_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim
extern void publish__Pose(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim
extern void convert_dds_message_to_ros(
  const turtlesim::msg::dds_::Pose_ & dds_message,
  turtlesim::msg::Pose & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim
extern bool take__Pose(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__Pose(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__Pose(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, msg,
  Pose)();

#ifdef __cplusplus
}
#endif
#endif  // TURTLESIM__MSG__POSE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
