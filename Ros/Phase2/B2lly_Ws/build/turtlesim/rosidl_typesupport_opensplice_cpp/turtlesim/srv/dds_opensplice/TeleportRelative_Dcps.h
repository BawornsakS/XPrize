#ifndef _H_F2A7B97A884AE380FE627FBA56AE6BF5_TeleportRelative_DCPS_H_
#define _H_F2A7B97A884AE380FE627FBA56AE6BF5_TeleportRelative_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TeleportRelative_.h"


namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            class TeleportRelative_Request_TypeSupportInterface;

            typedef TeleportRelative_Request_TypeSupportInterface * TeleportRelative_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TeleportRelative_Request_TypeSupportInterface> TeleportRelative_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TeleportRelative_Request_TypeSupportInterface> TeleportRelative_Request_TypeSupportInterface_out;


            class TeleportRelative_Request_DataWriter;

            typedef TeleportRelative_Request_DataWriter * TeleportRelative_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TeleportRelative_Request_DataWriter> TeleportRelative_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < TeleportRelative_Request_DataWriter> TeleportRelative_Request_DataWriter_out;


            class TeleportRelative_Request_DataReader;

            typedef TeleportRelative_Request_DataReader * TeleportRelative_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TeleportRelative_Request_DataReader> TeleportRelative_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < TeleportRelative_Request_DataReader> TeleportRelative_Request_DataReader_out;


            class TeleportRelative_Request_DataReaderView;

            typedef TeleportRelative_Request_DataReaderView * TeleportRelative_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TeleportRelative_Request_DataReaderView> TeleportRelative_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TeleportRelative_Request_DataReaderView> TeleportRelative_Request_DataReaderView_out;

            struct TeleportRelative_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < TeleportRelative_Request_, struct TeleportRelative_Request_Seq_uniq_> TeleportRelative_Request_Seq;
            typedef DDS_DCPSSequence_var < TeleportRelative_Request_Seq> TeleportRelative_Request_Seq_var;
            typedef DDS_DCPSSequence_out < TeleportRelative_Request_Seq> TeleportRelative_Request_Seq_out;

            class  TeleportRelative_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TeleportRelative_Request_TypeSupportInterface_ptr _ptr_type;
                typedef TeleportRelative_Request_TypeSupportInterface_var _var_type;

                static TeleportRelative_Request_TypeSupportInterface_ptr _duplicate (TeleportRelative_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportRelative_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TeleportRelative_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportRelative_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportRelative_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TeleportRelative_Request_TypeSupportInterface () {};
                ~TeleportRelative_Request_TypeSupportInterface () {};
            private:
                TeleportRelative_Request_TypeSupportInterface (const TeleportRelative_Request_TypeSupportInterface &);
                TeleportRelative_Request_TypeSupportInterface & operator = (const TeleportRelative_Request_TypeSupportInterface &);
            };

            class  TeleportRelative_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TeleportRelative_Request_DataWriter_ptr _ptr_type;
                typedef TeleportRelative_Request_DataWriter_var _var_type;

                static TeleportRelative_Request_DataWriter_ptr _duplicate (TeleportRelative_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportRelative_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TeleportRelative_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportRelative_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportRelative_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TeleportRelative_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TeleportRelative_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TeleportRelative_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TeleportRelative_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TeleportRelative_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TeleportRelative_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TeleportRelative_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TeleportRelative_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TeleportRelative_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TeleportRelative_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TeleportRelative_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportRelative_Request_& instance_data) = 0;

            protected:
                TeleportRelative_Request_DataWriter () {};
                ~TeleportRelative_Request_DataWriter () {};
            private:
                TeleportRelative_Request_DataWriter (const TeleportRelative_Request_DataWriter &);
                TeleportRelative_Request_DataWriter & operator = (const TeleportRelative_Request_DataWriter &);
            };

            class  TeleportRelative_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TeleportRelative_Request_DataReader_ptr _ptr_type;
                typedef TeleportRelative_Request_DataReader_var _var_type;

                static TeleportRelative_Request_DataReader_ptr _duplicate (TeleportRelative_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportRelative_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TeleportRelative_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportRelative_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportRelative_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TeleportRelative_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TeleportRelative_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TeleportRelative_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportRelative_Request_& instance) = 0;

            protected:
                TeleportRelative_Request_DataReader () {};
                ~TeleportRelative_Request_DataReader () {};
            private:
                TeleportRelative_Request_DataReader (const TeleportRelative_Request_DataReader &);
                TeleportRelative_Request_DataReader & operator = (const TeleportRelative_Request_DataReader &);
            };

            class  TeleportRelative_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TeleportRelative_Request_DataReaderView_ptr _ptr_type;
                typedef TeleportRelative_Request_DataReaderView_var _var_type;

                static TeleportRelative_Request_DataReaderView_ptr _duplicate (TeleportRelative_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportRelative_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TeleportRelative_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportRelative_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportRelative_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TeleportRelative_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TeleportRelative_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TeleportRelative_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportRelative_Request_& instance) = 0;

            protected:
                TeleportRelative_Request_DataReaderView () {};
                ~TeleportRelative_Request_DataReaderView () {};
            private:
                TeleportRelative_Request_DataReaderView (const TeleportRelative_Request_DataReaderView &);
                TeleportRelative_Request_DataReaderView & operator = (const TeleportRelative_Request_DataReaderView &);
            };
            class TeleportRelative_Response_TypeSupportInterface;

            typedef TeleportRelative_Response_TypeSupportInterface * TeleportRelative_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TeleportRelative_Response_TypeSupportInterface> TeleportRelative_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TeleportRelative_Response_TypeSupportInterface> TeleportRelative_Response_TypeSupportInterface_out;


            class TeleportRelative_Response_DataWriter;

            typedef TeleportRelative_Response_DataWriter * TeleportRelative_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TeleportRelative_Response_DataWriter> TeleportRelative_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < TeleportRelative_Response_DataWriter> TeleportRelative_Response_DataWriter_out;


            class TeleportRelative_Response_DataReader;

            typedef TeleportRelative_Response_DataReader * TeleportRelative_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TeleportRelative_Response_DataReader> TeleportRelative_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < TeleportRelative_Response_DataReader> TeleportRelative_Response_DataReader_out;


            class TeleportRelative_Response_DataReaderView;

            typedef TeleportRelative_Response_DataReaderView * TeleportRelative_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TeleportRelative_Response_DataReaderView> TeleportRelative_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TeleportRelative_Response_DataReaderView> TeleportRelative_Response_DataReaderView_out;

            struct TeleportRelative_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < TeleportRelative_Response_, struct TeleportRelative_Response_Seq_uniq_> TeleportRelative_Response_Seq;
            typedef DDS_DCPSSequence_var < TeleportRelative_Response_Seq> TeleportRelative_Response_Seq_var;
            typedef DDS_DCPSSequence_out < TeleportRelative_Response_Seq> TeleportRelative_Response_Seq_out;

            class  TeleportRelative_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TeleportRelative_Response_TypeSupportInterface_ptr _ptr_type;
                typedef TeleportRelative_Response_TypeSupportInterface_var _var_type;

                static TeleportRelative_Response_TypeSupportInterface_ptr _duplicate (TeleportRelative_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportRelative_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TeleportRelative_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportRelative_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportRelative_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TeleportRelative_Response_TypeSupportInterface () {};
                ~TeleportRelative_Response_TypeSupportInterface () {};
            private:
                TeleportRelative_Response_TypeSupportInterface (const TeleportRelative_Response_TypeSupportInterface &);
                TeleportRelative_Response_TypeSupportInterface & operator = (const TeleportRelative_Response_TypeSupportInterface &);
            };

            class  TeleportRelative_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TeleportRelative_Response_DataWriter_ptr _ptr_type;
                typedef TeleportRelative_Response_DataWriter_var _var_type;

                static TeleportRelative_Response_DataWriter_ptr _duplicate (TeleportRelative_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportRelative_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TeleportRelative_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportRelative_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportRelative_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TeleportRelative_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TeleportRelative_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TeleportRelative_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TeleportRelative_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TeleportRelative_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TeleportRelative_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TeleportRelative_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TeleportRelative_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TeleportRelative_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TeleportRelative_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TeleportRelative_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportRelative_Response_& instance_data) = 0;

            protected:
                TeleportRelative_Response_DataWriter () {};
                ~TeleportRelative_Response_DataWriter () {};
            private:
                TeleportRelative_Response_DataWriter (const TeleportRelative_Response_DataWriter &);
                TeleportRelative_Response_DataWriter & operator = (const TeleportRelative_Response_DataWriter &);
            };

            class  TeleportRelative_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TeleportRelative_Response_DataReader_ptr _ptr_type;
                typedef TeleportRelative_Response_DataReader_var _var_type;

                static TeleportRelative_Response_DataReader_ptr _duplicate (TeleportRelative_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportRelative_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TeleportRelative_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportRelative_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportRelative_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TeleportRelative_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TeleportRelative_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TeleportRelative_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportRelative_Response_& instance) = 0;

            protected:
                TeleportRelative_Response_DataReader () {};
                ~TeleportRelative_Response_DataReader () {};
            private:
                TeleportRelative_Response_DataReader (const TeleportRelative_Response_DataReader &);
                TeleportRelative_Response_DataReader & operator = (const TeleportRelative_Response_DataReader &);
            };

            class  TeleportRelative_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TeleportRelative_Response_DataReaderView_ptr _ptr_type;
                typedef TeleportRelative_Response_DataReaderView_var _var_type;

                static TeleportRelative_Response_DataReaderView_ptr _duplicate (TeleportRelative_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TeleportRelative_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TeleportRelative_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TeleportRelative_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TeleportRelative_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TeleportRelative_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TeleportRelative_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TeleportRelative_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TeleportRelative_Response_& instance) = 0;

            protected:
                TeleportRelative_Response_DataReaderView () {};
                ~TeleportRelative_Response_DataReaderView () {};
            private:
                TeleportRelative_Response_DataReaderView (const TeleportRelative_Response_DataReaderView &);
                TeleportRelative_Response_DataReaderView & operator = (const TeleportRelative_Response_DataReaderView &);
            };
            class Sample_TeleportRelative_Request_TypeSupportInterface;

            typedef Sample_TeleportRelative_Request_TypeSupportInterface * Sample_TeleportRelative_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportRelative_Request_TypeSupportInterface> Sample_TeleportRelative_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportRelative_Request_TypeSupportInterface> Sample_TeleportRelative_Request_TypeSupportInterface_out;


            class Sample_TeleportRelative_Request_DataWriter;

            typedef Sample_TeleportRelative_Request_DataWriter * Sample_TeleportRelative_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportRelative_Request_DataWriter> Sample_TeleportRelative_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportRelative_Request_DataWriter> Sample_TeleportRelative_Request_DataWriter_out;


            class Sample_TeleportRelative_Request_DataReader;

            typedef Sample_TeleportRelative_Request_DataReader * Sample_TeleportRelative_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportRelative_Request_DataReader> Sample_TeleportRelative_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportRelative_Request_DataReader> Sample_TeleportRelative_Request_DataReader_out;


            class Sample_TeleportRelative_Request_DataReaderView;

            typedef Sample_TeleportRelative_Request_DataReaderView * Sample_TeleportRelative_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportRelative_Request_DataReaderView> Sample_TeleportRelative_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportRelative_Request_DataReaderView> Sample_TeleportRelative_Request_DataReaderView_out;

            struct Sample_TeleportRelative_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_TeleportRelative_Request_, struct Sample_TeleportRelative_Request_Seq_uniq_> Sample_TeleportRelative_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_TeleportRelative_Request_Seq> Sample_TeleportRelative_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_TeleportRelative_Request_Seq> Sample_TeleportRelative_Request_Seq_out;

            class  Sample_TeleportRelative_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_TeleportRelative_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_TeleportRelative_Request_TypeSupportInterface_var _var_type;

                static Sample_TeleportRelative_Request_TypeSupportInterface_ptr _duplicate (Sample_TeleportRelative_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportRelative_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportRelative_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_TeleportRelative_Request_TypeSupportInterface () {};
                ~Sample_TeleportRelative_Request_TypeSupportInterface () {};
            private:
                Sample_TeleportRelative_Request_TypeSupportInterface (const Sample_TeleportRelative_Request_TypeSupportInterface &);
                Sample_TeleportRelative_Request_TypeSupportInterface & operator = (const Sample_TeleportRelative_Request_TypeSupportInterface &);
            };

            class  Sample_TeleportRelative_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_TeleportRelative_Request_DataWriter_ptr _ptr_type;
                typedef Sample_TeleportRelative_Request_DataWriter_var _var_type;

                static Sample_TeleportRelative_Request_DataWriter_ptr _duplicate (Sample_TeleportRelative_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportRelative_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportRelative_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_TeleportRelative_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_TeleportRelative_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_TeleportRelative_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_TeleportRelative_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_TeleportRelative_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_TeleportRelative_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_TeleportRelative_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_TeleportRelative_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_TeleportRelative_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_TeleportRelative_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportRelative_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportRelative_Request_& instance_data) = 0;

            protected:
                Sample_TeleportRelative_Request_DataWriter () {};
                ~Sample_TeleportRelative_Request_DataWriter () {};
            private:
                Sample_TeleportRelative_Request_DataWriter (const Sample_TeleportRelative_Request_DataWriter &);
                Sample_TeleportRelative_Request_DataWriter & operator = (const Sample_TeleportRelative_Request_DataWriter &);
            };

            class  Sample_TeleportRelative_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_TeleportRelative_Request_DataReader_ptr _ptr_type;
                typedef Sample_TeleportRelative_Request_DataReader_var _var_type;

                static Sample_TeleportRelative_Request_DataReader_ptr _duplicate (Sample_TeleportRelative_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportRelative_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportRelative_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_TeleportRelative_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_TeleportRelative_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportRelative_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportRelative_Request_& instance) = 0;

            protected:
                Sample_TeleportRelative_Request_DataReader () {};
                ~Sample_TeleportRelative_Request_DataReader () {};
            private:
                Sample_TeleportRelative_Request_DataReader (const Sample_TeleportRelative_Request_DataReader &);
                Sample_TeleportRelative_Request_DataReader & operator = (const Sample_TeleportRelative_Request_DataReader &);
            };

            class  Sample_TeleportRelative_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_TeleportRelative_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_TeleportRelative_Request_DataReaderView_var _var_type;

                static Sample_TeleportRelative_Request_DataReaderView_ptr _duplicate (Sample_TeleportRelative_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportRelative_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportRelative_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_TeleportRelative_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_TeleportRelative_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_TeleportRelative_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportRelative_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportRelative_Request_& instance) = 0;

            protected:
                Sample_TeleportRelative_Request_DataReaderView () {};
                ~Sample_TeleportRelative_Request_DataReaderView () {};
            private:
                Sample_TeleportRelative_Request_DataReaderView (const Sample_TeleportRelative_Request_DataReaderView &);
                Sample_TeleportRelative_Request_DataReaderView & operator = (const Sample_TeleportRelative_Request_DataReaderView &);
            };
            class Sample_TeleportRelative_Response_TypeSupportInterface;

            typedef Sample_TeleportRelative_Response_TypeSupportInterface * Sample_TeleportRelative_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportRelative_Response_TypeSupportInterface> Sample_TeleportRelative_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportRelative_Response_TypeSupportInterface> Sample_TeleportRelative_Response_TypeSupportInterface_out;


            class Sample_TeleportRelative_Response_DataWriter;

            typedef Sample_TeleportRelative_Response_DataWriter * Sample_TeleportRelative_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportRelative_Response_DataWriter> Sample_TeleportRelative_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportRelative_Response_DataWriter> Sample_TeleportRelative_Response_DataWriter_out;


            class Sample_TeleportRelative_Response_DataReader;

            typedef Sample_TeleportRelative_Response_DataReader * Sample_TeleportRelative_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportRelative_Response_DataReader> Sample_TeleportRelative_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportRelative_Response_DataReader> Sample_TeleportRelative_Response_DataReader_out;


            class Sample_TeleportRelative_Response_DataReaderView;

            typedef Sample_TeleportRelative_Response_DataReaderView * Sample_TeleportRelative_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_TeleportRelative_Response_DataReaderView> Sample_TeleportRelative_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_TeleportRelative_Response_DataReaderView> Sample_TeleportRelative_Response_DataReaderView_out;

            struct Sample_TeleportRelative_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_TeleportRelative_Response_, struct Sample_TeleportRelative_Response_Seq_uniq_> Sample_TeleportRelative_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_TeleportRelative_Response_Seq> Sample_TeleportRelative_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_TeleportRelative_Response_Seq> Sample_TeleportRelative_Response_Seq_out;

            class  Sample_TeleportRelative_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_TeleportRelative_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_TeleportRelative_Response_TypeSupportInterface_var _var_type;

                static Sample_TeleportRelative_Response_TypeSupportInterface_ptr _duplicate (Sample_TeleportRelative_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportRelative_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportRelative_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_TeleportRelative_Response_TypeSupportInterface () {};
                ~Sample_TeleportRelative_Response_TypeSupportInterface () {};
            private:
                Sample_TeleportRelative_Response_TypeSupportInterface (const Sample_TeleportRelative_Response_TypeSupportInterface &);
                Sample_TeleportRelative_Response_TypeSupportInterface & operator = (const Sample_TeleportRelative_Response_TypeSupportInterface &);
            };

            class  Sample_TeleportRelative_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_TeleportRelative_Response_DataWriter_ptr _ptr_type;
                typedef Sample_TeleportRelative_Response_DataWriter_var _var_type;

                static Sample_TeleportRelative_Response_DataWriter_ptr _duplicate (Sample_TeleportRelative_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportRelative_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportRelative_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_TeleportRelative_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_TeleportRelative_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_TeleportRelative_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_TeleportRelative_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_TeleportRelative_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_TeleportRelative_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_TeleportRelative_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_TeleportRelative_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_TeleportRelative_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_TeleportRelative_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportRelative_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportRelative_Response_& instance_data) = 0;

            protected:
                Sample_TeleportRelative_Response_DataWriter () {};
                ~Sample_TeleportRelative_Response_DataWriter () {};
            private:
                Sample_TeleportRelative_Response_DataWriter (const Sample_TeleportRelative_Response_DataWriter &);
                Sample_TeleportRelative_Response_DataWriter & operator = (const Sample_TeleportRelative_Response_DataWriter &);
            };

            class  Sample_TeleportRelative_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_TeleportRelative_Response_DataReader_ptr _ptr_type;
                typedef Sample_TeleportRelative_Response_DataReader_var _var_type;

                static Sample_TeleportRelative_Response_DataReader_ptr _duplicate (Sample_TeleportRelative_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportRelative_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportRelative_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_TeleportRelative_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_TeleportRelative_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportRelative_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportRelative_Response_& instance) = 0;

            protected:
                Sample_TeleportRelative_Response_DataReader () {};
                ~Sample_TeleportRelative_Response_DataReader () {};
            private:
                Sample_TeleportRelative_Response_DataReader (const Sample_TeleportRelative_Response_DataReader &);
                Sample_TeleportRelative_Response_DataReader & operator = (const Sample_TeleportRelative_Response_DataReader &);
            };

            class  Sample_TeleportRelative_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_TeleportRelative_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_TeleportRelative_Response_DataReaderView_var _var_type;

                static Sample_TeleportRelative_Response_DataReaderView_ptr _duplicate (Sample_TeleportRelative_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_TeleportRelative_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_TeleportRelative_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_TeleportRelative_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_TeleportRelative_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_TeleportRelative_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_TeleportRelative_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_TeleportRelative_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_TeleportRelative_Response_& instance) = 0;

            protected:
                Sample_TeleportRelative_Response_DataReaderView () {};
                ~Sample_TeleportRelative_Response_DataReaderView () {};
            private:
                Sample_TeleportRelative_Response_DataReaderView (const Sample_TeleportRelative_Response_DataReaderView &);
                Sample_TeleportRelative_Response_DataReaderView & operator = (const Sample_TeleportRelative_Response_DataReaderView &);
            };
        }

    }

}

#endif
