// generated from rosidl_typesupport_opensplice_cpp/resource/idl__dds_opensplice_type_support.cpp.em
// generated code does not contain a copyright notice

#include <codecvt>
#include <cstring>
#include <iostream>
#include <limits>
#include <locale>
#include <sstream>
#include <stdexcept>
#include <string>

#include <u_instanceHandle.h>
#include <CdrTypeSupport.h>

// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "turtlesim/action/rotate_absolute__struct.hpp"
#include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
#include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_RotateAbsolute_Goal = turtlesim::action::dds_::RotateAbsolute_Goal_;
using __ros_msg_type_RotateAbsolute_Goal = turtlesim::action::RotateAbsolute_Goal;

static turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport __type_support_RotateAbsolute_Goal;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__RotateAbsolute_Goal(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_RotateAbsolute_Goal.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_RotateAbsolute_Goal & ros_message,
  __dds_msg_type_RotateAbsolute_Goal & dds_message)
{
  // member.name theta
  dds_message.theta_ = ros_message.theta;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__RotateAbsolute_Goal(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_RotateAbsolute_Goal & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_Goal *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_Goal dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter * data_writer =
    turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter.write: "
             "the handle has not been registered with this turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_RotateAbsolute_Goal & dds_message,
  __ros_msg_type_RotateAbsolute_Goal & ros_message)
{
  // member.name theta
  ros_message.theta =
    dds_message.theta_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__RotateAbsolute_Goal(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  turtlesim::action::dds_::RotateAbsolute_Goal_DataReader * data_reader =
    turtlesim::action::dds_::RotateAbsolute_Goal_DataReader::_narrow(topic_reader);

  turtlesim::action::dds_::RotateAbsolute_Goal_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_Goal_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_Goal_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_RotateAbsolute_Goal & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_Goal *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_Goal_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_Goal_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__RotateAbsolute_Goal(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_RotateAbsolute_Goal & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_Goal *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_Goal dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_Goal);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.serialize: "
             "this turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__RotateAbsolute_Goal(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_RotateAbsolute_Goal dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_Goal);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.deserialize: "
             "this turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Goal_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_RotateAbsolute_Goal & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_Goal *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t RotateAbsolute_Goal_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_Goal",
  &register_type__RotateAbsolute_Goal,
  &publish__RotateAbsolute_Goal,
  &take__RotateAbsolute_Goal,
  &serialize__RotateAbsolute_Goal,
  &deserialize__RotateAbsolute_Goal,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t RotateAbsolute_Goal_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_Goal_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Goal>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_Goal_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_Goal)()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_Goal_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_RotateAbsolute_Result = turtlesim::action::dds_::RotateAbsolute_Result_;
using __ros_msg_type_RotateAbsolute_Result = turtlesim::action::RotateAbsolute_Result;

static turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport __type_support_RotateAbsolute_Result;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__RotateAbsolute_Result(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_RotateAbsolute_Result.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_RotateAbsolute_Result & ros_message,
  __dds_msg_type_RotateAbsolute_Result & dds_message)
{
  // member.name delta
  dds_message.delta_ = ros_message.delta;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__RotateAbsolute_Result(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_RotateAbsolute_Result & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_Result *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_Result dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::action::dds_::RotateAbsolute_Result_DataWriter * data_writer =
    turtlesim::action::dds_::RotateAbsolute_Result_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_Result_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_Result_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataWriter.write: "
             "the handle has not been registered with this turtlesim::action::dds_::RotateAbsolute_Result_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_RotateAbsolute_Result & dds_message,
  __ros_msg_type_RotateAbsolute_Result & ros_message)
{
  // member.name delta
  ros_message.delta =
    dds_message.delta_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__RotateAbsolute_Result(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  turtlesim::action::dds_::RotateAbsolute_Result_DataReader * data_reader =
    turtlesim::action::dds_::RotateAbsolute_Result_DataReader::_narrow(topic_reader);

  turtlesim::action::dds_::RotateAbsolute_Result_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_Result_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_Result_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_RotateAbsolute_Result & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_Result *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_Result_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_Result_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::action::dds_::RotateAbsolute_Result_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Result_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__RotateAbsolute_Result(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_RotateAbsolute_Result & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_Result *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_Result dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_Result);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.serialize: "
             "this turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__RotateAbsolute_Result(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_RotateAbsolute_Result dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_Result);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.deserialize: "
             "this turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Result_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_RotateAbsolute_Result & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_Result *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t RotateAbsolute_Result_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_Result",
  &register_type__RotateAbsolute_Result,
  &publish__RotateAbsolute_Result,
  &take__RotateAbsolute_Result,
  &serialize__RotateAbsolute_Result,
  &deserialize__RotateAbsolute_Result,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t RotateAbsolute_Result_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_Result_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Result>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_Result_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_Result)()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_Result_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_RotateAbsolute_Feedback = turtlesim::action::dds_::RotateAbsolute_Feedback_;
using __ros_msg_type_RotateAbsolute_Feedback = turtlesim::action::RotateAbsolute_Feedback;

static turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport __type_support_RotateAbsolute_Feedback;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__RotateAbsolute_Feedback(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_RotateAbsolute_Feedback.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_RotateAbsolute_Feedback & ros_message,
  __dds_msg_type_RotateAbsolute_Feedback & dds_message)
{
  // member.name remaining
  dds_message.remaining_ = ros_message.remaining;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__RotateAbsolute_Feedback(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_RotateAbsolute_Feedback & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_Feedback *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_Feedback dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter * data_writer =
    turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter.write: "
             "the handle has not been registered with this turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_RotateAbsolute_Feedback & dds_message,
  __ros_msg_type_RotateAbsolute_Feedback & ros_message)
{
  // member.name remaining
  ros_message.remaining =
    dds_message.remaining_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__RotateAbsolute_Feedback(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader * data_reader =
    turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader::_narrow(topic_reader);

  turtlesim::action::dds_::RotateAbsolute_Feedback_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_RotateAbsolute_Feedback & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_Feedback *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__RotateAbsolute_Feedback(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_RotateAbsolute_Feedback & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_Feedback *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_Feedback dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_Feedback);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.serialize: "
             "this turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__RotateAbsolute_Feedback(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_RotateAbsolute_Feedback dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_Feedback);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.deserialize: "
             "this turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_Feedback_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_RotateAbsolute_Feedback & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_Feedback *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t RotateAbsolute_Feedback_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_Feedback",
  &register_type__RotateAbsolute_Feedback,
  &publish__RotateAbsolute_Feedback,
  &take__RotateAbsolute_Feedback,
  &serialize__RotateAbsolute_Feedback,
  &deserialize__RotateAbsolute_Feedback,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t RotateAbsolute_Feedback_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_Feedback_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Feedback>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_Feedback_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_Feedback)()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_Feedback_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/srv__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_opensplice_cpp/visibility_control.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/service_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/service_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/requester.hpp"
#include "rosidl_typesupport_opensplice_cpp/responder.hpp"

// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace dds_
{
struct UUID_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const unique_identifier_msgs::msg::UUID &,
  unique_identifier_msgs::msg::dds_::UUID_ &);
void convert_dds_message_to_ros(
  const unique_identifier_msgs::msg::dds_::UUID_ &,
  unique_identifier_msgs::msg::UUID &);
}  // namespace typesupport_opensplice_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs
namespace turtlesim
{
namespace action
{
namespace dds_
{
struct RotateAbsolute_Goal_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_Goal &,
  turtlesim::action::dds_::RotateAbsolute_Goal_ &);
void convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_Goal_ &,
  turtlesim::action::RotateAbsolute_Goal &);
}  // namespace typesupport_opensplice_cpp
}  // namespace action
}  // namespace turtlesim

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_RotateAbsolute_SendGoal_Request = turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_;
using __ros_msg_type_RotateAbsolute_SendGoal_Request = turtlesim::action::RotateAbsolute_SendGoal_Request;

static turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport __type_support_RotateAbsolute_SendGoal_Request;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__RotateAbsolute_SendGoal_Request(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_RotateAbsolute_SendGoal_Request.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_RotateAbsolute_SendGoal_Request & ros_message,
  __dds_msg_type_RotateAbsolute_SendGoal_Request & dds_message)
{
  // member.name goal_id
  unique_identifier_msgs::msg::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.goal_id, dds_message.goal_id_);
  // member.name goal
  turtlesim::action::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.goal, dds_message.goal_);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__RotateAbsolute_SendGoal_Request(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_RotateAbsolute_SendGoal_Request & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_SendGoal_Request *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_SendGoal_Request dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter * data_writer =
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter.write: "
             "the handle has not been registered with this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_RotateAbsolute_SendGoal_Request & dds_message,
  __ros_msg_type_RotateAbsolute_SendGoal_Request & ros_message)
{
  // member.name goal_id
  unique_identifier_msgs::msg::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.goal_id_, ros_message.goal_id);
  // member.name goal
  turtlesim::action::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.goal_, ros_message.goal);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__RotateAbsolute_SendGoal_Request(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader * data_reader =
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader::_narrow(topic_reader);

  turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_RotateAbsolute_SendGoal_Request & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_SendGoal_Request *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__RotateAbsolute_SendGoal_Request(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_RotateAbsolute_SendGoal_Request & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_SendGoal_Request *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_SendGoal_Request dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_SendGoal_Request);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.serialize: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__RotateAbsolute_SendGoal_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_RotateAbsolute_SendGoal_Request dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_SendGoal_Request);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.deserialize: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_RotateAbsolute_SendGoal_Request & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_SendGoal_Request *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t RotateAbsolute_SendGoal_Request_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal_Request",
  &register_type__RotateAbsolute_SendGoal_Request,
  &publish__RotateAbsolute_SendGoal_Request,
  &take__RotateAbsolute_SendGoal_Request,
  &serialize__RotateAbsolute_SendGoal_Request,
  &deserialize__RotateAbsolute_SendGoal_Request,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t RotateAbsolute_SendGoal_Request_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_SendGoal_Request_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal_Request>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_SendGoal_Request_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_SendGoal_Request)()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_SendGoal_Request_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace dds_
{
struct Time_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const builtin_interfaces::msg::Time &,
  builtin_interfaces::msg::dds_::Time_ &);
