#include "RotateAbsolute_SplDcps.h"
#include "ccpp_RotateAbsolute_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__turtlesim_action_dds__RotateAbsolute_Goal___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::RotateAbsolute_Goal_ *from,
    struct _turtlesim_action_dds__RotateAbsolute_Goal_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->theta_ = (c_float)from->theta_;
    return result;
}

v_copyin_result
__turtlesim_action_dds__RotateAbsolute_SendGoal_Request___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_ *from,
    struct _turtlesim_action_dds__RotateAbsolute_SendGoal_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __unique_identifier_msgs_msg_dds__UUID___copyIn(c_base, const ::unique_identifier_msgs::msg::dds_::UUID_ *, _unique_identifier_msgs_msg_dds__UUID_ *);
        result = __unique_identifier_msgs_msg_dds__UUID___copyIn(base, &from->goal_id_, &to->goal_id_);
    }
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_action_dds__RotateAbsolute_Goal___copyIn(c_base, const ::turtlesim::action::dds_::RotateAbsolute_Goal_ *, _turtlesim_action_dds__RotateAbsolute_Goal_ *);
        result = __turtlesim_action_dds__RotateAbsolute_Goal___copyIn(base, &from->goal_, &to->goal_);
    }
    return result;
}

v_copyin_result
__turtlesim_action_dds__RotateAbsolute_SendGoal_Response___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_ *from,
    struct _turtlesim_action_dds__RotateAbsolute_SendGoal_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->accepted_ = (c_bool)from->accepted_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __builtin_interfaces_msg_dds__Time___copyIn(c_base, const ::builtin_interfaces::msg::dds_::Time_ *, _builtin_interfaces_msg_dds__Time_ *);
        result = __builtin_interfaces_msg_dds__Time___copyIn(base, &from->stamp_, &to->stamp_);
    }
    return result;
}

v_copyin_result
__turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Request___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_ *from,
    struct _turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_action_dds__RotateAbsolute_SendGoal_Request___copyIn(c_base, const ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_ *, _turtlesim_action_dds__RotateAbsolute_SendGoal_Request_ *);
        result = __turtlesim_action_dds__RotateAbsolute_SendGoal_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

v_copyin_result
__turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Response___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_ *from,
    struct _turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_action_dds__RotateAbsolute_SendGoal_Response___copyIn(c_base, const ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_ *, _turtlesim_action_dds__RotateAbsolute_SendGoal_Response_ *);
        result = __turtlesim_action_dds__RotateAbsolute_SendGoal_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

v_copyin_result
__turtlesim_action_dds__RotateAbsolute_Result___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::RotateAbsolute_Result_ *from,
    struct _turtlesim_action_dds__RotateAbsolute_Result_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->delta_ = (c_float)from->delta_;
    return result;
}

v_copyin_result
__turtlesim_action_dds__RotateAbsolute_GetResult_Request___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::RotateAbsolute_GetResult_Request_ *from,
    struct _turtlesim_action_dds__RotateAbsolute_GetResult_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __unique_identifier_msgs_msg_dds__UUID___copyIn(c_base, const ::unique_identifier_msgs::msg::dds_::UUID_ *, _unique_identifier_msgs_msg_dds__UUID_ *);
        result = __unique_identifier_msgs_msg_dds__UUID___copyIn(base, &from->goal_id_, &to->goal_id_);
    }
    return result;
}

v_copyin_result
__turtlesim_action_dds__RotateAbsolute_GetResult_Response___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::RotateAbsolute_GetResult_Response_ *from,
    struct _turtlesim_action_dds__RotateAbsolute_GetResult_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->status_ = (c_octet)from->status_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_action_dds__RotateAbsolute_Result___copyIn(c_base, const ::turtlesim::action::dds_::RotateAbsolute_Result_ *, _turtlesim_action_dds__RotateAbsolute_Result_ *);
        result = __turtlesim_action_dds__RotateAbsolute_Result___copyIn(base, &from->result_, &to->result_);
    }
    return result;
}

v_copyin_result
__turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Request___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_ *from,
    struct _turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_action_dds__RotateAbsolute_GetResult_Request___copyIn(c_base, const ::turtlesim::action::dds_::RotateAbsolute_GetResult_Request_ *, _turtlesim_action_dds__RotateAbsolute_GetResult_Request_ *);
        result = __turtlesim_action_dds__RotateAbsolute_GetResult_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

