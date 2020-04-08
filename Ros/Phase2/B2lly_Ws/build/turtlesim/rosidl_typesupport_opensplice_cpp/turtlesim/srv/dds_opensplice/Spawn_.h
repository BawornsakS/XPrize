#ifndef _H_4C89848404780383BBEE83F0DFC9AD13_Spawn__H_
#define _H_4C89848404780383BBEE83F0DFC9AD13_Spawn__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            struct  Spawn_Request_
            {
                ::DDS::Float x_;
                ::DDS::Float y_;
                ::DDS::Float theta_;
                ::DDS::String_mgr name_;
            };

            typedef DDS_DCPSStruct_var<Spawn_Request_> Spawn_Request__var;
            typedef DDS_DCPSStruct_out < Spawn_Request_> Spawn_Request__out;

            struct  Spawn_Response_
            {
                ::DDS::String_mgr name_;
            };

            typedef DDS_DCPSStruct_var<Spawn_Response_> Spawn_Response__var;
            typedef DDS_DCPSStruct_out < Spawn_Response_> Spawn_Response__out;

            struct  Sample_Spawn_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::Spawn_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_Spawn_Request_> Sample_Spawn_Request__var;
            typedef DDS_DCPSStruct_out < Sample_Spawn_Request_> Sample_Spawn_Request__out;

            struct  Sample_Spawn_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::Spawn_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_Spawn_Response_> Sample_Spawn_Response__var;
            typedef DDS_DCPSStruct_out < Sample_Spawn_Response_> Sample_Spawn_Response__out;

        }

    }

}

#endif /* _H_4C89848404780383BBEE83F0DFC9AD13_Spawn__H_ */
