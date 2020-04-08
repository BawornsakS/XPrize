#ifndef _H_F2A7B97A884AE380FE627FBA56AE6BF5_TeleportRelative__H_
#define _H_F2A7B97A884AE380FE627FBA56AE6BF5_TeleportRelative__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            struct  TeleportRelative_Request_
            {
                ::DDS::Float linear_;
                ::DDS::Float angular_;
            };

            typedef DDS_DCPSStruct_var<TeleportRelative_Request_> TeleportRelative_Request__var;
            typedef TeleportRelative_Request_& TeleportRelative_Request__out;

            struct  TeleportRelative_Response_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<TeleportRelative_Response_> TeleportRelative_Response__var;
            typedef TeleportRelative_Response_& TeleportRelative_Response__out;

            struct  Sample_TeleportRelative_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::TeleportRelative_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_TeleportRelative_Request_> Sample_TeleportRelative_Request__var;
            typedef Sample_TeleportRelative_Request_& Sample_TeleportRelative_Request__out;

            struct  Sample_TeleportRelative_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::TeleportRelative_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_TeleportRelative_Response_> Sample_TeleportRelative_Response__var;
            typedef Sample_TeleportRelative_Response_& Sample_TeleportRelative_Response__out;

        }

    }

}

#endif /* _H_F2A7B97A884AE380FE627FBA56AE6BF5_TeleportRelative__H_ */
