#include "TeleportAbsolute_SplDcps.h"
#include "ccpp_TeleportAbsolute_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__turtlesim_srv_dds__TeleportAbsolute_Request___copyIn(
    c_base base,
    const struct ::turtlesim::srv::dds_::TeleportAbsolute_Request_ *from,
    struct _turtlesim_srv_dds__TeleportAbsolute_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->x_ = (c_float)from->x_;
    to->y_ = (c_float)from->y_;
    to->theta_ = (c_float)from->theta_;
    return result;
}

v_copyin_result
__turtlesim_srv_dds__TeleportAbsolute_Response___copyIn(
    c_base base,
    const struct ::turtlesim::srv::dds_::TeleportAbsolute_Response_ *from,
    struct _turtlesim_srv_dds__TeleportAbsolute_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->structure_needs_at_least_one_member_ = (c_octet)from->structure_needs_at_least_one_member_;
    return result;
}

v_copyin_result
__turtlesim_srv_dds__Sample_TeleportAbsolute_Request___copyIn(
    c_base base,
    const struct ::turtlesim::srv::dds_::Sample_TeleportAbsolute_Request_ *from,
    struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_srv_dds__TeleportAbsolute_Request___copyIn(c_base, const ::turtlesim::srv::dds_::TeleportAbsolute_Request_ *, _turtlesim_srv_dds__TeleportAbsolute_Request_ *);
        result = __turtlesim_srv_dds__TeleportAbsolute_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

v_copyin_result
__turtlesim_srv_dds__Sample_TeleportAbsolute_Response___copyIn(
    c_base base,
    const struct ::turtlesim::srv::dds_::Sample_TeleportAbsolute_Response_ *from,
    struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_srv_dds__TeleportAbsolute_Response___copyIn(c_base, const ::turtlesim::srv::dds_::TeleportAbsolute_Response_ *, _turtlesim_srv_dds__TeleportAbsolute_Response_ *);
        result = __turtlesim_srv_dds__TeleportAbsolute_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

void
__turtlesim_srv_dds__TeleportAbsolute_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_srv_dds__TeleportAbsolute_Request_ *from = (const struct _turtlesim_srv_dds__TeleportAbsolute_Request_ *)_from;
    struct ::turtlesim::srv::dds_::TeleportAbsolute_Request_ *to = (struct ::turtlesim::srv::dds_::TeleportAbsolute_Request_ *)_to;
    to->x_ = (::DDS::Float)from->x_;
    to->y_ = (::DDS::Float)from->y_;
    to->theta_ = (::DDS::Float)from->theta_;
}

void
__turtlesim_srv_dds__TeleportAbsolute_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_srv_dds__TeleportAbsolute_Response_ *from = (const struct _turtlesim_srv_dds__TeleportAbsolute_Response_ *)_from;
    struct ::turtlesim::srv::dds_::TeleportAbsolute_Response_ *to = (struct ::turtlesim::srv::dds_::TeleportAbsolute_Response_ *)_to;
    to->structure_needs_at_least_one_member_ = (::DDS::Octet)from->structure_needs_at_least_one_member_;
}

void
__turtlesim_srv_dds__Sample_TeleportAbsolute_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Request_ *from = (const struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Request_ *)_from;
    struct ::turtlesim::srv::dds_::Sample_TeleportAbsolute_Request_ *to = (struct ::turtlesim::srv::dds_::Sample_TeleportAbsolute_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __turtlesim_srv_dds__TeleportAbsolute_Request___copyOut(const void *, void *);
        __turtlesim_srv_dds__TeleportAbsolute_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

void
__turtlesim_srv_dds__Sample_TeleportAbsolute_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Response_ *from = (const struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Response_ *)_from;
    struct ::turtlesim::srv::dds_::Sample_TeleportAbsolute_Response_ *to = (struct ::turtlesim::srv::dds_::Sample_TeleportAbsolute_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __turtlesim_srv_dds__TeleportAbsolute_Response___copyOut(const void *, void *);
        __turtlesim_srv_dds__TeleportAbsolute_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