void convert_dds_message_to_ros(
  const builtin_interfaces::msg::dds_::Time_ &,
  builtin_interfaces::msg::Time &);
}  // namespace typesupport_opensplice_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_RotateAbsolute_SendGoal_Response = turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_;
using __ros_msg_type_RotateAbsolute_SendGoal_Response = turtlesim::action::RotateAbsolute_SendGoal_Response;

static turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport __type_support_RotateAbsolute_SendGoal_Response;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__RotateAbsolute_SendGoal_Response(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_RotateAbsolute_SendGoal_Response.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_RotateAbsolute_SendGoal_Response & ros_message,
  __dds_msg_type_RotateAbsolute_SendGoal_Response & dds_message)
{
  // member.name accepted
  dds_message.accepted_ = ros_message.accepted;
  // member.name stamp
  builtin_interfaces::msg::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.stamp, dds_message.stamp_);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__RotateAbsolute_SendGoal_Response(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_RotateAbsolute_SendGoal_Response & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_SendGoal_Response *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_SendGoal_Response dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter * data_writer =
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter.write: "
             "the handle has not been registered with this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_RotateAbsolute_SendGoal_Response & dds_message,
  __ros_msg_type_RotateAbsolute_SendGoal_Response & ros_message)
{
  // member.name accepted
  ros_message.accepted =
    (dds_message.accepted_ != 0);
  // member.name stamp
  builtin_interfaces::msg::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.stamp_, ros_message.stamp);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__RotateAbsolute_SendGoal_Response(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader * data_reader =
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader::_narrow(topic_reader);

  turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_RotateAbsolute_SendGoal_Response & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_SendGoal_Response *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__RotateAbsolute_SendGoal_Response(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_RotateAbsolute_SendGoal_Response & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_SendGoal_Response *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_SendGoal_Response dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_SendGoal_Response);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.serialize: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__RotateAbsolute_SendGoal_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_RotateAbsolute_SendGoal_Response dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_SendGoal_Response);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.deserialize: "
             "this turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_RotateAbsolute_SendGoal_Response & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_SendGoal_Response *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t RotateAbsolute_SendGoal_Response_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal_Response",
  &register_type__RotateAbsolute_SendGoal_Response,
  &publish__RotateAbsolute_SendGoal_Response,
  &take__RotateAbsolute_SendGoal_Response,
  &serialize__RotateAbsolute_SendGoal_Response,
  &deserialize__RotateAbsolute_SendGoal_Response,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t RotateAbsolute_SendGoal_Response_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_SendGoal_Response_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal_Response>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_SendGoal_Response_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_SendGoal_Response)()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_SendGoal_Response_handle;
}

