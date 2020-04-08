#ifndef _H_B8836DDC5BD29BEC5B987FB4314031FA_Kill__H_
#define _H_B8836DDC5BD29BEC5B987FB4314031FA_Kill__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            struct  Kill_Request_
            {
                ::DDS::String_mgr name_;
            };

            typedef DDS_DCPSStruct_var<Kill_Request_> Kill_Request__var;
            typedef DDS_DCPSStruct_out < Kill_Request_> Kill_Request__out;

            struct  Kill_Response_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<Kill_Response_> Kill_Response__var;
            typedef Kill_Response_& Kill_Response__out;

            struct  Sample_Kill_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::Kill_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_Kill_Request_> Sample_Kill_Request__var;
            typedef DDS_DCPSStruct_out < Sample_Kill_Request_> Sample_Kill_Request__out;

            struct  Sample_Kill_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::Kill_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_Kill_Response_> Sample_Kill_Response__var;
            typedef Sample_Kill_Response_& Sample_Kill_Response__out;

        }

    }

}

#endif /* _H_B8836DDC5BD29BEC5B987FB4314031FA_Kill__H_ */
