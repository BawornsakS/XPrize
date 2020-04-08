#ifndef _H_9AFFB702485E477BE9C7B27F88F76D9B_Color__H_
#define _H_9AFFB702485E477BE9C7B27F88F76D9B_Color__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace turtlesim
{
    namespace msg
    {
        namespace dds_
        {
            struct  Color_
            {
                ::DDS::Octet r_;
                ::DDS::Octet g_;
                ::DDS::Octet b_;
            };

            typedef DDS_DCPSStruct_var<Color_> Color__var;
            typedef Color_& Color__out;

        }

    }

}

#endif /* _H_9AFFB702485E477BE9C7B27F88F76D9B_Color__H_ */