#ifdef __cplusplus
}
#endif


namespace rosidl_typesupport_opensplice_cpp
{

template<>
class Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_
{
public:
  turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_ & data()
  {
    return request_;
  }
};

template<>
class TemplateDataReader<turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader
{
public:
  static const char * take_sample(
    DDS::DataReader * datareader,
    Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_> & sample,
    bool * taken)
  noexcept
  {
    turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader * typed_datareader = _narrow(datareader);

    turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      // See ros2/rclcpp#192 for a justification of this option:
      // https://github.com/ros2/rclcpp/issues/192#issuecomment-183491185
      DDS::ANY_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.take failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.take failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.take failed with "
               "unknown return code";
    }

    *taken = (sample_infos.length() > 0 && sample_infos[0].valid_data);
    if (*taken) {
      sample = reinterpret_cast<Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_> &>(dds_messages[0]);
    }
    status = typed_datareader->return_loan(dds_messages, sample_infos);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.return_loan failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.return_loan failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.return_loan failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.return_loan failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.return_loan failed with: "
               "a precondition is not met, one of: "
               "the data_values and info_seq do not belong to a single related pair, or "
               "the data_values and info_seq were not obtained from this "
               "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader";
      case DDS::RETCODE_OK:
        break;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataReader.return_loan failed with "
               "unknown return code";
    }

    return nullptr;
  }
};

template<>
class TemplateDataReader<Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_>>
  : public TemplateDataReader<turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_>
{
};

template<>
class TemplateDataWriter<turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter
{
public:
  static const char * write_sample(
    DDS::DataWriter * datawriter,
    Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_> & sample)
  noexcept
  {
    turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter * typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter.write: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter.write: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter.write: "
               "the handle has not been registered with this "
               "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_DataWriter.write: unknown return code";
    }
  }
};

template<>
class TemplateDataWriter<Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_>>
  : public TemplateDataWriter<turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_>
{
};

template<>
class Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_
{
public:
  turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_ & data()
  {
    return response_;
  }
};

template<>
class TemplateDataReader<turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader
{
public:
  static const char * take_sample(
    DDS::DataReader * datareader,
    Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_> & sample,
    bool * taken)
  noexcept
  {
    turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader * typed_datareader = _narrow(datareader);

    turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      // See ros2/rclcpp#192 for a justification of this option:
      // https://github.com/ros2/rclcpp/issues/192#issuecomment-183491185
      DDS::ANY_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.take failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.take failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.take failed with "
               "unknown return code";
    }

    *taken = (sample_infos.length() > 0 && sample_infos[0].valid_data);
    if (*taken) {
      sample = reinterpret_cast<Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_> &>(dds_messages[0]);
    }
    status = typed_datareader->return_loan(dds_messages, sample_infos);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.return_loan failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.return_loan failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.return_loan failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.return_loan failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.return_loan failed with: "
               "a precondition is not met, one of: "
               "the data_values and info_seq do not belong to a single related pair, or "
               "the data_values and info_seq were not obtained from this "
               "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader";
      case DDS::RETCODE_OK:
        break;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataReader.return_loan failed with "
               "unknown return code";
    }

    return nullptr;
  }
};

template<>
class TemplateDataReader<Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_>>
  : public TemplateDataReader<turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_>
{
};

