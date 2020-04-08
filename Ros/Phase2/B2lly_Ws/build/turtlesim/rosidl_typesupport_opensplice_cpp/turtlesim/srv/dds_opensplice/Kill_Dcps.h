#ifndef _H_B8836DDC5BD29BEC5B987FB4314031FA_Kill_DCPS_H_
#define _H_B8836DDC5BD29BEC5B987FB4314031FA_Kill_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Kill_.h"


namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            class Kill_Request_TypeSupportInterface;

            typedef Kill_Request_TypeSupportInterface * Kill_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Kill_Request_TypeSupportInterface> Kill_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Kill_Request_TypeSupportInterface> Kill_Request_TypeSupportInterface_out;


            class Kill_Request_DataWriter;

            typedef Kill_Request_DataWriter * Kill_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Kill_Request_DataWriter> Kill_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Kill_Request_DataWriter> Kill_Request_DataWriter_out;


            class Kill_Request_DataReader;

            typedef Kill_Request_DataReader * Kill_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Kill_Request_DataReader> Kill_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Kill_Request_DataReader> Kill_Request_DataReader_out;


            class Kill_Request_DataReaderView;

            typedef Kill_Request_DataReaderView * Kill_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Kill_Request_DataReaderView> Kill_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Kill_Request_DataReaderView> Kill_Request_DataReaderView_out;

            struct Kill_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Kill_Request_, struct Kill_Request_Seq_uniq_> Kill_Request_Seq;
            typedef DDS_DCPSSequence_var < Kill_Request_Seq> Kill_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Kill_Request_Seq> Kill_Request_Seq_out;

            class  Kill_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Kill_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Kill_Request_TypeSupportInterface_var _var_type;

                static Kill_Request_TypeSupportInterface_ptr _duplicate (Kill_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Kill_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Kill_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Kill_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Kill_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Kill_Request_TypeSupportInterface () {};
                ~Kill_Request_TypeSupportInterface () {};
            private:
                Kill_Request_TypeSupportInterface (const Kill_Request_TypeSupportInterface &);
                Kill_Request_TypeSupportInterface & operator = (const Kill_Request_TypeSupportInterface &);
            };

            class  Kill_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Kill_Request_DataWriter_ptr _ptr_type;
                typedef Kill_Request_DataWriter_var _var_type;

                static Kill_Request_DataWriter_ptr _duplicate (Kill_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Kill_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Kill_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Kill_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Kill_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Kill_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Kill_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Kill_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Kill_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Kill_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Kill_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Kill_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Kill_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Kill_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Kill_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Kill_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Kill_Request_& instance_data) = 0;

            protected:
                Kill_Request_DataWriter () {};
                ~Kill_Request_DataWriter () {};
            private:
                Kill_Request_DataWriter (const Kill_Request_DataWriter &);
                Kill_Request_DataWriter & operator = (const Kill_Request_DataWriter &);
            };

            class  Kill_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Kill_Request_DataReader_ptr _ptr_type;
                typedef Kill_Request_DataReader_var _var_type;

                static Kill_Request_DataReader_ptr _duplicate (Kill_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Kill_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Kill_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Kill_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Kill_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Kill_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Kill_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Kill_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Kill_Request_& instance) = 0;

            protected:
                Kill_Request_DataReader () {};
                ~Kill_Request_DataReader () {};
            private:
                Kill_Request_DataReader (const Kill_Request_DataReader &);
                Kill_Request_DataReader & operator = (const Kill_Request_DataReader &);
            };

            class  Kill_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Kill_Request_DataReaderView_ptr _ptr_type;
                typedef Kill_Request_DataReaderView_var _var_type;

                static Kill_Request_DataReaderView_ptr _duplicate (Kill_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Kill_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Kill_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Kill_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Kill_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Kill_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Kill_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Kill_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Kill_Request_& instance) = 0;

            protected:
                Kill_Request_DataReaderView () {};
                ~Kill_Request_DataReaderView () {};
            private:
                Kill_Request_DataReaderView (const Kill_Request_DataReaderView &);
                Kill_Request_DataReaderView & operator = (const Kill_Request_DataReaderView &);
            };
            class Kill_Response_TypeSupportInterface;

            typedef Kill_Response_TypeSupportInterface * Kill_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Kill_Response_TypeSupportInterface> Kill_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Kill_Response_TypeSupportInterface> Kill_Response_TypeSupportInterface_out;


            class Kill_Response_DataWriter;

            typedef Kill_Response_DataWriter * Kill_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Kill_Response_DataWriter> Kill_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Kill_Response_DataWriter> Kill_Response_DataWriter_out;


            class Kill_Response_DataReader;

            typedef Kill_Response_DataReader * Kill_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Kill_Response_DataReader> Kill_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Kill_Response_DataReader> Kill_Response_DataReader_out;


            class Kill_Response_DataReaderView;

            typedef Kill_Response_DataReaderView * Kill_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Kill_Response_DataReaderView> Kill_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Kill_Response_DataReaderView> Kill_Response_DataReaderView_out;

            struct Kill_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Kill_Response_, struct Kill_Response_Seq_uniq_> Kill_Response_Seq;
            typedef DDS_DCPSSequence_var < Kill_Response_Seq> Kill_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Kill_Response_Seq> Kill_Response_Seq_out;

            class  Kill_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Kill_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Kill_Response_TypeSupportInterface_var _var_type;

                static Kill_Response_TypeSupportInterface_ptr _duplicate (Kill_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Kill_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Kill_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Kill_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Kill_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Kill_Response_TypeSupportInterface () {};
                ~Kill_Response_TypeSupportInterface () {};
            private:
                Kill_Response_TypeSupportInterface (const Kill_Response_TypeSupportInterface &);
                Kill_Response_TypeSupportInterface & operator = (const Kill_Response_TypeSupportInterface &);
            };

            class  Kill_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Kill_Response_DataWriter_ptr _ptr_type;
                typedef Kill_Response_DataWriter_var _var_type;

                static Kill_Response_DataWriter_ptr _duplicate (Kill_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Kill_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Kill_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Kill_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Kill_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Kill_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Kill_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Kill_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Kill_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Kill_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Kill_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Kill_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Kill_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Kill_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Kill_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Kill_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Kill_Response_& instance_data) = 0;

            protected:
                Kill_Response_DataWriter () {};
                ~Kill_Response_DataWriter () {};
            private:
                Kill_Response_DataWriter (const Kill_Response_DataWriter &);
                Kill_Response_DataWriter & operator = (const Kill_Response_DataWriter &);
            };

            class  Kill_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Kill_Response_DataReader_ptr _ptr_type;
                typedef Kill_Response_DataReader_var _var_type;

                static Kill_Response_DataReader_ptr _duplicate (Kill_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Kill_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Kill_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Kill_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Kill_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Kill_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Kill_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Kill_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Kill_Response_& instance) = 0;

            protected:
                Kill_Response_DataReader () {};
                ~Kill_Response_DataReader () {};
            private:
                Kill_Response_DataReader (const Kill_Response_DataReader &);
                Kill_Response_DataReader & operator = (const Kill_Response_DataReader &);
            };

            class  Kill_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Kill_Response_DataReaderView_ptr _ptr_type;
                typedef Kill_Response_DataReaderView_var _var_type;

                static Kill_Response_DataReaderView_ptr _duplicate (Kill_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Kill_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Kill_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Kill_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Kill_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Kill_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Kill_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Kill_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Kill_Response_& instance) = 0;

            protected:
                Kill_Response_DataReaderView () {};
                ~Kill_Response_DataReaderView () {};
            private:
                Kill_Response_DataReaderView (const Kill_Response_DataReaderView &);
                Kill_Response_DataReaderView & operator = (const Kill_Response_DataReaderView &);
            };
            class Sample_Kill_Request_TypeSupportInterface;

            typedef Sample_Kill_Request_TypeSupportInterface * Sample_Kill_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Kill_Request_TypeSupportInterface> Sample_Kill_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Kill_Request_TypeSupportInterface> Sample_Kill_Request_TypeSupportInterface_out;


            class Sample_Kill_Request_DataWriter;

            typedef Sample_Kill_Request_DataWriter * Sample_Kill_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Kill_Request_DataWriter> Sample_Kill_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Kill_Request_DataWriter> Sample_Kill_Request_DataWriter_out;


            class Sample_Kill_Request_DataReader;

            typedef Sample_Kill_Request_DataReader * Sample_Kill_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Kill_Request_DataReader> Sample_Kill_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Kill_Request_DataReader> Sample_Kill_Request_DataReader_out;


            class Sample_Kill_Request_DataReaderView;

            typedef Sample_Kill_Request_DataReaderView * Sample_Kill_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Kill_Request_DataReaderView> Sample_Kill_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Kill_Request_DataReaderView> Sample_Kill_Request_DataReaderView_out;

            struct Sample_Kill_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_Kill_Request_, struct Sample_Kill_Request_Seq_uniq_> Sample_Kill_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_Kill_Request_Seq> Sample_Kill_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Kill_Request_Seq> Sample_Kill_Request_Seq_out;

            class  Sample_Kill_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Kill_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Kill_Request_TypeSupportInterface_var _var_type;

                static Sample_Kill_Request_TypeSupportInterface_ptr _duplicate (Sample_Kill_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Kill_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Kill_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Kill_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Kill_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Kill_Request_TypeSupportInterface () {};
                ~Sample_Kill_Request_TypeSupportInterface () {};
            private:
                Sample_Kill_Request_TypeSupportInterface (const Sample_Kill_Request_TypeSupportInterface &);
                Sample_Kill_Request_TypeSupportInterface & operator = (const Sample_Kill_Request_TypeSupportInterface &);
            };

            class  Sample_Kill_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Kill_Request_DataWriter_ptr _ptr_type;
                typedef Sample_Kill_Request_DataWriter_var _var_type;

                static Sample_Kill_Request_DataWriter_ptr _duplicate (Sample_Kill_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Kill_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Kill_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Kill_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Kill_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Kill_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Kill_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Kill_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Kill_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Kill_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Kill_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Kill_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Kill_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Kill_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Kill_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Kill_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Kill_Request_& instance_data) = 0;

            protected:
                Sample_Kill_Request_DataWriter () {};
                ~Sample_Kill_Request_DataWriter () {};
            private:
                Sample_Kill_Request_DataWriter (const Sample_Kill_Request_DataWriter &);
                Sample_Kill_Request_DataWriter & operator = (const Sample_Kill_Request_DataWriter &);
            };

            class  Sample_Kill_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Kill_Request_DataReader_ptr _ptr_type;
                typedef Sample_Kill_Request_DataReader_var _var_type;

                static Sample_Kill_Request_DataReader_ptr _duplicate (Sample_Kill_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Kill_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Kill_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Kill_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Kill_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Kill_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Kill_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Kill_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Kill_Request_& instance) = 0;

            protected:
                Sample_Kill_Request_DataReader () {};
                ~Sample_Kill_Request_DataReader () {};
            private:
                Sample_Kill_Request_DataReader (const Sample_Kill_Request_DataReader &);
                Sample_Kill_Request_DataReader & operator = (const Sample_Kill_Request_DataReader &);
            };

            class  Sample_Kill_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Kill_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_Kill_Request_DataReaderView_var _var_type;

                static Sample_Kill_Request_DataReaderView_ptr _duplicate (Sample_Kill_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Kill_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Kill_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Kill_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Kill_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Kill_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Kill_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Kill_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Kill_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Kill_Request_& instance) = 0;

            protected:
                Sample_Kill_Request_DataReaderView () {};
                ~Sample_Kill_Request_DataReaderView () {};
            private:
                Sample_Kill_Request_DataReaderView (const Sample_Kill_Request_DataReaderView &);
                Sample_Kill_Request_DataReaderView & operator = (const Sample_Kill_Request_DataReaderView &);
            };
            class Sample_Kill_Response_TypeSupportInterface;

            typedef Sample_Kill_Response_TypeSupportInterface * Sample_Kill_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Kill_Response_TypeSupportInterface> Sample_Kill_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Kill_Response_TypeSupportInterface> Sample_Kill_Response_TypeSupportInterface_out;


            class Sample_Kill_Response_DataWriter;

            typedef Sample_Kill_Response_DataWriter * Sample_Kill_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Kill_Response_DataWriter> Sample_Kill_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Kill_Response_DataWriter> Sample_Kill_Response_DataWriter_out;


            class Sample_Kill_Response_DataReader;

            typedef Sample_Kill_Response_DataReader * Sample_Kill_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Kill_Response_DataReader> Sample_Kill_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Kill_Response_DataReader> Sample_Kill_Response_DataReader_out;


            class Sample_Kill_Response_DataReaderView;

            typedef Sample_Kill_Response_DataReaderView * Sample_Kill_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Kill_Response_DataReaderView> Sample_Kill_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Kill_Response_DataReaderView> Sample_Kill_Response_DataReaderView_out;

            struct Sample_Kill_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Kill_Response_, struct Sample_Kill_Response_Seq_uniq_> Sample_Kill_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_Kill_Response_Seq> Sample_Kill_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Kill_Response_Seq> Sample_Kill_Response_Seq_out;

            class  Sample_Kill_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Kill_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Kill_Response_TypeSupportInterface_var _var_type;

                static Sample_Kill_Response_TypeSupportInterface_ptr _duplicate (Sample_Kill_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Kill_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Kill_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Kill_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Kill_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Kill_Response_TypeSupportInterface () {};
                ~Sample_Kill_Response_TypeSupportInterface () {};
            private:
                Sample_Kill_Response_TypeSupportInterface (const Sample_Kill_Response_TypeSupportInterface &);
                Sample_Kill_Response_TypeSupportInterface & operator = (const Sample_Kill_Response_TypeSupportInterface &);
            };

            class  Sample_Kill_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Kill_Response_DataWriter_ptr _ptr_type;
                typedef Sample_Kill_Response_DataWriter_var _var_type;

                static Sample_Kill_Response_DataWriter_ptr _duplicate (Sample_Kill_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Kill_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Kill_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Kill_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Kill_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Kill_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Kill_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Kill_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Kill_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Kill_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Kill_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Kill_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Kill_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Kill_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Kill_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Kill_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Kill_Response_& instance_data) = 0;

            protected:
                Sample_Kill_Response_DataWriter () {};
                ~Sample_Kill_Response_DataWriter () {};
            private:
                Sample_Kill_Response_DataWriter (const Sample_Kill_Response_DataWriter &);
                Sample_Kill_Response_DataWriter & operator = (const Sample_Kill_Response_DataWriter &);
            };

            class  Sample_Kill_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Kill_Response_DataReader_ptr _ptr_type;
                typedef Sample_Kill_Response_DataReader_var _var_type;

                static Sample_Kill_Response_DataReader_ptr _duplicate (Sample_Kill_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Kill_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Kill_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Kill_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Kill_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Kill_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Kill_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Kill_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Kill_Response_& instance) = 0;

            protected:
                Sample_Kill_Response_DataReader () {};
                ~Sample_Kill_Response_DataReader () {};
            private:
                Sample_Kill_Response_DataReader (const Sample_Kill_Response_DataReader &);
                Sample_Kill_Response_DataReader & operator = (const Sample_Kill_Response_DataReader &);
            };

            class  Sample_Kill_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Kill_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_Kill_Response_DataReaderView_var _var_type;

                static Sample_Kill_Response_DataReaderView_ptr _duplicate (Sample_Kill_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Kill_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Kill_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Kill_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Kill_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Kill_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Kill_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Kill_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Kill_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Kill_Response_& instance) = 0;

            protected:
                Sample_Kill_Response_DataReaderView () {};
                ~Sample_Kill_Response_DataReaderView () {};
            private:
                Sample_Kill_Response_DataReaderView (const Sample_Kill_Response_DataReaderView &);
                Sample_Kill_Response_DataReaderView & operator = (const Sample_Kill_Response_DataReaderView &);
            };
        }

    }

}

#endif
