#ifndef _H_9AFFB702485E477BE9C7B27F88F76D9B_Color_DCPS_H_
#define _H_9AFFB702485E477BE9C7B27F88F76D9B_Color_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Color_.h"


namespace turtlesim
{
    namespace msg
    {
        namespace dds_
        {
            class Color_TypeSupportInterface;

            typedef Color_TypeSupportInterface * Color_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Color_TypeSupportInterface> Color_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Color_TypeSupportInterface> Color_TypeSupportInterface_out;


            class Color_DataWriter;

            typedef Color_DataWriter * Color_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Color_DataWriter> Color_DataWriter_var;
            typedef DDS_DCPSInterface_out < Color_DataWriter> Color_DataWriter_out;


            class Color_DataReader;

            typedef Color_DataReader * Color_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Color_DataReader> Color_DataReader_var;
            typedef DDS_DCPSInterface_out < Color_DataReader> Color_DataReader_out;


            class Color_DataReaderView;

            typedef Color_DataReaderView * Color_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Color_DataReaderView> Color_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Color_DataReaderView> Color_DataReaderView_out;

            struct Color_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Color_, struct Color_Seq_uniq_> Color_Seq;
            typedef DDS_DCPSSequence_var < Color_Seq> Color_Seq_var;
            typedef DDS_DCPSSequence_out < Color_Seq> Color_Seq_out;

            class  Color_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Color_TypeSupportInterface_ptr _ptr_type;
                typedef Color_TypeSupportInterface_var _var_type;

                static Color_TypeSupportInterface_ptr _duplicate (Color_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Color_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Color_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Color_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Color_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Color_TypeSupportInterface () {};
                ~Color_TypeSupportInterface () {};
            private:
                Color_TypeSupportInterface (const Color_TypeSupportInterface &);
                Color_TypeSupportInterface & operator = (const Color_TypeSupportInterface &);
            };

            class  Color_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Color_DataWriter_ptr _ptr_type;
                typedef Color_DataWriter_var _var_type;

                static Color_DataWriter_ptr _duplicate (Color_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Color_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Color_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Color_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Color_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Color_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Color_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Color_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Color_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Color_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Color_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Color_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Color_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Color_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Color_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Color_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Color_& instance_data) = 0;

            protected:
                Color_DataWriter () {};
                ~Color_DataWriter () {};
            private:
                Color_DataWriter (const Color_DataWriter &);
                Color_DataWriter & operator = (const Color_DataWriter &);
            };

            class  Color_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Color_DataReader_ptr _ptr_type;
                typedef Color_DataReader_var _var_type;

                static Color_DataReader_ptr _duplicate (Color_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Color_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Color_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Color_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Color_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Color_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Color_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Color_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Color_& instance) = 0;

            protected:
                Color_DataReader () {};
                ~Color_DataReader () {};
            private:
                Color_DataReader (const Color_DataReader &);
                Color_DataReader & operator = (const Color_DataReader &);
            };

            class  Color_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Color_DataReaderView_ptr _ptr_type;
                typedef Color_DataReaderView_var _var_type;

                static Color_DataReaderView_ptr _duplicate (Color_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Color_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Color_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Color_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Color_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Color_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Color_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Color_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Color_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Color_& instance) = 0;

            protected:
                Color_DataReaderView () {};
                ~Color_DataReaderView () {};
            private:
                Color_DataReaderView (const Color_DataReaderView &);
                Color_DataReaderView & operator = (const Color_DataReaderView &);
            };
        }

    }

}

#endif