template<>
class TemplateDataWriter<turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter
{
public:
  static const char * write_sample(
    DDS::DataWriter * datawriter,
    Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_> & sample)
  noexcept
  {
    turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter * typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter.write: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter.write: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter.write: "
               "the handle has not been registered with this "
               "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_DataWriter.write: unknown return code";
    }
  }
};

template<>
class TemplateDataWriter<Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_>>
  : public TemplateDataWriter<turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_>
{
};

}  // namespace rosidl_typesupport_opensplice_cpp

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

const char *
register_types__RotateAbsolute_SendGoal(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  DDS::DomainParticipant * participant = static_cast<DDS::DomainParticipant *>(untyped_participant);

  turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_TypeSupport ros_request_ts;
  DDS::ReturnCode_t status = ros_request_ts.register_type(participant, request_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_TypeSupport.register_type: unkown return code";
  }

  turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_TypeSupport ros_response_ts;
  status = ros_response_ts.register_type(participant, response_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_TypeSupport.register_type: "
             "precondition not met, already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_TypeSupport.register_type: unkown return code";
  }
  return nullptr;
}

const char *
create_requester__RotateAbsolute_SendGoal(
  void * untyped_participant, const char * service_name,
  void ** untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal");
  const std::string request_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_");
  const std::string response_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__RotateAbsolute_SendGoal(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;

  RequesterT * requester = static_cast<RequesterT *>(_allocator(sizeof(RequesterT)));
  if (!requester) {
    return "failed to allocate memory for requester";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (requester) RequesterT(participant, service_name, service_type_name);
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of RequesterT";
  }
  error_string = requester->init(datareader_qos, datawriter_qos,
      avoid_ros_namespace_conventions);
  if (error_string) {
    return error_string;
  }

  *untyped_requester = requester;
  *untyped_reader = requester->get_response_datareader();

  return nullptr;
}

const char *
create_responder__RotateAbsolute_SendGoal(
  void * untyped_participant, const char * service_name,
  void ** untyped_responder, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal");
  const std::string request_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_");
  const std::string response_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__RotateAbsolute_SendGoal(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;

  ResponderT * responder = static_cast<ResponderT *>(_allocator(sizeof(ResponderT)));
  if (!responder) {
    return "failed to allocate memory for responder";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (responder) ResponderT(participant, service_name, service_type_name);
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of ResponderT";
  }
  error_string = responder->init(datareader_qos, datawriter_qos,
      avoid_ros_namespace_conventions);
  if (error_string) {
    return error_string;
  }

  *untyped_responder = responder;
  *untyped_reader = responder->get_request_datareader();

  return nullptr;
}

const char *
send_request__RotateAbsolute_SendGoal(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_>;
  using ROSRequestT = turtlesim::action::RotateAbsolute_SendGoal_Request;

  SampleT request;
  auto ros_request = reinterpret_cast<const ROSRequestT *>(untyped_ros_request);
  turtlesim::action::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_request, request.data());

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;

  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  const char * error_string = requester->send_request(request);
  if (error_string) {
    return error_string;
  }
  *sequence_number = request.sequence_number_;

  return nullptr;
}

const char *
take_request__RotateAbsolute_SendGoal(
  void * untyped_responder, rmw_request_id_t * request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;
  using ROSRequestT = turtlesim::action::RotateAbsolute_SendGoal_Request;

  auto ros_request = static_cast<ROSRequestT *>(untyped_ros_request);

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    turtlesim::action::typesupport_opensplice_cpp::convert_dds_message_to_ros(request.data(), *ros_request);

    request_header->sequence_number = request.sequence_number_;
    std::memcpy(
      &request_header->writer_guid[0], &request.client_guid_0_, sizeof(request.client_guid_0_));
    std::memcpy(
      &request_header->writer_guid[0] + sizeof(request.client_guid_0_),
      &request.client_guid_1_, sizeof(request.client_guid_1_));

    *taken = true;
    return nullptr;
  }
  *taken = false;
  return nullptr;
}

const char *
send_response__RotateAbsolute_SendGoal(
  void * untyped_responder, const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ROSResponseT = turtlesim::action::RotateAbsolute_SendGoal_Response;
  rosidl_typesupport_opensplice_cpp::Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_> response;
  auto ros_response = reinterpret_cast<const ROSResponseT *>(untyped_ros_response);
  turtlesim::action::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_response, response.data());


  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;
  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  const char * error_string = responder->send_response(*request_header, response);
  if (error_string) {
    return error_string;
  }
  return nullptr;
}

const char *
take_response__RotateAbsolute_SendGoal(
  void * untyped_requester, rmw_request_id_t * request_header, void * untyped_ros_response,
  bool * taken)
{
  using ROSResponseT = turtlesim::action::RotateAbsolute_SendGoal_Response;
  auto ros_response = static_cast<ROSResponseT *>(untyped_ros_response);

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;
  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  rosidl_typesupport_opensplice_cpp::Sample<turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_> response;
  const char * error_string = requester->take_response(response, taken);
  if (error_string) {
    return error_string;
  }
  if (*taken) {
    request_header->sequence_number = response.sequence_number_;

    turtlesim::action::typesupport_opensplice_cpp::convert_dds_message_to_ros(
      response.data(), *ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__RotateAbsolute_SendGoal(void * untyped_requester, void (* deallocator)(void *))
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;

  auto requester = static_cast<RequesterT *>(untyped_requester);
  const char * teardown_status = requester->teardown();
  try {
    requester->~RequesterT();
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of RequesterT";
  }
  if (teardown_status != nullptr) {
    return teardown_status;
  }
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(requester);
  return nullptr;
}

const char *
destroy_responder__RotateAbsolute_SendGoal(void * untyped_responder, void (* deallocator)(void *))
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;
  auto responder = static_cast<ResponderT *>(untyped_responder);
  const char * teardown_status = responder->teardown();
  try {
    responder->~ResponderT();
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of ResponderT";
  }
  if (teardown_status != nullptr) {
    return teardown_status;
  }
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(responder);
  return nullptr;
}

const char *
server_is_available__RotateAbsolute_SendGoal(
  void * requester, const rmw_node_t * node, bool * is_available)
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_,
    turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_
  >;

  auto typed_requester = reinterpret_cast<RequesterT *>(requester);

  return typed_requester->server_is_available(node, is_available);
}

