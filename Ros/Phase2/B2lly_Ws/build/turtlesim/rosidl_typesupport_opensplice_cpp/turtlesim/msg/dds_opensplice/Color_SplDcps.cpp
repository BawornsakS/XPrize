#include "Color_SplDcps.h"
#include "ccpp_Color_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__turtlesim_msg_dds__Color___copyIn(
    c_base base,
    const struct ::turtlesim::msg::dds_::Color_ *from,
    struct _turtlesim_msg_dds__Color_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->r_ = (c_octet)from->r_;
    to->g_ = (c_octet)from->g_;
    to->b_ = (c_octet)from->b_;
    return result;
}

void
__turtlesim_msg_dds__Color___copyOut(
    const void *_from,
    void *_to)
{
    const struct _turtlesim_msg_dds__Color_ *from = (const struct _turtlesim_msg_dds__Color_ *)_from;
    struct ::turtlesim::msg::dds_::Color_ *to = (struct ::turtlesim::msg::dds_::Color_ *)_to;
    to->r_ = (::DDS::Octet)from->r_;
    to->g_ = (::DDS::Octet)from->g_;
    to->b_ = (::DDS::Octet)from->b_;
}

