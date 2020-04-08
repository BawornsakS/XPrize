#ifndef _H_FC015AC10B800DA479E374A2E79DDE16_RotateAbsolute__H_
#define _H_FC015AC10B800DA479E374A2E79DDE16_RotateAbsolute__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"


namespace turtlesim
{
    namespace action
    {
        namespace dds_
        {
            struct  RotateAbsolute_Goal_
            {
                ::DDS::Float theta_;
            };

            typedef DDS_DCPSStruct_var<RotateAbsolute_Goal_> RotateAbsolute_Goal__var;
            typedef RotateAbsolute_Goal_& RotateAbsolute_Goal__out;

            struct  RotateAbsolute_SendGoal_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::turtlesim::action::dds_::RotateAbsolute_Goal_ goal_;
            };

            typedef DDS_DCPSStruct_var<RotateAbsolute_SendGoal_Request_> RotateAbsolute_SendGoal_Request__var;
            typedef RotateAbsolute_SendGoal_Request_& RotateAbsolute_SendGoal_Request__out;

            struct  RotateAbsolute_SendGoal_Response_
            {
                ::DDS::Boolean accepted_;
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
            };

            typedef DDS_DCPSStruct_var<RotateAbsolute_SendGoal_Response_> RotateAbsolute_SendGoal_Response__var;
            typedef RotateAbsolute_SendGoal_Response_& RotateAbsolute_SendGoal_Response__out;

            struct  Sample_RotateAbsolute_SendGoal_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_RotateAbsolute_SendGoal_Request_> Sample_RotateAbsolute_SendGoal_Request__var;
            typedef Sample_RotateAbsolute_SendGoal_Request_& Sample_RotateAbsolute_SendGoal_Request__out;

            struct  Sample_RotateAbsolute_SendGoal_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_RotateAbsolute_SendGoal_Response_> Sample_RotateAbsolute_SendGoal_Response__var;
            typedef Sample_RotateAbsolute_SendGoal_Response_& Sample_RotateAbsolute_SendGoal_Response__out;

            struct  RotateAbsolute_Result_
            {
                ::DDS::Float delta_;
            };

            typedef DDS_DCPSStruct_var<RotateAbsolute_Result_> RotateAbsolute_Result__var;
            typedef RotateAbsolute_Result_& RotateAbsolute_Result__out;

            struct  RotateAbsolute_GetResult_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
            };

            typedef DDS_DCPSStruct_var<RotateAbsolute_GetResult_Request_> RotateAbsolute_GetResult_Request__var;
            typedef RotateAbsolute_GetResult_Request_& RotateAbsolute_GetResult_Request__out;

            struct  RotateAbsolute_GetResult_Response_
            {
                ::DDS::Octet status_;
                ::turtlesim::action::dds_::RotateAbsolute_Result_ result_;
            };

            typedef DDS_DCPSStruct_var<RotateAbsolute_GetResult_Response_> RotateAbsolute_GetResult_Response__var;
            typedef RotateAbsolute_GetResult_Response_& RotateAbsolute_GetResult_Response__out;

            struct  Sample_RotateAbsolute_GetResult_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::action::dds_::RotateAbsolute_GetResult_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_RotateAbsolute_GetResult_Request_> Sample_RotateAbsolute_GetResult_Request__var;
            typedef Sample_RotateAbsolute_GetResult_Request_& Sample_RotateAbsolute_GetResult_Request__out;

            struct  Sample_RotateAbsolute_GetResult_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::action::dds_::RotateAbsolute_GetResult_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_RotateAbsolute_GetResult_Response_> Sample_RotateAbsolute_GetResult_Response__var;
            typedef Sample_RotateAbsolute_GetResult_Response_& Sample_RotateAbsolute_GetResult_Response__out;

            struct  RotateAbsolute_Feedback_
            {
                ::DDS::Float remaining_;
            };

            typedef DDS_DCPSStruct_var<RotateAbsolute_Feedback_> RotateAbsolute_Feedback__var;
            typedef RotateAbsolute_Feedback_& RotateAbsolute_Feedback__out;

            struct  RotateAbsolute_FeedbackMessage_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::turtlesim::action::dds_::RotateAbsolute_Feedback_ feedback_;
            };

            typedef DDS_DCPSStruct_var<RotateAbsolute_FeedbackMessage_> RotateAbsolute_FeedbackMessage__var;
            typedef RotateAbsolute_FeedbackMessage_& RotateAbsolute_FeedbackMessage__out;

        }

    }

}

#endif /* _H_FC015AC10B800DA479E374A2E79DDE16_RotateAbsolute__H_ */