static service_type_support_callbacks_t RotateAbsolute_SendGoal_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal",
  &create_requester__RotateAbsolute_SendGoal,
  &destroy_requester__RotateAbsolute_SendGoal,
  &create_responder__RotateAbsolute_SendGoal,
  &destroy_responder__RotateAbsolute_SendGoal,
  &send_request__RotateAbsolute_SendGoal,
  &take_request__RotateAbsolute_SendGoal,
  &send_response__RotateAbsolute_SendGoal,
  &take_response__RotateAbsolute_SendGoal,
  &server_is_available__RotateAbsolute_SendGoal,
};

static rosidl_service_type_support_t RotateAbsolute_SendGoal_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_SendGoal_callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_SendGoal_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_SendGoal)() {
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_SendGoal_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/srv__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/visibility_control.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/service_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/requester.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/responder.hpp"

// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace dds_
{
struct UUID_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const unique_identifier_msgs::msg::UUID &,
  unique_identifier_msgs::msg::dds_::UUID_ &);
void convert_dds_message_to_ros(
  const unique_identifier_msgs::msg::dds_::UUID_ &,
  unique_identifier_msgs::msg::UUID &);
}  // namespace typesupport_opensplice_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_RotateAbsolute_GetResult_Request = turtlesim::action::dds_::RotateAbsolute_GetResult_Request_;
using __ros_msg_type_RotateAbsolute_GetResult_Request = turtlesim::action::RotateAbsolute_GetResult_Request;

static turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport __type_support_RotateAbsolute_GetResult_Request;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__RotateAbsolute_GetResult_Request(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_RotateAbsolute_GetResult_Request.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_RotateAbsolute_GetResult_Request & ros_message,
  __dds_msg_type_RotateAbsolute_GetResult_Request & dds_message)
{
  // member.name goal_id
  unique_identifier_msgs::msg::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.goal_id, dds_message.goal_id_);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__RotateAbsolute_GetResult_Request(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_RotateAbsolute_GetResult_Request & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_GetResult_Request *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_GetResult_Request dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter * data_writer =
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter.write: "
             "the handle has not been registered with this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_RotateAbsolute_GetResult_Request & dds_message,
  __ros_msg_type_RotateAbsolute_GetResult_Request & ros_message)
{
  // member.name goal_id
  unique_identifier_msgs::msg::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.goal_id_, ros_message.goal_id);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__RotateAbsolute_GetResult_Request(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader * data_reader =
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader::_narrow(topic_reader);

  turtlesim::action::dds_::RotateAbsolute_GetResult_Request_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_RotateAbsolute_GetResult_Request & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_GetResult_Request *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__RotateAbsolute_GetResult_Request(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_RotateAbsolute_GetResult_Request & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_GetResult_Request *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_GetResult_Request dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_GetResult_Request);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.serialize: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__RotateAbsolute_GetResult_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_RotateAbsolute_GetResult_Request dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_GetResult_Request);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.deserialize: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_RotateAbsolute_GetResult_Request & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_GetResult_Request *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t RotateAbsolute_GetResult_Request_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_GetResult_Request",
  &register_type__RotateAbsolute_GetResult_Request,
  &publish__RotateAbsolute_GetResult_Request,
  &take__RotateAbsolute_GetResult_Request,
  &serialize__RotateAbsolute_GetResult_Request,
  &deserialize__RotateAbsolute_GetResult_Request,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t RotateAbsolute_GetResult_Request_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_GetResult_Request_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_GetResult_Request>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_GetResult_Request_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_GetResult_Request)()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_GetResult_Request_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions
namespace turtlesim
{
namespace action
{
namespace dds_
{
struct RotateAbsolute_Result_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_Result &,
  turtlesim::action::dds_::RotateAbsolute_Result_ &);
void convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_Result_ &,
  turtlesim::action::RotateAbsolute_Result &);
}  // namespace typesupport_opensplice_cpp
}  // namespace action
}  // namespace turtlesim

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_RotateAbsolute_GetResult_Response = turtlesim::action::dds_::RotateAbsolute_GetResult_Response_;
using __ros_msg_type_RotateAbsolute_GetResult_Response = turtlesim::action::RotateAbsolute_GetResult_Response;

static turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport __type_support_RotateAbsolute_GetResult_Response;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__RotateAbsolute_GetResult_Response(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_RotateAbsolute_GetResult_Response.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_RotateAbsolute_GetResult_Response & ros_message,
  __dds_msg_type_RotateAbsolute_GetResult_Response & dds_message)
{
  // member.name status
  dds_message.status_ = ros_message.status;
  // member.name result
  turtlesim::action::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.result, dds_message.result_);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__RotateAbsolute_GetResult_Response(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_RotateAbsolute_GetResult_Response & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_GetResult_Response *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_GetResult_Response dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter * data_writer =
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter.write: "
             "the handle has not been registered with this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_RotateAbsolute_GetResult_Response & dds_message,
  __ros_msg_type_RotateAbsolute_GetResult_Response & ros_message)
{
  // member.name status
  ros_message.status =
    dds_message.status_;
  // member.name result
  turtlesim::action::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.result_, ros_message.result);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__RotateAbsolute_GetResult_Response(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader * data_reader =
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader::_narrow(topic_reader);

  turtlesim::action::dds_::RotateAbsolute_GetResult_Response_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_RotateAbsolute_GetResult_Response & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_GetResult_Response *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__RotateAbsolute_GetResult_Response(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_RotateAbsolute_GetResult_Response & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_GetResult_Response *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_GetResult_Response dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_GetResult_Response);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.serialize: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__RotateAbsolute_GetResult_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_RotateAbsolute_GetResult_Response dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_GetResult_Response);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.deserialize: "
             "this turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_RotateAbsolute_GetResult_Response & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_GetResult_Response *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t RotateAbsolute_GetResult_Response_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_GetResult_Response",
  &register_type__RotateAbsolute_GetResult_Response,
  &publish__RotateAbsolute_GetResult_Response,
  &take__RotateAbsolute_GetResult_Response,
  &serialize__RotateAbsolute_GetResult_Response,
  &deserialize__RotateAbsolute_GetResult_Response,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t RotateAbsolute_GetResult_Response_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_GetResult_Response_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_GetResult_Response>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_GetResult_Response_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_GetResult_Response)()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_GetResult_Response_handle;
}

#ifdef __cplusplus
}
#endif


namespace rosidl_typesupport_opensplice_cpp
{

template<>
class Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Request_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_
{
public:
  turtlesim::action::dds_::RotateAbsolute_GetResult_Request_ & data()
  {
    return request_;
  }
};

template<>
class TemplateDataReader<turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader
{
public:
  static const char * take_sample(
    DDS::DataReader * datareader,
    Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Request_> & sample,
    bool * taken)
  noexcept
  {
    turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader * typed_datareader = _narrow(datareader);

    turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      // See ros2/rclcpp#192 for a justification of this option:
      // https://github.com/ros2/rclcpp/issues/192#issuecomment-183491185
      DDS::ANY_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.take failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.take failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.take failed with "
               "unknown return code";
    }

    *taken = (sample_infos.length() > 0 && sample_infos[0].valid_data);
    if (*taken) {
      sample = reinterpret_cast<Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Request_> &>(dds_messages[0]);
    }
    status = typed_datareader->return_loan(dds_messages, sample_infos);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.return_loan failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.return_loan failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.return_loan failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.return_loan failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.return_loan failed with: "
               "a precondition is not met, one of: "
               "the data_values and info_seq do not belong to a single related pair, or "
               "the data_values and info_seq were not obtained from this "
               "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader";
      case DDS::RETCODE_OK:
        break;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataReader.return_loan failed with "
               "unknown return code";
    }

    return nullptr;
  }
};

template<>
class TemplateDataReader<Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Request_>>
  : public TemplateDataReader<turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_>
{
};

template<>
class TemplateDataWriter<turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter
{
public:
  static const char * write_sample(
    DDS::DataWriter * datawriter,
    Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Request_> & sample)
  noexcept
  {
    turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter * typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter.write: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter.write: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter.write: "
               "the handle has not been registered with this "
               "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_DataWriter.write: unknown return code";
    }
  }
};

template<>
class TemplateDataWriter<Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Request_>>
  : public TemplateDataWriter<turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_>
{
};

template<>
class Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Response_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_
{
public:
  turtlesim::action::dds_::RotateAbsolute_GetResult_Response_ & data()
  {
    return response_;
  }
};

template<>
class TemplateDataReader<turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader
{
public:
  static const char * take_sample(
    DDS::DataReader * datareader,
    Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Response_> & sample,
    bool * taken)
  noexcept
  {
    turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader * typed_datareader = _narrow(datareader);

    turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      // See ros2/rclcpp#192 for a justification of this option:
      // https://github.com/ros2/rclcpp/issues/192#issuecomment-183491185
      DDS::ANY_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.take failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.take failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.take failed with "
               "unknown return code";
    }

    *taken = (sample_infos.length() > 0 && sample_infos[0].valid_data);
    if (*taken) {
      sample = reinterpret_cast<Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Response_> &>(dds_messages[0]);
    }
    status = typed_datareader->return_loan(dds_messages, sample_infos);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.return_loan failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.return_loan failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.return_loan failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.return_loan failed with: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.return_loan failed with: "
               "a precondition is not met, one of: "
               "the data_values and info_seq do not belong to a single related pair, or "
               "the data_values and info_seq were not obtained from this "
               "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader";
      case DDS::RETCODE_OK:
        break;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataReader.return_loan failed with "
               "unknown return code";
    }

    return nullptr;
  }
};

template<>
class TemplateDataReader<Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Response_>>
  : public TemplateDataReader<turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_>
{
};

template<>
class TemplateDataWriter<turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_>
  : public turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter
{
public:
  static const char * write_sample(
    DDS::DataWriter * datawriter,
    Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Response_> & sample)
  noexcept
  {
    turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter * typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter.write: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter.write: "
               "this turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter.write: "
               "the handle has not been registered with this "
               "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_DataWriter.write: unknown return code";
    }
  }
};

