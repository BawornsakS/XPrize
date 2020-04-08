#ifndef H_60F430904043E0593BCC9066655A0508_Pose_SPLTYPES_H
#define H_60F430904043E0593BCC9066655A0508_Pose_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Pose_.h"


extern c_metaObject __Pose__turtlesim__load (c_base base);

extern c_metaObject __Pose__turtlesim_msg__load (c_base base);

extern c_metaObject __Pose__turtlesim_msg_dds___load (c_base base);

extern const char *turtlesim_msg_dds__Pose__metaDescriptor[];
extern const int turtlesim_msg_dds__Pose__metaDescriptorArrLength;
extern const int turtlesim_msg_dds__Pose__metaDescriptorLength;
extern c_metaObject __turtlesim_msg_dds__Pose___load (c_base base);
struct _turtlesim_msg_dds__Pose_ ;
extern  v_copyin_result __turtlesim_msg_dds__Pose___copyIn(c_base base, const struct turtlesim::msg::dds_::Pose_ *from, struct _turtlesim_msg_dds__Pose_ *to);
extern  void __turtlesim_msg_dds__Pose___copyOut(const void *_from, void *_to);
struct _turtlesim_msg_dds__Pose_ {
    c_float x_;
    c_float y_;
    c_float theta_;
    c_float linear_velocity_;
    c_float angular_velocity_;
};

#undef OS_API
#endif
