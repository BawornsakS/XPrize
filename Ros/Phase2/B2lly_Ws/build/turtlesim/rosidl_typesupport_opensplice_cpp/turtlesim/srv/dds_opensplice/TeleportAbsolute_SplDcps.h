#ifndef H_9F0B2C49D9A6DCE0C92687E5452476D3_TeleportAbsolute_SPLTYPES_H
#define H_9F0B2C49D9A6DCE0C92687E5452476D3_TeleportAbsolute_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_TeleportAbsolute_.h"


extern c_metaObject __TeleportAbsolute__turtlesim__load (c_base base);

extern c_metaObject __TeleportAbsolute__turtlesim_srv__load (c_base base);

extern c_metaObject __TeleportAbsolute__turtlesim_srv_dds___load (c_base base);

extern const char *turtlesim_srv_dds__TeleportAbsolute_Request__metaDescriptor[];
extern const int turtlesim_srv_dds__TeleportAbsolute_Request__metaDescriptorArrLength;
extern const int turtlesim_srv_dds__TeleportAbsolute_Request__metaDescriptorLength;
extern c_metaObject __turtlesim_srv_dds__TeleportAbsolute_Request___load (c_base base);
struct _turtlesim_srv_dds__TeleportAbsolute_Request_ ;
extern  v_copyin_result __turtlesim_srv_dds__TeleportAbsolute_Request___copyIn(c_base base, const struct turtlesim::srv::dds_::TeleportAbsolute_Request_ *from, struct _turtlesim_srv_dds__TeleportAbsolute_Request_ *to);
extern  void __turtlesim_srv_dds__TeleportAbsolute_Request___copyOut(const void *_from, void *_to);
struct _turtlesim_srv_dds__TeleportAbsolute_Request_ {
    c_float x_;
    c_float y_;
    c_float theta_;
};

extern const char *turtlesim_srv_dds__TeleportAbsolute_Response__metaDescriptor[];
extern const int turtlesim_srv_dds__TeleportAbsolute_Response__metaDescriptorArrLength;
extern const int turtlesim_srv_dds__TeleportAbsolute_Response__metaDescriptorLength;
extern c_metaObject __turtlesim_srv_dds__TeleportAbsolute_Response___load (c_base base);
struct _turtlesim_srv_dds__TeleportAbsolute_Response_ ;
extern  v_copyin_result __turtlesim_srv_dds__TeleportAbsolute_Response___copyIn(c_base base, const struct turtlesim::srv::dds_::TeleportAbsolute_Response_ *from, struct _turtlesim_srv_dds__TeleportAbsolute_Response_ *to);
extern  void __turtlesim_srv_dds__TeleportAbsolute_Response___copyOut(const void *_from, void *_to);
struct _turtlesim_srv_dds__TeleportAbsolute_Response_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *turtlesim_srv_dds__Sample_TeleportAbsolute_Request__metaDescriptor[];
extern const int turtlesim_srv_dds__Sample_TeleportAbsolute_Request__metaDescriptorArrLength;
extern const int turtlesim_srv_dds__Sample_TeleportAbsolute_Request__metaDescriptorLength;
extern c_metaObject __turtlesim_srv_dds__Sample_TeleportAbsolute_Request___load (c_base base);
struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Request_ ;
extern  v_copyin_result __turtlesim_srv_dds__Sample_TeleportAbsolute_Request___copyIn(c_base base, const struct turtlesim::srv::dds_::Sample_TeleportAbsolute_Request_ *from, struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Request_ *to);
extern  void __turtlesim_srv_dds__Sample_TeleportAbsolute_Request___copyOut(const void *_from, void *_to);
struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _turtlesim_srv_dds__TeleportAbsolute_Request_ request_;
};

extern const char *turtlesim_srv_dds__Sample_TeleportAbsolute_Response__metaDescriptor[];
extern const int turtlesim_srv_dds__Sample_TeleportAbsolute_Response__metaDescriptorArrLength;
extern const int turtlesim_srv_dds__Sample_TeleportAbsolute_Response__metaDescriptorLength;
extern c_metaObject __turtlesim_srv_dds__Sample_TeleportAbsolute_Response___load (c_base base);
struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Response_ ;
extern  v_copyin_result __turtlesim_srv_dds__Sample_TeleportAbsolute_Response___copyIn(c_base base, const struct turtlesim::srv::dds_::Sample_TeleportAbsolute_Response_ *from, struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Response_ *to);
extern  void __turtlesim_srv_dds__Sample_TeleportAbsolute_Response___copyOut(const void *_from, void *_to);
struct _turtlesim_srv_dds__Sample_TeleportAbsolute_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _turtlesim_srv_dds__TeleportAbsolute_Response_ response_;
};

#undef OS_API
#endif