template<>
class TemplateDataWriter<Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Response_>>
  : public TemplateDataWriter<turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_>
{
};

}  // namespace rosidl_typesupport_opensplice_cpp

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

const char *
register_types__RotateAbsolute_GetResult(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  DDS::DomainParticipant * participant = static_cast<DDS::DomainParticipant *>(untyped_participant);

  turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_TypeSupport ros_request_ts;
  DDS::ReturnCode_t status = ros_request_ts.register_type(participant, request_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_TypeSupport.register_type: unkown return code";
  }

  turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_TypeSupport ros_response_ts;
  status = ros_response_ts.register_type(participant, response_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_TypeSupport.register_type: "
             "precondition not met, already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_TypeSupport.register_type: unkown return code";
  }
  return nullptr;
}

const char *
create_requester__RotateAbsolute_GetResult(
  void * untyped_participant, const char * service_name,
  void ** untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_GetResult");
  const std::string request_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_");
  const std::string response_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__RotateAbsolute_GetResult(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;

  RequesterT * requester = static_cast<RequesterT *>(_allocator(sizeof(RequesterT)));
  if (!requester) {
    return "failed to allocate memory for requester";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (requester) RequesterT(participant, service_name, service_type_name);
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of RequesterT";
  }
  error_string = requester->init(datareader_qos, datawriter_qos,
      avoid_ros_namespace_conventions);
  if (error_string) {
    return error_string;
  }

  *untyped_requester = requester;
  *untyped_reader = requester->get_response_datareader();

  return nullptr;
}

const char *
create_responder__RotateAbsolute_GetResult(
  void * untyped_participant, const char * service_name,
  void ** untyped_responder, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_GetResult");
  const std::string request_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_");
  const std::string response_type_name("turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__RotateAbsolute_GetResult(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;

  ResponderT * responder = static_cast<ResponderT *>(_allocator(sizeof(ResponderT)));
  if (!responder) {
    return "failed to allocate memory for responder";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (responder) ResponderT(participant, service_name, service_type_name);
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of ResponderT";
  }
  error_string = responder->init(datareader_qos, datawriter_qos,
      avoid_ros_namespace_conventions);
  if (error_string) {
    return error_string;
  }

  *untyped_responder = responder;
  *untyped_reader = responder->get_request_datareader();

  return nullptr;
}

const char *
send_request__RotateAbsolute_GetResult(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Request_>;
  using ROSRequestT = turtlesim::action::RotateAbsolute_GetResult_Request;

  SampleT request;
  auto ros_request = reinterpret_cast<const ROSRequestT *>(untyped_ros_request);
  turtlesim::action::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_request, request.data());

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;

  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  const char * error_string = requester->send_request(request);
  if (error_string) {
    return error_string;
  }
  *sequence_number = request.sequence_number_;

  return nullptr;
}

const char *
take_request__RotateAbsolute_GetResult(
  void * untyped_responder, rmw_request_id_t * request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;
  using ROSRequestT = turtlesim::action::RotateAbsolute_GetResult_Request;

  auto ros_request = static_cast<ROSRequestT *>(untyped_ros_request);

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    turtlesim::action::typesupport_opensplice_cpp::convert_dds_message_to_ros(request.data(), *ros_request);

    request_header->sequence_number = request.sequence_number_;
    std::memcpy(
      &request_header->writer_guid[0], &request.client_guid_0_, sizeof(request.client_guid_0_));
    std::memcpy(
      &request_header->writer_guid[0] + sizeof(request.client_guid_0_),
      &request.client_guid_1_, sizeof(request.client_guid_1_));

    *taken = true;
    return nullptr;
  }
  *taken = false;
  return nullptr;
}

const char *
send_response__RotateAbsolute_GetResult(
  void * untyped_responder, const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ROSResponseT = turtlesim::action::RotateAbsolute_GetResult_Response;
  rosidl_typesupport_opensplice_cpp::Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Response_> response;
  auto ros_response = reinterpret_cast<const ROSResponseT *>(untyped_ros_response);
  turtlesim::action::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_response, response.data());


  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;
  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  const char * error_string = responder->send_response(*request_header, response);
  if (error_string) {
    return error_string;
  }
  return nullptr;
}

const char *
take_response__RotateAbsolute_GetResult(
  void * untyped_requester, rmw_request_id_t * request_header, void * untyped_ros_response,
  bool * taken)
{
  using ROSResponseT = turtlesim::action::RotateAbsolute_GetResult_Response;
  auto ros_response = static_cast<ROSResponseT *>(untyped_ros_response);

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;
  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  rosidl_typesupport_opensplice_cpp::Sample<turtlesim::action::dds_::RotateAbsolute_GetResult_Response_> response;
  const char * error_string = requester->take_response(response, taken);
  if (error_string) {
    return error_string;
  }
  if (*taken) {
    request_header->sequence_number = response.sequence_number_;

    turtlesim::action::typesupport_opensplice_cpp::convert_dds_message_to_ros(
      response.data(), *ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__RotateAbsolute_GetResult(void * untyped_requester, void (* deallocator)(void *))
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;

  auto requester = static_cast<RequesterT *>(untyped_requester);
  const char * teardown_status = requester->teardown();
  try {
    requester->~RequesterT();
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of RequesterT";
  }
  if (teardown_status != nullptr) {
    return teardown_status;
  }
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(requester);
  return nullptr;
}

const char *
destroy_responder__RotateAbsolute_GetResult(void * untyped_responder, void (* deallocator)(void *))
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;
  auto responder = static_cast<ResponderT *>(untyped_responder);
  const char * teardown_status = responder->teardown();
  try {
    responder->~ResponderT();
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of ResponderT";
  }
  if (teardown_status != nullptr) {
    return teardown_status;
  }
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(responder);
  return nullptr;
}

const char *
server_is_available__RotateAbsolute_GetResult(
  void * requester, const rmw_node_t * node, bool * is_available)
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    turtlesim::action::dds_::RotateAbsolute_GetResult_Request_,
    turtlesim::action::dds_::RotateAbsolute_GetResult_Response_
  >;

  auto typed_requester = reinterpret_cast<RequesterT *>(requester);

  return typed_requester->server_is_available(node, is_available);
}

