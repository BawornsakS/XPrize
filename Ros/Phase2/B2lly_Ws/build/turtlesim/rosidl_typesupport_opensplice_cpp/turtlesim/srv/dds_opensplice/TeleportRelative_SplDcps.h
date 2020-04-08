#ifndef H_F2A7B97A884AE380FE627FBA56AE6BF5_TeleportRelative_SPLTYPES_H
#define H_F2A7B97A884AE380FE627FBA56AE6BF5_TeleportRelative_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_TeleportRelative_.h"


extern c_metaObject __TeleportRelative__turtlesim__load (c_base base);

extern c_metaObject __TeleportRelative__turtlesim_srv__load (c_base base);

extern c_metaObject __TeleportRelative__turtlesim_srv_dds___load (c_base base);

extern const char *turtlesim_srv_dds__TeleportRelative_Request__metaDescriptor[];
extern const int turtlesim_srv_dds__TeleportRelative_Request__metaDescriptorArrLength;
extern const int turtlesim_srv_dds__TeleportRelative_Request__metaDescriptorLength;
extern c_metaObject __turtlesim_srv_dds__TeleportRelative_Request___load (c_base base);
struct _turtlesim_srv_dds__TeleportRelative_Request_ ;
extern  v_copyin_result __turtlesim_srv_dds__TeleportRelative_Request___copyIn(c_base base, const struct turtlesim::srv::dds_::TeleportRelative_Request_ *from, struct _turtlesim_srv_dds__TeleportRelative_Request_ *to);
extern  void __turtlesim_srv_dds__TeleportRelative_Request___copyOut(const void *_from, void *_to);
struct _turtlesim_srv_dds__TeleportRelative_Request_ {
    c_float linear_;
    c_float angular_;
};

extern const char *turtlesim_srv_dds__TeleportRelative_Response__metaDescriptor[];
extern const int turtlesim_srv_dds__TeleportRelative_Response__metaDescriptorArrLength;
extern const int turtlesim_srv_dds__TeleportRelative_Response__metaDescriptorLength;
extern c_metaObject __turtlesim_srv_dds__TeleportRelative_Response___load (c_base base);
struct _turtlesim_srv_dds__TeleportRelative_Response_ ;
extern  v_copyin_result __turtlesim_srv_dds__TeleportRelative_Response___copyIn(c_base base, const struct turtlesim::srv::dds_::TeleportRelative_Response_ *from, struct _turtlesim_srv_dds__TeleportRelative_Response_ *to);
extern  void __turtlesim_srv_dds__TeleportRelative_Response___copyOut(const void *_from, void *_to);
struct _turtlesim_srv_dds__TeleportRelative_Response_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *turtlesim_srv_dds__Sample_TeleportRelative_Request__metaDescriptor[];
extern const int turtlesim_srv_dds__Sample_TeleportRelative_Request__metaDescriptorArrLength;
extern const int turtlesim_srv_dds__Sample_TeleportRelative_Request__metaDescriptorLength;
extern c_metaObject __turtlesim_srv_dds__Sample_TeleportRelative_Request___load (c_base base);
struct _turtlesim_srv_dds__Sample_TeleportRelative_Request_ ;
extern  v_copyin_result __turtlesim_srv_dds__Sample_TeleportRelative_Request___copyIn(c_base base, const struct turtlesim::srv::dds_::Sample_TeleportRelative_Request_ *from, struct _turtlesim_srv_dds__Sample_TeleportRelative_Request_ *to);
extern  void __turtlesim_srv_dds__Sample_TeleportRelative_Request___copyOut(const void *_from, void *_to);
struct _turtlesim_srv_dds__Sample_TeleportRelative_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _turtlesim_srv_dds__TeleportRelative_Request_ request_;
};

extern const char *turtlesim_srv_dds__Sample_TeleportRelative_Response__metaDescriptor[];
extern const int turtlesim_srv_dds__Sample_TeleportRelative_Response__metaDescriptorArrLength;
extern const int turtlesim_srv_dds__Sample_TeleportRelative_Response__metaDescriptorLength;
extern c_metaObject __turtlesim_srv_dds__Sample_TeleportRelative_Response___load (c_base base);
struct _turtlesim_srv_dds__Sample_TeleportRelative_Response_ ;
extern  v_copyin_result __turtlesim_srv_dds__Sample_TeleportRelative_Response___copyIn(c_base base, const struct turtlesim::srv::dds_::Sample_TeleportRelative_Response_ *from, struct _turtlesim_srv_dds__Sample_TeleportRelative_Response_ *to);
extern  void __turtlesim_srv_dds__Sample_TeleportRelative_Response___copyOut(const void *_from, void *_to);
struct _turtlesim_srv_dds__Sample_TeleportRelative_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _turtlesim_srv_dds__TeleportRelative_Response_ response_;
};

#undef OS_API
#endif