v_copyin_result
__turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Response___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_ *from,
    struct _turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_action_dds__RotateAbsolute_GetResult_Response___copyIn(c_base, const ::turtlesim::action::dds_::RotateAbsolute_GetResult_Response_ *, _turtlesim_action_dds__RotateAbsolute_GetResult_Response_ *);
        result = __turtlesim_action_dds__RotateAbsolute_GetResult_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

v_copyin_result
__turtlesim_action_dds__RotateAbsolute_Feedback___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::RotateAbsolute_Feedback_ *from,
    struct _turtlesim_action_dds__RotateAbsolute_Feedback_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->remaining_ = (c_float)from->remaining_;
    return result;
}

v_copyin_result
__turtlesim_action_dds__RotateAbsolute_FeedbackMessage___copyIn(
    c_base base,
    const struct ::turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_ *from,
    struct _turtlesim_action_dds__RotateAbsolute_FeedbackMessage_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __unique_identifier_msgs_msg_dds__UUID___copyIn(c_base, const ::unique_identifier_msgs::msg::dds_::UUID_ *, _unique_identifier_msgs_msg_dds__UUID_ *);
        result = __unique_identifier_msgs_msg_dds__UUID___copyIn(base, &from->goal_id_, &to->goal_id_);
    }
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __turtlesim_action_dds__RotateAbsolute_Feedback___copyIn(c_base, const ::turtlesim::action::dds_::RotateAbsolute_Feedback_ *, _turtlesim_action_dds__RotateAbsolute_Feedback_ *);
        result = __turtlesim_action_dds__RotateAbsolute_Feedback___copyIn(base, &from->feedback_, &to->feedback_);
    }
    return result;
}

void
__turtlesim_action_dds__RotateAbsolute_Goal___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__RotateAbsolute_Goal_ *from = (const struct _turtlesim_action_dds__RotateAbsolute_Goal_ *)_from;
    struct ::turtlesim::action::dds_::RotateAbsolute_Goal_ *to = (struct ::turtlesim::action::dds_::RotateAbsolute_Goal_ *)_to;
    to->theta_ = (::DDS::Float)from->theta_;
}

void
__turtlesim_action_dds__RotateAbsolute_SendGoal_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__RotateAbsolute_SendGoal_Request_ *from = (const struct _turtlesim_action_dds__RotateAbsolute_SendGoal_Request_ *)_from;
    struct ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_ *to = (struct ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_ *)_to;
    {
        extern void __unique_identifier_msgs_msg_dds__UUID___copyOut(const void *, void *);
        __unique_identifier_msgs_msg_dds__UUID___copyOut((const void *)&from->goal_id_, (void *)&to->goal_id_);
    }
    {
        extern void __turtlesim_action_dds__RotateAbsolute_Goal___copyOut(const void *, void *);
        __turtlesim_action_dds__RotateAbsolute_Goal___copyOut((const void *)&from->goal_, (void *)&to->goal_);
    }
}

void
__turtlesim_action_dds__RotateAbsolute_SendGoal_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__RotateAbsolute_SendGoal_Response_ *from = (const struct _turtlesim_action_dds__RotateAbsolute_SendGoal_Response_ *)_from;
    struct ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_ *to = (struct ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_ *)_to;
    to->accepted_ = (::DDS::Boolean)(from->accepted_ != 0);
    {
        extern void __builtin_interfaces_msg_dds__Time___copyOut(const void *, void *);
        __builtin_interfaces_msg_dds__Time___copyOut((const void *)&from->stamp_, (void *)&to->stamp_);
    }
}

