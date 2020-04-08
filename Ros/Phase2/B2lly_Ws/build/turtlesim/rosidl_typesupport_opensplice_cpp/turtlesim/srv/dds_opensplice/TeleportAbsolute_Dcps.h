#ifndef _H_9F0B2C49D9A6DCE0C92687E5452476D3_TeleportAbsolute_DCPS_H_
#define _H_9F0B2C49D9A6DCE0C92687E5452476D3_TeleportAbsolute_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TeleportAbsolute_.h"


namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            class TeleportAbsolute_Request_TypeSupportInterface;

            typedef TeleportAbsolute_Request_TypeSupportInterface * TeleportAbsolute_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TeleportAbsolute_Request_TypeSupportInterface> TeleportAbsolute_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TeleportAbsolute_Request_TypeSupportInterface> TeleportAbsolute_Request_TypeSupportInterface_out;


            class TeleportAbsolute_Request_DataWriter;

            typedef TeleportAbsolute_Request_DataWriter * TeleportAbsolute_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TeleportAbsolute_Request_DataWriter> TeleportAbsolute_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < TeleportAbsolute_Request_DataWriter> TeleportAbsolute_Request_DataWriter_out;


            class TeleportAbsolute_Request_DataReader;

            typedef TeleportAbsolute_Request_DataReader * TeleportAbsolute_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TeleportAbsolute_Request_DataReader> TeleportAbsolute_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < TeleportAbsolute_Request_DataReader> TeleportAbsolute_Request_DataReader_out;


            class TeleportAbsolute_Request_DataReaderView;

            typedef TeleportAbsolute_Request_DataReaderView * TeleportAbsolute_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TeleportAbsolute_Request_DataReaderView> TeleportAbsolute_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TeleportAbsolute_Request_DataReaderView> TeleportAbsolute_Request_DataReaderView_out;

            struct TeleportAbsolute_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < TeleportAbsolute_Request_, struct TeleportAbsolute_Request_Seq_uniq_> TeleportAbsolute_Request_Seq;
            typedef DDS_DCPSSequence_var < TeleportAbsolute_Request_Seq> TeleportAbsolute_Request_Seq_var;
            typedef DDS_DCPSSequence_out < TeleportAbsolute_Request_Seq> TeleportAbsolute_Request_Seq_out;

            class  TeleportAbsolute_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TeleportAbsolute_Request_TypeSupportInterface_ptr _ptr_type;
                typedef TeleportAbsolute_Request_TypeSupportInterface_var _var_type;

                static TeleportAbsolute_Request_TypeSupportInterface_ptr _duplicate (TeleportAbsolute_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportAbsolute_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportAbsolute_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TeleportAbsolute_Request_TypeSupportInterface () {};
                ~TeleportAbsolute_Request_TypeSupportInterface () {};
            private:
                TeleportAbsolute_Request_TypeSupportInterface (const TeleportAbsolute_Request_TypeSupportInterface &);
                TeleportAbsolute_Request_TypeSupportInterface & operator = (const TeleportAbsolute_Request_TypeSupportInterface &);
            };

            class  TeleportAbsolute_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TeleportAbsolute_Request_DataWriter_ptr _ptr_type;
                typedef TeleportAbsolute_Request_DataWriter_var _var_type;

                static TeleportAbsolute_Request_DataWriter_ptr _duplicate (TeleportAbsolute_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportAbsolute_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportAbsolute_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TeleportAbsolute_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TeleportAbsolute_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TeleportAbsolute_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TeleportAbsolute_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TeleportAbsolute_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TeleportAbsolute_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TeleportAbsolute_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TeleportAbsolute_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TeleportAbsolute_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TeleportAbsolute_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TeleportAbsolute_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportAbsolute_Request_& instance_data) = 0;

            protected:
                TeleportAbsolute_Request_DataWriter () {};
                ~TeleportAbsolute_Request_DataWriter () {};
            private:
                TeleportAbsolute_Request_DataWriter (const TeleportAbsolute_Request_DataWriter &);
                TeleportAbsolute_Request_DataWriter & operator = (const TeleportAbsolute_Request_DataWriter &);
            };

            class  TeleportAbsolute_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TeleportAbsolute_Request_DataReader_ptr _ptr_type;
                typedef TeleportAbsolute_Request_DataReader_var _var_type;

                static TeleportAbsolute_Request_DataReader_ptr _duplicate (TeleportAbsolute_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportAbsolute_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportAbsolute_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TeleportAbsolute_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TeleportAbsolute_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TeleportAbsolute_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportAbsolute_Request_& instance) = 0;

            protected:
                TeleportAbsolute_Request_DataReader () {};
                ~TeleportAbsolute_Request_DataReader () {};
            private:
                TeleportAbsolute_Request_DataReader (const TeleportAbsolute_Request_DataReader &);
                TeleportAbsolute_Request_DataReader & operator = (const TeleportAbsolute_Request_DataReader &);
            };

            class  TeleportAbsolute_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TeleportAbsolute_Request_DataReaderView_ptr _ptr_type;
                typedef TeleportAbsolute_Request_DataReaderView_var _var_type;

                static TeleportAbsolute_Request_DataReaderView_ptr _duplicate (TeleportAbsolute_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportAbsolute_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportAbsolute_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TeleportAbsolute_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TeleportAbsolute_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TeleportAbsolute_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportAbsolute_Request_& instance) = 0;

            protected:
                TeleportAbsolute_Request_DataReaderView () {};
                ~TeleportAbsolute_Request_DataReaderView () {};
            private:
                TeleportAbsolute_Request_DataReaderView (const TeleportAbsolute_Request_DataReaderView &);
                TeleportAbsolute_Request_DataReaderView & operator = (const TeleportAbsolute_Request_DataReaderView &);
            };
            class TeleportAbsolute_Response_TypeSupportInterface;

            typedef TeleportAbsolute_Response_TypeSupportInterface * TeleportAbsolute_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TeleportAbsolute_Response_TypeSupportInterface> TeleportAbsolute_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TeleportAbsolute_Response_TypeSupportInterface> TeleportAbsolute_Response_TypeSupportInterface_out;


            class TeleportAbsolute_Response_DataWriter;

            typedef TeleportAbsolute_Response_DataWriter * TeleportAbsolute_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TeleportAbsolute_Response_DataWriter> TeleportAbsolute_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < TeleportAbsolute_Response_DataWriter> TeleportAbsolute_Response_DataWriter_out;


            class TeleportAbsolute_Response_DataReader;

            typedef TeleportAbsolute_Response_DataReader * TeleportAbsolute_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TeleportAbsolute_Response_DataReader> TeleportAbsolute_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < TeleportAbsolute_Response_DataReader> TeleportAbsolute_Response_DataReader_out;


            class TeleportAbsolute_Response_DataReaderView;

            typedef TeleportAbsolute_Response_DataReaderView * TeleportAbsolute_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TeleportAbsolute_Response_DataReaderView> TeleportAbsolute_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TeleportAbsolute_Response_DataReaderView> TeleportAbsolute_Response_DataReaderView_out;

            struct TeleportAbsolute_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < TeleportAbsolute_Response_, struct TeleportAbsolute_Response_Seq_uniq_> TeleportAbsolute_Response_Seq;
            typedef DDS_DCPSSequence_var < TeleportAbsolute_Response_Seq> TeleportAbsolute_Response_Seq_var;
            typedef DDS_DCPSSequence_out < TeleportAbsolute_Response_Seq> TeleportAbsolute_Response_Seq_out;

            class  TeleportAbsolute_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TeleportAbsolute_Response_TypeSupportInterface_ptr _ptr_type;
                typedef TeleportAbsolute_Response_TypeSupportInterface_var _var_type;

                static TeleportAbsolute_Response_TypeSupportInterface_ptr _duplicate (TeleportAbsolute_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportAbsolute_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportAbsolute_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TeleportAbsolute_Response_TypeSupportInterface () {};
                ~TeleportAbsolute_Response_TypeSupportInterface () {};
            private:
                TeleportAbsolute_Response_TypeSupportInterface (const TeleportAbsolute_Response_TypeSupportInterface &);
                TeleportAbsolute_Response_TypeSupportInterface & operator = (const TeleportAbsolute_Response_TypeSupportInterface &);
            };

            class  TeleportAbsolute_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TeleportAbsolute_Response_DataWriter_ptr _ptr_type;
                typedef TeleportAbsolute_Response_DataWriter_var _var_type;

                static TeleportAbsolute_Response_DataWriter_ptr _duplicate (TeleportAbsolute_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportAbsolute_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportAbsolute_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TeleportAbsolute_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TeleportAbsolute_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TeleportAbsolute_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TeleportAbsolute_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TeleportAbsolute_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TeleportAbsolute_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TeleportAbsolute_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TeleportAbsolute_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TeleportAbsolute_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TeleportAbsolute_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TeleportAbsolute_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportAbsolute_Response_& instance_data) = 0;

            protected:
                TeleportAbsolute_Response_DataWriter () {};
                ~TeleportAbsolute_Response_DataWriter () {};
            private:
                TeleportAbsolute_Response_DataWriter (const TeleportAbsolute_Response_DataWriter &);
                TeleportAbsolute_Response_DataWriter & operator = (const TeleportAbsolute_Response_DataWriter &);
            };

            class  TeleportAbsolute_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TeleportAbsolute_Response_DataReader_ptr _ptr_type;
                typedef TeleportAbsolute_Response_DataReader_var _var_type;

                static TeleportAbsolute_Response_DataReader_ptr _duplicate (TeleportAbsolute_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportAbsolute_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportAbsolute_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TeleportAbsolute_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TeleportAbsolute_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TeleportAbsolute_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportAbsolute_Response_& instance) = 0;

            protected:
                TeleportAbsolute_Response_DataReader () {};
                ~TeleportAbsolute_Response_DataReader () {};
            private:
                TeleportAbsolute_Response_DataReader (const TeleportAbsolute_Response_DataReader &);
                TeleportAbsolute_Response_DataReader & operator = (const TeleportAbsolute_Response_DataReader &);
            };

            class  TeleportAbsolute_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TeleportAbsolute_Response_DataReaderView_ptr _ptr_type;
                typedef TeleportAbsolute_Response_DataReaderView_var _var_type;

                static TeleportAbsolute_Response_DataReaderView_ptr _duplicate (TeleportAbsolute_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportAbsolute_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportAbsolute_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportAbsolute_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TeleportAbsolute_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TeleportAbsolute_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TeleportAbsolute_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportAbsolute_Response_& instance) = 0;

            protected:
                TeleportAbsolute_Response_DataReaderView () {};
                ~TeleportAbsolute_Response_DataReaderView () {};
            private:
                TeleportAbsolute_Response_DataReaderView (const TeleportAbsolute_Response_DataReaderView &);
                TeleportAbsolute_Response_DataReaderView & operator = (const TeleportAbsolute_Response_DataReaderView &);
            };
            class Sample_TeleportAbsolute_Request_TypeSupportInterface;

            typedef Sample_TeleportAbsolute_Request_TypeSupportInterface * Sample_TeleportAbsolute_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportAbsolute_Request_TypeSupportInterface> Sample_TeleportAbsolute_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportAbsolute_Request_TypeSupportInterface> Sample_TeleportAbsolute_Request_TypeSupportInterface_out;


            class Sample_TeleportAbsolute_Request_DataWriter;

            typedef Sample_TeleportAbsolute_Request_DataWriter * Sample_TeleportAbsolute_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportAbsolute_Request_DataWriter> Sample_TeleportAbsolute_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportAbsolute_Request_DataWriter> Sample_TeleportAbsolute_Request_DataWriter_out;


            class Sample_TeleportAbsolute_Request_DataReader;

            typedef Sample_TeleportAbsolute_Request_DataReader * Sample_TeleportAbsolute_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportAbsolute_Request_DataReader> Sample_TeleportAbsolute_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportAbsolute_Request_DataReader> Sample_TeleportAbsolute_Request_DataReader_out;


            class Sample_TeleportAbsolute_Request_DataReaderView;

            typedef Sample_TeleportAbsolute_Request_DataReaderView * Sample_TeleportAbsolute_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportAbsolute_Request_DataReaderView> Sample_TeleportAbsolute_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportAbsolute_Request_DataReaderView> Sample_TeleportAbsolute_Request_DataReaderView_out;

            struct Sample_TeleportAbsolute_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_TeleportAbsolute_Request_, struct Sample_TeleportAbsolute_Request_Seq_uniq_> Sample_TeleportAbsolute_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_TeleportAbsolute_Request_Seq> Sample_TeleportAbsolute_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_TeleportAbsolute_Request_Seq> Sample_TeleportAbsolute_Request_Seq_out;

            class  Sample_TeleportAbsolute_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_TeleportAbsolute_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_TeleportAbsolute_Request_TypeSupportInterface_var _var_type;

                static Sample_TeleportAbsolute_Request_TypeSupportInterface_ptr _duplicate (Sample_TeleportAbsolute_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportAbsolute_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportAbsolute_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_TeleportAbsolute_Request_TypeSupportInterface () {};
                ~Sample_TeleportAbsolute_Request_TypeSupportInterface () {};
            private:
                Sample_TeleportAbsolute_Request_TypeSupportInterface (const Sample_TeleportAbsolute_Request_TypeSupportInterface &);
                Sample_TeleportAbsolute_Request_TypeSupportInterface & operator = (const Sample_TeleportAbsolute_Request_TypeSupportInterface &);
            };

            class  Sample_TeleportAbsolute_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_TeleportAbsolute_Request_DataWriter_ptr _ptr_type;
                typedef Sample_TeleportAbsolute_Request_DataWriter_var _var_type;

                static Sample_TeleportAbsolute_Request_DataWriter_ptr _duplicate (Sample_TeleportAbsolute_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportAbsolute_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportAbsolute_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_TeleportAbsolute_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_TeleportAbsolute_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_TeleportAbsolute_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_TeleportAbsolute_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_TeleportAbsolute_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_TeleportAbsolute_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_TeleportAbsolute_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_TeleportAbsolute_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_TeleportAbsolute_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_TeleportAbsolute_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportAbsolute_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportAbsolute_Request_& instance_data) = 0;

            protected:
                Sample_TeleportAbsolute_Request_DataWriter () {};
                ~Sample_TeleportAbsolute_Request_DataWriter () {};
            private:
                Sample_TeleportAbsolute_Request_DataWriter (const Sample_TeleportAbsolute_Request_DataWriter &);
                Sample_TeleportAbsolute_Request_DataWriter & operator = (const Sample_TeleportAbsolute_Request_DataWriter &);
            };

            class  Sample_TeleportAbsolute_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_TeleportAbsolute_Request_DataReader_ptr _ptr_type;
                typedef Sample_TeleportAbsolute_Request_DataReader_var _var_type;

                static Sample_TeleportAbsolute_Request_DataReader_ptr _duplicate (Sample_TeleportAbsolute_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportAbsolute_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportAbsolute_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_TeleportAbsolute_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_TeleportAbsolute_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportAbsolute_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportAbsolute_Request_& instance) = 0;

            protected:
                Sample_TeleportAbsolute_Request_DataReader () {};
                ~Sample_TeleportAbsolute_Request_DataReader () {};
            private:
                Sample_TeleportAbsolute_Request_DataReader (const Sample_TeleportAbsolute_Request_DataReader &);
                Sample_TeleportAbsolute_Request_DataReader & operator = (const Sample_TeleportAbsolute_Request_DataReader &);
            };

            class  Sample_TeleportAbsolute_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_TeleportAbsolute_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_TeleportAbsolute_Request_DataReaderView_var _var_type;

                static Sample_TeleportAbsolute_Request_DataReaderView_ptr _duplicate (Sample_TeleportAbsolute_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportAbsolute_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportAbsolute_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_TeleportAbsolute_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_TeleportAbsolute_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_TeleportAbsolute_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportAbsolute_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportAbsolute_Request_& instance) = 0;

            protected:
                Sample_TeleportAbsolute_Request_DataReaderView () {};
                ~Sample_TeleportAbsolute_Request_DataReaderView () {};
            private:
                Sample_TeleportAbsolute_Request_DataReaderView (const Sample_TeleportAbsolute_Request_DataReaderView &);
                Sample_TeleportAbsolute_Request_DataReaderView & operator = (const Sample_TeleportAbsolute_Request_DataReaderView &);
            };
            class Sample_TeleportAbsolute_Response_TypeSupportInterface;

            typedef Sample_TeleportAbsolute_Response_TypeSupportInterface * Sample_TeleportAbsolute_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportAbsolute_Response_TypeSupportInterface> Sample_TeleportAbsolute_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportAbsolute_Response_TypeSupportInterface> Sample_TeleportAbsolute_Response_TypeSupportInterface_out;


            class Sample_TeleportAbsolute_Response_DataWriter;

            typedef Sample_TeleportAbsolute_Response_DataWriter * Sample_TeleportAbsolute_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportAbsolute_Response_DataWriter> Sample_TeleportAbsolute_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportAbsolute_Response_DataWriter> Sample_TeleportAbsolute_Response_DataWriter_out;


            class Sample_TeleportAbsolute_Response_DataReader;

            typedef Sample_TeleportAbsolute_Response_DataReader * Sample_TeleportAbsolute_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportAbsolute_Response_DataReader> Sample_TeleportAbsolute_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportAbsolute_Response_DataReader> Sample_TeleportAbsolute_Response_DataReader_out;


            class Sample_TeleportAbsolute_Response_DataReaderView;

            typedef Sample_TeleportAbsolute_Response_DataReaderView * Sample_TeleportAbsolute_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportAbsolute_Response_DataReaderView> Sample_TeleportAbsolute_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportAbsolute_Response_DataReaderView> Sample_TeleportAbsolute_Response_DataReaderView_out;

            struct Sample_TeleportAbsolute_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_TeleportAbsolute_Response_, struct Sample_TeleportAbsolute_Response_Seq_uniq_> Sample_TeleportAbsolute_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_TeleportAbsolute_Response_Seq> Sample_TeleportAbsolute_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_TeleportAbsolute_Response_Seq> Sample_TeleportAbsolute_Response_Seq_out;

            class  Sample_TeleportAbsolute_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_TeleportAbsolute_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_TeleportAbsolute_Response_TypeSupportInterface_var _var_type;

                static Sample_TeleportAbsolute_Response_TypeSupportInterface_ptr _duplicate (Sample_TeleportAbsolute_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportAbsolute_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportAbsolute_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_TeleportAbsolute_Response_TypeSupportInterface () {};
                ~Sample_TeleportAbsolute_Response_TypeSupportInterface () {};
            private:
                Sample_TeleportAbsolute_Response_TypeSupportInterface (const Sample_TeleportAbsolute_Response_TypeSupportInterface &);
                Sample_TeleportAbsolute_Response_TypeSupportInterface & operator = (const Sample_TeleportAbsolute_Response_TypeSupportInterface &);
            };

            class  Sample_TeleportAbsolute_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_TeleportAbsolute_Response_DataWriter_ptr _ptr_type;
                typedef Sample_TeleportAbsolute_Response_DataWriter_var _var_type;

                static Sample_TeleportAbsolute_Response_DataWriter_ptr _duplicate (Sample_TeleportAbsolute_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportAbsolute_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportAbsolute_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_TeleportAbsolute_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_TeleportAbsolute_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_TeleportAbsolute_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_TeleportAbsolute_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_TeleportAbsolute_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_TeleportAbsolute_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_TeleportAbsolute_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_TeleportAbsolute_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_TeleportAbsolute_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_TeleportAbsolute_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportAbsolute_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportAbsolute_Response_& instance_data) = 0;

            protected:
                Sample_TeleportAbsolute_Response_DataWriter () {};
                ~Sample_TeleportAbsolute_Response_DataWriter () {};
            private:
                Sample_TeleportAbsolute_Response_DataWriter (const Sample_TeleportAbsolute_Response_DataWriter &);
                Sample_TeleportAbsolute_Response_DataWriter & operator = (const Sample_TeleportAbsolute_Response_DataWriter &);
            };

            class  Sample_TeleportAbsolute_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_TeleportAbsolute_Response_DataReader_ptr _ptr_type;
                typedef Sample_TeleportAbsolute_Response_DataReader_var _var_type;

                static Sample_TeleportAbsolute_Response_DataReader_ptr _duplicate (Sample_TeleportAbsolute_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportAbsolute_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportAbsolute_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_TeleportAbsolute_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_TeleportAbsolute_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportAbsolute_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportAbsolute_Response_& instance) = 0;

            protected:
                Sample_TeleportAbsolute_Response_DataReader () {};
                ~Sample_TeleportAbsolute_Response_DataReader () {};
            private:
                Sample_TeleportAbsolute_Response_DataReader (const Sample_TeleportAbsolute_Response_DataReader &);
                Sample_TeleportAbsolute_Response_DataReader & operator = (const Sample_TeleportAbsolute_Response_DataReader &);
            };

            class  Sample_TeleportAbsolute_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_TeleportAbsolute_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_TeleportAbsolute_Response_DataReaderView_var _var_type;

                static Sample_TeleportAbsolute_Response_DataReaderView_ptr _duplicate (Sample_TeleportAbsolute_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportAbsolute_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportAbsolute_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportAbsolute_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_TeleportAbsolute_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_TeleportAbsolute_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_TeleportAbsolute_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportAbsolute_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportAbsolute_Response_& instance) = 0;

            protected:
                Sample_TeleportAbsolute_Response_DataReaderView () {};
                ~Sample_TeleportAbsolute_Response_DataReaderView () {};
            private:
                Sample_TeleportAbsolute_Response_DataReaderView (const Sample_TeleportAbsolute_Response_DataReaderView &);
                Sample_TeleportAbsolute_Response_DataReaderView & operator = (const Sample_TeleportAbsolute_Response_DataReaderView &);
            };
        }

    }

}

#endif
