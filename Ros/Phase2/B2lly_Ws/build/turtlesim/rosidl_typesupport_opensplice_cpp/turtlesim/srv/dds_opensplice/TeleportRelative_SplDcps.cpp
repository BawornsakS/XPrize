#include "TeleportRelative_SplDcps.h"
#include "ccpp_TeleportRelative_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__turtlesim_srv_dds__TeleportRelative_Request___copyIn(
    c_base base,
    const struct ::turtlesim::srv::dds_::TeleportRelative_Request_ *from,
    struct _turtlesim_srv_dds__TeleportRelative_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->linear_ = (c_float)from->linear_;
    to->angular_ = (c_float)from->angular_;
    return result;
}

v_copyin_result
__turtlesim_srv_dds__TeleportRelative_Response___copyIn(
    c_base base,
    const struct ::turtlesim::srv::dds_::TeleportRelative_Response_ *from,
    struct _turtlesim_srv_dds__TeleportRelative_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->structure_needs_at_least_one_member_ = (c_octet)from->structure_needs_at_least_one_member_;
    return result;
}

v_copyin_result
__turtlesim_srv_dds__Sample_TeleportRelative_Request___copyIn(
    c_base base,
    const struct ::turtlesim::srv::dds_::Sample_TeleportRelative_Request_ *from,
    struct _turtlesim_srv_dds__Sample_TeleportRelative_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_srv_dds__TeleportRelative_Request___copyIn(c_base, const ::turtlesim::srv::dds_::TeleportRelative_Request_ *, _turtlesim_srv_dds__TeleportRelative_Request_ *);
        result = __turtlesim_srv_dds__TeleportRelative_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

v_copyin_result
__turtlesim_srv_dds__Sample_TeleportRelative_Response___copyIn(
    c_base base,
    const struct ::turtlesim::srv::dds_::Sample_TeleportRelative_Response_ *from,
    struct _turtlesim_srv_dds__Sample_TeleportRelative_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_srv_dds__TeleportRelative_Response___copyIn(c_base, const ::turtlesim::srv::dds_::TeleportRelative_Response_ *, _turtlesim_srv_dds__TeleportRelative_Response_ *);
        result = __turtlesim_srv_dds__TeleportRelative_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

void
__turtlesim_srv_dds__TeleportRelative_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_srv_dds__TeleportRelative_Request_ *from = (const struct _turtlesim_srv_dds__TeleportRelative_Request_ *)_from;
    struct ::turtlesim::srv::dds_::TeleportRelative_Request_ *to = (struct ::turtlesim::srv::dds_::TeleportRelative_Request_ *)_to;
    to->linear_ = (::DDS::Float)from->linear_;
    to->angular_ = (::DDS::Float)from->angular_;
}

void
__turtlesim_srv_dds__TeleportRelative_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_srv_dds__TeleportRelative_Response_ *from = (const struct _turtlesim_srv_dds__TeleportRelative_Response_ *)_from;
    struct ::turtlesim::srv::dds_::TeleportRelative_Response_ *to = (struct ::turtlesim::srv::dds_::TeleportRelative_Response_ *)_to;
    to->structure_needs_at_least_one_member_ = (::DDS::Octet)from->structure_needs_at_least_one_member_;
}

void
__turtlesim_srv_dds__Sample_TeleportRelative_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_srv_dds__Sample_TeleportRelative_Request_ *from = (const struct _turtlesim_srv_dds__Sample_TeleportRelative_Request_ *)_from;
    struct ::turtlesim::srv::dds_::Sample_TeleportRelative_Request_ *to = (struct ::turtlesim::srv::dds_::Sample_TeleportRelative_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __turtlesim_srv_dds__TeleportRelative_Request___copyOut(const void *, void *);
        __turtlesim_srv_dds__TeleportRelative_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

void
__turtlesim_srv_dds__Sample_TeleportRelative_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_srv_dds__Sample_TeleportRelative_Response_ *from = (const struct _turtlesim_srv_dds__Sample_TeleportRelative_Response_ *)_from;
    struct ::turtlesim::srv::dds_::Sample_TeleportRelative_Response_ *to = (struct ::turtlesim::srv::dds_::Sample_TeleportRelative_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __turtlesim_srv_dds__TeleportRelative_Response___copyOut(const void *, void *);
        __turtlesim_srv_dds__TeleportRelative_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