void
__turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Request_ *from = (const struct _turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Request_ *)_from;
    struct ::turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_ *to = (struct ::turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __turtlesim_action_dds__RotateAbsolute_SendGoal_Request___copyOut(const void *, void *);
        __turtlesim_action_dds__RotateAbsolute_SendGoal_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

void
__turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Response_ *from = (const struct _turtlesim_action_dds__Sample_RotateAbsolute_SendGoal_Response_ *)_from;
    struct ::turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_ *to = (struct ::turtlesim::action::dds_::Sample_RotateAbsolute_SendGoal_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __turtlesim_action_dds__RotateAbsolute_SendGoal_Response___copyOut(const void *, void *);
        __turtlesim_action_dds__RotateAbsolute_SendGoal_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

void
__turtlesim_action_dds__RotateAbsolute_Result___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__RotateAbsolute_Result_ *from = (const struct _turtlesim_action_dds__RotateAbsolute_Result_ *)_from;
    struct ::turtlesim::action::dds_::RotateAbsolute_Result_ *to = (struct ::turtlesim::action::dds_::RotateAbsolute_Result_ *)_to;
    to->delta_ = (::DDS::Float)from->delta_;
}

void
__turtlesim_action_dds__RotateAbsolute_GetResult_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__RotateAbsolute_GetResult_Request_ *from = (const struct _turtlesim_action_dds__RotateAbsolute_GetResult_Request_ *)_from;
    struct ::turtlesim::action::dds_::RotateAbsolute_GetResult_Request_ *to = (struct ::turtlesim::action::dds_::RotateAbsolute_GetResult_Request_ *)_to;
    {
        extern void __unique_identifier_msgs_msg_dds__UUID___copyOut(const void *, void *);
        __unique_identifier_msgs_msg_dds__UUID___copyOut((const void *)&from->goal_id_, (void *)&to->goal_id_);
    }
}

void
__turtlesim_action_dds__RotateAbsolute_GetResult_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__RotateAbsolute_GetResult_Response_ *from = (const struct _turtlesim_action_dds__RotateAbsolute_GetResult_Response_ *)_from;
    struct ::turtlesim::action::dds_::RotateAbsolute_GetResult_Response_ *to = (struct ::turtlesim::action::dds_::RotateAbsolute_GetResult_Response_ *)_to;
    to->status_ = (::DDS::Octet)from->status_;
    {
        extern void __turtlesim_action_dds__RotateAbsolute_Result___copyOut(const void *, void *);
        __turtlesim_action_dds__RotateAbsolute_Result___copyOut((const void *)&from->result_, (void *)&to->result_);
    }
}

void
__turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Request_ *from = (const struct _turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Request_ *)_from;
    struct ::turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_ *to = (struct ::turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __turtlesim_action_dds__RotateAbsolute_GetResult_Request___copyOut(const void *, void *);
        __turtlesim_action_dds__RotateAbsolute_GetResult_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

void
__turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Response_ *from = (const struct _turtlesim_action_dds__Sample_RotateAbsolute_GetResult_Response_ *)_from;
    struct ::turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_ *to = (struct ::turtlesim::action::dds_::Sample_RotateAbsolute_GetResult_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __turtlesim_action_dds__RotateAbsolute_GetResult_Response___copyOut(const void *, void *);
        __turtlesim_action_dds__RotateAbsolute_GetResult_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

void
__turtlesim_action_dds__RotateAbsolute_Feedback___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__RotateAbsolute_Feedback_ *from = (const struct _turtlesim_action_dds__RotateAbsolute_Feedback_ *)_from;
    struct ::turtlesim::action::dds_::RotateAbsolute_Feedback_ *to = (struct ::turtlesim::action::dds_::RotateAbsolute_Feedback_ *)_to;
    to->remaining_ = (::DDS::Float)from->remaining_;
}

void
__turtlesim_action_dds__RotateAbsolute_FeedbackMessage___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_action_dds__RotateAbsolute_FeedbackMessage_ *from = (const struct _turtlesim_action_dds__RotateAbsolute_FeedbackMessage_ *)_from;
    struct ::turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_ *to = (struct ::turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_ *)_to;
    {
        extern void __unique_identifier_msgs_msg_dds__UUID___copyOut(const void *, void *);
        __unique_identifier_msgs_msg_dds__UUID___copyOut((const void *)&from->goal_id_, (void *)&to->goal_id_);
    }
    {
        extern void __turtlesim_action_dds__RotateAbsolute_Feedback___copyOut(const void *, void *);
        __turtlesim_action_dds__RotateAbsolute_Feedback___copyOut((const void *)&from->feedback_, (void *)&to->feedback_);
    }
}

