// generated from rosidl_typesupport_opensplice_c/resource/idl__dds_opensplice__type_support.c.em
// generated code does not contain a copyright notice

#include <cassert>
#include <codecvt>
#include <cstring>
#include <iostream>
#include <limits>
#include <locale>
#include <sstream>

#include <CdrTypeSupport.h>
#include <u_instanceHandle.h>

// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

#include "turtlesim/msg/color__rosidl_typesupport_opensplice_c.h"
#include "rosidl_typesupport_opensplice_c/identifier.h"
#include "turtlesim/msg/rosidl_generator_c__visibility_control.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
#include "rmw/rmw.h"
#include "turtlesim/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
#include "turtlesim/msg/color.h"
#include "turtlesim/msg/dds_opensplice/ccpp_Color_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies

// forward declare type support functions

using __dds_msg_type_turtlesim__msg__Color = turtlesim::msg::dds_::Color_;
using __ros_msg_type_turtlesim__msg__Color = turtlesim__msg__Color;

static turtlesim::msg::dds_::Color_TypeSupport _type_support_turtlesim__msg__Color;

static const char *
register_type_turtlesim__msg__Color(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_turtlesim__msg__Color.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Color_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::msg::dds_::Color_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Color_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::msg::dds_::Color_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::msg::dds_::Color_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_turtlesim__msg__Color(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_turtlesim__msg__Color * ros_message = static_cast<const __ros_msg_type_turtlesim__msg__Color *>(untyped_ros_message);
  __dds_msg_type_turtlesim__msg__Color * dds_message = static_cast<__dds_msg_type_turtlesim__msg__Color *>(untyped_dds_message);
  // Field name: r
  {
    dds_message->r_ = ros_message->r;
  }

  // Field name: g
  {
    dds_message->g_ = ros_message->g;
  }

  // Field name: b
  {
    dds_message->b_ = ros_message->b;
  }

  return 0;
}

static const char *
publish_turtlesim__msg__Color(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_turtlesim__msg__Color dds_message;
  const char * err_msg = convert_ros_to_dds_turtlesim__msg__Color(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  turtlesim::msg::dds_::Color_DataWriter * data_writer =
    turtlesim::msg::dds_::Color_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Color_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::msg::dds_::Color_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::msg::dds_::Color_DataWriter.write: "
             "this turtlesim::msg::dds_::Color_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Color_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::msg::dds_::Color_DataWriter.write: "
             "this turtlesim::msg::dds_::Color_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::msg::dds_::Color_DataWriter.write: "
             "the handle has not been registered with this turtlesim::msg::dds_::Color_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::msg::dds_::Color_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::msg::dds_::Color_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_turtlesim__msg__Color(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_turtlesim__msg__Color * dds_message = static_cast<const __dds_msg_type_turtlesim__msg__Color *>(untyped_dds_message);
  __ros_msg_type_turtlesim__msg__Color * ros_message = static_cast<__ros_msg_type_turtlesim__msg__Color *>(untyped_ros_message);
  // Field name: r
  {
    ros_message->r = dds_message->r_;
  }

  // Field name: g
  {
    ros_message->g = dds_message->g_;
  }

  // Field name: b
  {
    ros_message->b = dds_message->b_;
  }

  return 0;
}

static const char *
take_turtlesim__msg__Color(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  turtlesim::msg::dds_::Color_DataReader * data_reader =
    turtlesim::msg::dds_::Color_DataReader::_narrow(topic_reader);

  turtlesim::msg::dds_::Color_Seq dds_messages;
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
      errs = "turtlesim::msg::dds_::Color_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::msg::dds_::Color_DataReader.take: "
        "this turtlesim::msg::dds_::Color_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::msg::dds_::Color_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::msg::dds_::Color_DataReader.take: "
        "this turtlesim::msg::dds_::Color_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::msg::dds_::Color_DataReader.take: "
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
      errs = "turtlesim::msg::dds_::Color_DataReader.take: unknown return code";
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
    errs = convert_dds_to_ros_turtlesim__msg__Color(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Color_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::msg::dds_::Color_DataReader.return_loan: "
             "this turtlesim::msg::dds_::Color_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Color_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::msg::dds_::Color_DataReader.return_loan: "
             "this turtlesim::msg::dds_::Color_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::msg::dds_::Color_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::msg::dds_::Color_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::msg::dds_::Color_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_turtlesim__msg__Color(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_turtlesim__msg__Color dds_message;
  const char * err_msg = convert_ros_to_dds_turtlesim__msg__Color(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_turtlesim__msg__Color);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Color_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::msg::dds_::Color_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::msg::dds_::Color_TypeSupport.serialize: "
             "this turtlesim::msg::dds_::Color_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Color_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::msg::dds_::Color_TypeSupport.serialize failed with "
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
      return "turtlesim::msg::dds_::Color_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_turtlesim__msg__Color(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_turtlesim__msg__Color);

  __dds_msg_type_turtlesim__msg__Color dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Color_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::msg::dds_::Color_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::msg::dds_::Color_TypeSupport.deserialize: "
             "this turtlesim::msg::dds_::Color_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Color_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::msg::dds_::Color_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_turtlesim__msg__Color(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Color__callbacks = {
  "turtlesim::msg",  // message_namespace
  "Color",  // message_name
  register_type_turtlesim__msg__Color,  // register_type
  publish_turtlesim__msg__Color,  // publish
  take_turtlesim__msg__Color,  // take
  serialize_turtlesim__msg__Color,  // serialize message
  deserialize_turtlesim__msg__Color,  // deserialize message
  convert_ros_to_dds_turtlesim__msg__Color,  // convert_ros_to_dds
  convert_dds_to_ros_turtlesim__msg__Color,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Color__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Color__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  turtlesim, msg,
  Color)()
{
  return &Color__type_support;
}

#if defined(__cplusplus)
}
#endif
