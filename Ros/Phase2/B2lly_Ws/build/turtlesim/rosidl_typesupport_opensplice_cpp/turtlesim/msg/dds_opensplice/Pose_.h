#ifndef _H_60F430904043E0593BCC9066655A0508_Pose__H_
#define _H_60F430904043E0593BCC9066655A0508_Pose__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace turtlesim
{
    namespace msg
    {
        namespace dds_
        {
            struct  Pose_
            {
                ::DDS::Float x_;
                ::DDS::Float y_;
                ::DDS::Float theta_;
                ::DDS::Float linear_velocity_;
                ::DDS::Float angular_velocity_;
            };

            typedef DDS_DCPSStruct_var<Pose_> Pose__var;
            typedef Pose_& Pose__out;

        }

    }

}

#endif /* _H_60F430904043E0593BCC9066655A0508_Pose__H_ */
