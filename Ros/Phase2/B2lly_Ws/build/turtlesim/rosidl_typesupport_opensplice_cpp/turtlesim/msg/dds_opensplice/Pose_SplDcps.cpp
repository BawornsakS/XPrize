#include "Pose_SplDcps.h"
#include "ccpp_Pose_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__turtlesim_msg_dds__Pose___copyIn(
    c_base base,
    const struct ::turtlesim::msg::dds_::Pose_ *from,
    struct _turtlesim_msg_dds__Pose_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->x_ = (c_float)from->x_;
    to->y_ = (c_float)from->y_;
    to->theta_ = (c_float)from->theta_;
    to->linear_velocity_ = (c_float)from->linear_velocity_;
    to->angular_velocity_ = (c_float)from->angular_velocity_;
    return result;
}

void
__turtlesim_msg_dds__Pose___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_msg_dds__Pose_ *from = (const struct _turtlesim_msg_dds__Pose_ *)_from;
    struct ::turtlesim::msg::dds_::Pose_ *to = (struct ::turtlesim::msg::dds_::Pose_ *)_to;
    to->x_ = (::DDS::Float)from->x_;
    to->y_ = (::DDS::Float)from->y_;
    to->theta_ = (::DDS::Float)from->theta_;
    to->linear_velocity_ = (::DDS::Float)from->linear_velocity_;
    to->angular_velocity_ = (::DDS::Float)from->angular_velocity_;
}

