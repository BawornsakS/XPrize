#ifndef _H_60F430904043E0593BCC9066655A0508_Pose_DCPS_H_
#define _H_60F430904043E0593BCC9066655A0508_Pose_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Pose_.h"


namespace turtlesim
{
    namespace msg
    {
        namespace dds_
        {
            class Pose_TypeSupportInterface;

            typedef Pose_TypeSupportInterface * Pose_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Pose_TypeSupportInterface> Pose_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Pose_TypeSupportInterface> Pose_TypeSupportInterface_out;


            class Pose_DataWriter;

            typedef Pose_DataWriter * Pose_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Pose_DataWriter> Pose_DataWriter_var;
            typedef DDS_DCPSInterface_out < Pose_DataWriter> Pose_DataWriter_out;


            class Pose_DataReader;

            typedef Pose_DataReader * Pose_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Pose_DataReader> Pose_DataReader_var;
            typedef DDS_DCPSInterface_out < Pose_DataReader> Pose_DataReader_out;


            class Pose_DataReaderView;

            typedef Pose_DataReaderView * Pose_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Pose_DataReaderView> Pose_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Pose_DataReaderView> Pose_DataReaderView_out;

            struct Pose_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Pose_, struct Pose_Seq_uniq_> Pose_Seq;
            typedef DDS_DCPSSequence_var < Pose_Seq> Pose_Seq_var;
            typedef DDS_DCPSSequence_out < Pose_Seq> Pose_Seq_out;

            class  Pose_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Pose_TypeSupportInterface_ptr _ptr_type;
                typedef Pose_TypeSupportInterface_var _var_type;

                static Pose_TypeSupportInterface_ptr _duplicate (Pose_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Pose_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Pose_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Pose_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Pose_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Pose_TypeSupportInterface () {};
                ~Pose_TypeSupportInterface () {};
            private:
                Pose_TypeSupportInterface (const Pose_TypeSupportInterface &);
                Pose_TypeSupportInterface & operator = (const Pose_TypeSupportInterface &);
            };

            class  Pose_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Pose_DataWriter_ptr _ptr_type;
                typedef Pose_DataWriter_var _var_type;

                static Pose_DataWriter_ptr _duplicate (Pose_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Pose_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Pose_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Pose_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Pose_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Pose_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Pose_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Pose_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Pose_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Pose_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Pose_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Pose_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Pose_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Pose_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Pose_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Pose_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Pose_& instance_data) = 0;

            protected:
                Pose_DataWriter () {};
                ~Pose_DataWriter () {};
            private:
                Pose_DataWriter (const Pose_DataWriter &);
                Pose_DataWriter & operator = (const Pose_DataWriter &);
            };

            class  Pose_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Pose_DataReader_ptr _ptr_type;
                typedef Pose_DataReader_var _var_type;

                static Pose_DataReader_ptr _duplicate (Pose_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Pose_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Pose_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Pose_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Pose_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Pose_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Pose_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Pose_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Pose_& instance) = 0;

            protected:
                Pose_DataReader () {};
                ~Pose_DataReader () {};
            private:
                Pose_DataReader (const Pose_DataReader &);
                Pose_DataReader & operator = (const Pose_DataReader &);
            };

            class  Pose_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Pose_DataReaderView_ptr _ptr_type;
                typedef Pose_DataReaderView_var _var_type;

                static Pose_DataReaderView_ptr _duplicate (Pose_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Pose_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Pose_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Pose_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Pose_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Pose_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Pose_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Pose_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Pose_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Pose_& instance) = 0;

            protected:
                Pose_DataReaderView () {};
                ~Pose_DataReaderView () {};
            private:
                Pose_DataReaderView (const Pose_DataReaderView &);
                Pose_DataReaderView & operator = (const Pose_DataReaderView &);
            };
        }

    }

}

#endif
