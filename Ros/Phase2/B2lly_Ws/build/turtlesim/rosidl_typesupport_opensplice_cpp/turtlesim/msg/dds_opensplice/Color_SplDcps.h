#ifndef H_9AFFB702485E477BE9C7B27F88F76D9B_Color_SPLTYPES_H
#define H_9AFFB702485E477BE9C7B27F88F76D9B_Color_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Color_.h"


extern c_metaObject __Color__turtlesim__load (c_base base);

extern c_metaObject __Color__turtlesim_msg__load (c_base base);

extern c_metaObject __Color__turtlesim_msg_dds___load (c_base base);

extern const char *turtlesim_msg_dds__Color__metaDescriptor[];
extern const int turtlesim_msg_dds__Color__metaDescriptorArrLength;
extern const int turtlesim_msg_dds__Color__metaDescriptorLength;
extern c_metaObject __turtlesim_msg_dds__Color___load (c_base base);
struct _turtlesim_msg_dds__Color_ ;
extern  v_copyin_result __turtlesim_msg_dds__Color___copyIn(c_base base, const struct turtlesim::msg::dds_::Color_ *from, struct _turtlesim_msg_dds__Color_ *to);
extern  void __turtlesim_msg_dds__Color___copyOut(const void *_from, void *_to);
struct _turtlesim_msg_dds__Color_ {
    c_octet r_;
    c_octet g_;
    c_octet b_;
};

#undef OS_API
#endif