static service_type_support_callbacks_t RotateAbsolute_GetResult_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_GetResult",
  &create_requester__RotateAbsolute_GetResult,
  &destroy_requester__RotateAbsolute_GetResult,
  &create_responder__RotateAbsolute_GetResult,
  &destroy_responder__RotateAbsolute_GetResult,
  &send_request__RotateAbsolute_GetResult,
  &take_request__RotateAbsolute_GetResult,
  &send_response__RotateAbsolute_GetResult,
  &take_response__RotateAbsolute_GetResult,
  &server_is_available__RotateAbsolute_GetResult,
};

static rosidl_service_type_support_t RotateAbsolute_GetResult_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_GetResult_callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim::action::RotateAbsolute_GetResult>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_GetResult_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_GetResult)() {
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_GetResult_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "turtlesim/action/rotate_absolute__struct.hpp"
// already included above
// #include "turtlesim/action/dds_opensplice/ccpp_RotateAbsolute_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace dds_
{
struct UUID_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const unique_identifier_msgs::msg::UUID &,
  unique_identifier_msgs::msg::dds_::UUID_ &);
void convert_dds_message_to_ros(
  const unique_identifier_msgs::msg::dds_::UUID_ &,
  unique_identifier_msgs::msg::UUID &);
}  // namespace typesupport_opensplice_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs
namespace turtlesim
{
namespace action
{
namespace dds_
{
struct RotateAbsolute_Feedback_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_Feedback &,
  turtlesim::action::dds_::RotateAbsolute_Feedback_ &);
void convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_Feedback_ &,
  turtlesim::action::RotateAbsolute_Feedback &);
}  // namespace typesupport_opensplice_cpp
}  // namespace action
}  // namespace turtlesim

namespace turtlesim
{
namespace action
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_RotateAbsolute_FeedbackMessage = turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_;
using __ros_msg_type_RotateAbsolute_FeedbackMessage = turtlesim::action::RotateAbsolute_FeedbackMessage;

static turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport __type_support_RotateAbsolute_FeedbackMessage;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__RotateAbsolute_FeedbackMessage(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_RotateAbsolute_FeedbackMessage.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_RotateAbsolute_FeedbackMessage & ros_message,
  __dds_msg_type_RotateAbsolute_FeedbackMessage & dds_message)
{
  // member.name goal_id
  unique_identifier_msgs::msg::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.goal_id, dds_message.goal_id_);
  // member.name feedback
  turtlesim::action::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.feedback, dds_message.feedback_);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__RotateAbsolute_FeedbackMessage(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_RotateAbsolute_FeedbackMessage & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_FeedbackMessage *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_FeedbackMessage dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter * data_writer =
    turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter.write: "
             "this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter.write: "
             "the handle has not been registered with this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_RotateAbsolute_FeedbackMessage & dds_message,
  __ros_msg_type_RotateAbsolute_FeedbackMessage & ros_message)
{
  // member.name goal_id
  unique_identifier_msgs::msg::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.goal_id_, ros_message.goal_id);
  // member.name feedback
  turtlesim::action::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.feedback_, ros_message.feedback);
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__RotateAbsolute_FeedbackMessage(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader * data_reader =
    turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader::_narrow(topic_reader);

  turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.take: "
        "this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_RotateAbsolute_FeedbackMessage & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_FeedbackMessage *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.return_loan: "
             "this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__RotateAbsolute_FeedbackMessage(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_RotateAbsolute_FeedbackMessage & ros_message = *static_cast<const __ros_msg_type_RotateAbsolute_FeedbackMessage *>(untyped_ros_message);
  __dds_msg_type_RotateAbsolute_FeedbackMessage dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_FeedbackMessage);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.serialize: "
             "this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__RotateAbsolute_FeedbackMessage(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_RotateAbsolute_FeedbackMessage dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_RotateAbsolute_FeedbackMessage);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.deserialize: "
             "this turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_RotateAbsolute_FeedbackMessage & ros_message = *static_cast<__ros_msg_type_RotateAbsolute_FeedbackMessage *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t RotateAbsolute_FeedbackMessage_callbacks = {
  "turtlesim::action",
  "RotateAbsolute_FeedbackMessage",
  &register_type__RotateAbsolute_FeedbackMessage,
  &publish__RotateAbsolute_FeedbackMessage,
  &take__RotateAbsolute_FeedbackMessage,
  &serialize__RotateAbsolute_FeedbackMessage,
  &deserialize__RotateAbsolute_FeedbackMessage,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t RotateAbsolute_FeedbackMessage_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &RotateAbsolute_FeedbackMessage_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_FeedbackMessage>()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_FeedbackMessage_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, action,
  RotateAbsolute_FeedbackMessage)()
{
  return &turtlesim::action::typesupport_opensplice_cpp::RotateAbsolute_FeedbackMessage_handle;
}

#ifdef __cplusplus
}
#endif
