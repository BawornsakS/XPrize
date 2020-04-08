#ifndef _H_DA2051A166EF040C452218074BD01CD6_SetPen_DCPS_H_
#define _H_DA2051A166EF040C452218074BD01CD6_SetPen_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetPen_.h"


namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            class SetPen_Request_TypeSupportInterface;

            typedef SetPen_Request_TypeSupportInterface * SetPen_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetPen_Request_TypeSupportInterface> SetPen_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetPen_Request_TypeSupportInterface> SetPen_Request_TypeSupportInterface_out;


            class SetPen_Request_DataWriter;

            typedef SetPen_Request_DataWriter * SetPen_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetPen_Request_DataWriter> SetPen_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetPen_Request_DataWriter> SetPen_Request_DataWriter_out;


            class SetPen_Request_DataReader;

            typedef SetPen_Request_DataReader * SetPen_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetPen_Request_DataReader> SetPen_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SetPen_Request_DataReader> SetPen_Request_DataReader_out;


            class SetPen_Request_DataReaderView;

            typedef SetPen_Request_DataReaderView * SetPen_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetPen_Request_DataReaderView> SetPen_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetPen_Request_DataReaderView> SetPen_Request_DataReaderView_out;

            struct SetPen_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < SetPen_Request_, struct SetPen_Request_Seq_uniq_> SetPen_Request_Seq;
            typedef DDS_DCPSSequence_var < SetPen_Request_Seq> SetPen_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SetPen_Request_Seq> SetPen_Request_Seq_out;

            class  SetPen_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetPen_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SetPen_Request_TypeSupportInterface_var _var_type;

                static SetPen_Request_TypeSupportInterface_ptr _duplicate (SetPen_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetPen_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetPen_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetPen_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetPen_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetPen_Request_TypeSupportInterface () {};
                ~SetPen_Request_TypeSupportInterface () {};
            private:
                SetPen_Request_TypeSupportInterface (const SetPen_Request_TypeSupportInterface &);
                SetPen_Request_TypeSupportInterface & operator = (const SetPen_Request_TypeSupportInterface &);
            };

            class  SetPen_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetPen_Request_DataWriter_ptr _ptr_type;
                typedef SetPen_Request_DataWriter_var _var_type;

                static SetPen_Request_DataWriter_ptr _duplicate (SetPen_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetPen_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetPen_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetPen_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetPen_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetPen_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetPen_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetPen_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetPen_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetPen_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetPen_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetPen_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetPen_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetPen_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetPen_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetPen_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetPen_Request_& instance_data) = 0;

            protected:
                SetPen_Request_DataWriter () {};
                ~SetPen_Request_DataWriter () {};
            private:
                SetPen_Request_DataWriter (const SetPen_Request_DataWriter &);
                SetPen_Request_DataWriter & operator = (const SetPen_Request_DataWriter &);
            };

            class  SetPen_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetPen_Request_DataReader_ptr _ptr_type;
                typedef SetPen_Request_DataReader_var _var_type;

                static SetPen_Request_DataReader_ptr _duplicate (SetPen_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetPen_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetPen_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetPen_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetPen_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetPen_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetPen_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetPen_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetPen_Request_& instance) = 0;

            protected:
                SetPen_Request_DataReader () {};
                ~SetPen_Request_DataReader () {};
            private:
                SetPen_Request_DataReader (const SetPen_Request_DataReader &);
                SetPen_Request_DataReader & operator = (const SetPen_Request_DataReader &);
            };

            class  SetPen_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetPen_Request_DataReaderView_ptr _ptr_type;
                typedef SetPen_Request_DataReaderView_var _var_type;

                static SetPen_Request_DataReaderView_ptr _duplicate (SetPen_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetPen_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetPen_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetPen_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetPen_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetPen_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetPen_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetPen_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetPen_Request_& instance) = 0;

            protected:
                SetPen_Request_DataReaderView () {};
                ~SetPen_Request_DataReaderView () {};
            private:
                SetPen_Request_DataReaderView (const SetPen_Request_DataReaderView &);
                SetPen_Request_DataReaderView & operator = (const SetPen_Request_DataReaderView &);
            };
            class SetPen_Response_TypeSupportInterface;

            typedef SetPen_Response_TypeSupportInterface * SetPen_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetPen_Response_TypeSupportInterface> SetPen_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetPen_Response_TypeSupportInterface> SetPen_Response_TypeSupportInterface_out;


            class SetPen_Response_DataWriter;

            typedef SetPen_Response_DataWriter * SetPen_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetPen_Response_DataWriter> SetPen_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetPen_Response_DataWriter> SetPen_Response_DataWriter_out;


            class SetPen_Response_DataReader;

            typedef SetPen_Response_DataReader * SetPen_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetPen_Response_DataReader> SetPen_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SetPen_Response_DataReader> SetPen_Response_DataReader_out;


            class SetPen_Response_DataReaderView;

            typedef SetPen_Response_DataReaderView * SetPen_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetPen_Response_DataReaderView> SetPen_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetPen_Response_DataReaderView> SetPen_Response_DataReaderView_out;

            struct SetPen_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < SetPen_Response_, struct SetPen_Response_Seq_uniq_> SetPen_Response_Seq;
            typedef DDS_DCPSSequence_var < SetPen_Response_Seq> SetPen_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SetPen_Response_Seq> SetPen_Response_Seq_out;

            class  SetPen_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetPen_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SetPen_Response_TypeSupportInterface_var _var_type;

                static SetPen_Response_TypeSupportInterface_ptr _duplicate (SetPen_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetPen_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetPen_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetPen_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetPen_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetPen_Response_TypeSupportInterface () {};
                ~SetPen_Response_TypeSupportInterface () {};
            private:
                SetPen_Response_TypeSupportInterface (const SetPen_Response_TypeSupportInterface &);
                SetPen_Response_TypeSupportInterface & operator = (const SetPen_Response_TypeSupportInterface &);
            };

            class  SetPen_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetPen_Response_DataWriter_ptr _ptr_type;
                typedef SetPen_Response_DataWriter_var _var_type;

                static SetPen_Response_DataWriter_ptr _duplicate (SetPen_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetPen_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetPen_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetPen_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetPen_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetPen_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetPen_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetPen_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetPen_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetPen_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetPen_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetPen_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetPen_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetPen_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetPen_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetPen_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetPen_Response_& instance_data) = 0;

            protected:
                SetPen_Response_DataWriter () {};
                ~SetPen_Response_DataWriter () {};
            private:
                SetPen_Response_DataWriter (const SetPen_Response_DataWriter &);
                SetPen_Response_DataWriter & operator = (const SetPen_Response_DataWriter &);
            };

            class  SetPen_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetPen_Response_DataReader_ptr _ptr_type;
                typedef SetPen_Response_DataReader_var _var_type;

                static SetPen_Response_DataReader_ptr _duplicate (SetPen_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetPen_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetPen_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetPen_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetPen_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetPen_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetPen_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetPen_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetPen_Response_& instance) = 0;

            protected:
                SetPen_Response_DataReader () {};
                ~SetPen_Response_DataReader () {};
            private:
                SetPen_Response_DataReader (const SetPen_Response_DataReader &);
                SetPen_Response_DataReader & operator = (const SetPen_Response_DataReader &);
            };

            class  SetPen_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetPen_Response_DataReaderView_ptr _ptr_type;
                typedef SetPen_Response_DataReaderView_var _var_type;

                static SetPen_Response_DataReaderView_ptr _duplicate (SetPen_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetPen_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetPen_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetPen_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetPen_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetPen_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetPen_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetPen_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetPen_Response_& instance) = 0;

            protected:
                SetPen_Response_DataReaderView () {};
                ~SetPen_Response_DataReaderView () {};
            private:
                SetPen_Response_DataReaderView (const SetPen_Response_DataReaderView &);
                SetPen_Response_DataReaderView & operator = (const SetPen_Response_DataReaderView &);
            };
            class Sample_SetPen_Request_TypeSupportInterface;

            typedef Sample_SetPen_Request_TypeSupportInterface * Sample_SetPen_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetPen_Request_TypeSupportInterface> Sample_SetPen_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetPen_Request_TypeSupportInterface> Sample_SetPen_Request_TypeSupportInterface_out;


            class Sample_SetPen_Request_DataWriter;

            typedef Sample_SetPen_Request_DataWriter * Sample_SetPen_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetPen_Request_DataWriter> Sample_SetPen_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetPen_Request_DataWriter> Sample_SetPen_Request_DataWriter_out;


            class Sample_SetPen_Request_DataReader;

            typedef Sample_SetPen_Request_DataReader * Sample_SetPen_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetPen_Request_DataReader> Sample_SetPen_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetPen_Request_DataReader> Sample_SetPen_Request_DataReader_out;


            class Sample_SetPen_Request_DataReaderView;

            typedef Sample_SetPen_Request_DataReaderView * Sample_SetPen_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetPen_Request_DataReaderView> Sample_SetPen_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetPen_Request_DataReaderView> Sample_SetPen_Request_DataReaderView_out;

            struct Sample_SetPen_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_SetPen_Request_, struct Sample_SetPen_Request_Seq_uniq_> Sample_SetPen_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetPen_Request_Seq> Sample_SetPen_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetPen_Request_Seq> Sample_SetPen_Request_Seq_out;

            class  Sample_SetPen_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetPen_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetPen_Request_TypeSupportInterface_var _var_type;

                static Sample_SetPen_Request_TypeSupportInterface_ptr _duplicate (Sample_SetPen_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetPen_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetPen_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetPen_Request_TypeSupportInterface () {};
                ~Sample_SetPen_Request_TypeSupportInterface () {};
            private:
                Sample_SetPen_Request_TypeSupportInterface (const Sample_SetPen_Request_TypeSupportInterface &);
                Sample_SetPen_Request_TypeSupportInterface & operator = (const Sample_SetPen_Request_TypeSupportInterface &);
            };

            class  Sample_SetPen_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetPen_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SetPen_Request_DataWriter_var _var_type;

                static Sample_SetPen_Request_DataWriter_ptr _duplicate (Sample_SetPen_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetPen_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetPen_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetPen_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetPen_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetPen_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetPen_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetPen_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetPen_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetPen_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetPen_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetPen_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetPen_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetPen_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetPen_Request_& instance_data) = 0;

            protected:
                Sample_SetPen_Request_DataWriter () {};
                ~Sample_SetPen_Request_DataWriter () {};
            private:
                Sample_SetPen_Request_DataWriter (const Sample_SetPen_Request_DataWriter &);
                Sample_SetPen_Request_DataWriter & operator = (const Sample_SetPen_Request_DataWriter &);
            };

            class  Sample_SetPen_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetPen_Request_DataReader_ptr _ptr_type;
                typedef Sample_SetPen_Request_DataReader_var _var_type;

                static Sample_SetPen_Request_DataReader_ptr _duplicate (Sample_SetPen_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetPen_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetPen_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetPen_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetPen_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetPen_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetPen_Request_& instance) = 0;

            protected:
                Sample_SetPen_Request_DataReader () {};
                ~Sample_SetPen_Request_DataReader () {};
            private:
                Sample_SetPen_Request_DataReader (const Sample_SetPen_Request_DataReader &);
                Sample_SetPen_Request_DataReader & operator = (const Sample_SetPen_Request_DataReader &);
            };

            class  Sample_SetPen_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetPen_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SetPen_Request_DataReaderView_var _var_type;

                static Sample_SetPen_Request_DataReaderView_ptr _duplicate (Sample_SetPen_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetPen_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetPen_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetPen_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetPen_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetPen_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetPen_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetPen_Request_& instance) = 0;

            protected:
                Sample_SetPen_Request_DataReaderView () {};
                ~Sample_SetPen_Request_DataReaderView () {};
            private:
                Sample_SetPen_Request_DataReaderView (const Sample_SetPen_Request_DataReaderView &);
                Sample_SetPen_Request_DataReaderView & operator = (const Sample_SetPen_Request_DataReaderView &);
            };
            class Sample_SetPen_Response_TypeSupportInterface;

            typedef Sample_SetPen_Response_TypeSupportInterface * Sample_SetPen_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetPen_Response_TypeSupportInterface> Sample_SetPen_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetPen_Response_TypeSupportInterface> Sample_SetPen_Response_TypeSupportInterface_out;


            class Sample_SetPen_Response_DataWriter;

            typedef Sample_SetPen_Response_DataWriter * Sample_SetPen_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetPen_Response_DataWriter> Sample_SetPen_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetPen_Response_DataWriter> Sample_SetPen_Response_DataWriter_out;


            class Sample_SetPen_Response_DataReader;

            typedef Sample_SetPen_Response_DataReader * Sample_SetPen_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetPen_Response_DataReader> Sample_SetPen_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetPen_Response_DataReader> Sample_SetPen_Response_DataReader_out;


            class Sample_SetPen_Response_DataReaderView;

            typedef Sample_SetPen_Response_DataReaderView * Sample_SetPen_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetPen_Response_DataReaderView> Sample_SetPen_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetPen_Response_DataReaderView> Sample_SetPen_Response_DataReaderView_out;

            struct Sample_SetPen_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_SetPen_Response_, struct Sample_SetPen_Response_Seq_uniq_> Sample_SetPen_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetPen_Response_Seq> Sample_SetPen_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetPen_Response_Seq> Sample_SetPen_Response_Seq_out;

            class  Sample_SetPen_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetPen_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetPen_Response_TypeSupportInterface_var _var_type;

                static Sample_SetPen_Response_TypeSupportInterface_ptr _duplicate (Sample_SetPen_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetPen_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetPen_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetPen_Response_TypeSupportInterface () {};
                ~Sample_SetPen_Response_TypeSupportInterface () {};
            private:
                Sample_SetPen_Response_TypeSupportInterface (const Sample_SetPen_Response_TypeSupportInterface &);
                Sample_SetPen_Response_TypeSupportInterface & operator = (const Sample_SetPen_Response_TypeSupportInterface &);
            };

            class  Sample_SetPen_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetPen_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SetPen_Response_DataWriter_var _var_type;

                static Sample_SetPen_Response_DataWriter_ptr _duplicate (Sample_SetPen_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetPen_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetPen_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetPen_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetPen_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetPen_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetPen_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetPen_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetPen_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetPen_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetPen_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetPen_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetPen_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetPen_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetPen_Response_& instance_data) = 0;

            protected:
                Sample_SetPen_Response_DataWriter () {};
                ~Sample_SetPen_Response_DataWriter () {};
            private:
                Sample_SetPen_Response_DataWriter (const Sample_SetPen_Response_DataWriter &);
                Sample_SetPen_Response_DataWriter & operator = (const Sample_SetPen_Response_DataWriter &);
            };

            class  Sample_SetPen_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetPen_Response_DataReader_ptr _ptr_type;
                typedef Sample_SetPen_Response_DataReader_var _var_type;

                static Sample_SetPen_Response_DataReader_ptr _duplicate (Sample_SetPen_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetPen_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetPen_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetPen_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetPen_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetPen_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetPen_Response_& instance) = 0;

            protected:
                Sample_SetPen_Response_DataReader () {};
                ~Sample_SetPen_Response_DataReader () {};
            private:
                Sample_SetPen_Response_DataReader (const Sample_SetPen_Response_DataReader &);
                Sample_SetPen_Response_DataReader & operator = (const Sample_SetPen_Response_DataReader &);
            };

            class  Sample_SetPen_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetPen_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SetPen_Response_DataReaderView_var _var_type;

                static Sample_SetPen_Response_DataReaderView_ptr _duplicate (Sample_SetPen_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetPen_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetPen_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetPen_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetPen_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetPen_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetPen_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetPen_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetPen_Response_& instance) = 0;

            protected:
                Sample_SetPen_Response_DataReaderView () {};
                ~Sample_SetPen_Response_DataReaderView () {};
            private:
                Sample_SetPen_Response_DataReaderView (const Sample_SetPen_Response_DataReaderView &);
                Sample_SetPen_Response_DataReaderView & operator = (const Sample_SetPen_Response_DataReaderView &);
            };
        }

    }

}

#endif
