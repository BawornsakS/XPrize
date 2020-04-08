#ifndef _H_FC015AC10B800DA479E374A2E79DDE16_RotateAbsolute_DCPS_H_
#define _H_FC015AC10B800DA479E374A2E79DDE16_RotateAbsolute_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "RotateAbsolute_.h"


namespace turtlesim
{
    namespace action
    {
        namespace dds_
        {
            class RotateAbsolute_Goal_TypeSupportInterface;

            typedef RotateAbsolute_Goal_TypeSupportInterface * RotateAbsolute_Goal_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Goal_TypeSupportInterface> RotateAbsolute_Goal_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Goal_TypeSupportInterface> RotateAbsolute_Goal_TypeSupportInterface_out;


            class RotateAbsolute_Goal_DataWriter;

            typedef RotateAbsolute_Goal_DataWriter * RotateAbsolute_Goal_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Goal_DataWriter> RotateAbsolute_Goal_DataWriter_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Goal_DataWriter> RotateAbsolute_Goal_DataWriter_out;


            class RotateAbsolute_Goal_DataReader;

            typedef RotateAbsolute_Goal_DataReader * RotateAbsolute_Goal_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Goal_DataReader> RotateAbsolute_Goal_DataReader_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Goal_DataReader> RotateAbsolute_Goal_DataReader_out;


            class RotateAbsolute_Goal_DataReaderView;

            typedef RotateAbsolute_Goal_DataReaderView * RotateAbsolute_Goal_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Goal_DataReaderView> RotateAbsolute_Goal_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Goal_DataReaderView> RotateAbsolute_Goal_DataReaderView_out;

            struct RotateAbsolute_Goal_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RotateAbsolute_Goal_, struct RotateAbsolute_Goal_Seq_uniq_> RotateAbsolute_Goal_Seq;
            typedef DDS_DCPSSequence_var < RotateAbsolute_Goal_Seq> RotateAbsolute_Goal_Seq_var;
            typedef DDS_DCPSSequence_out < RotateAbsolute_Goal_Seq> RotateAbsolute_Goal_Seq_out;

            class  RotateAbsolute_Goal_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RotateAbsolute_Goal_TypeSupportInterface_ptr _ptr_type;
                typedef RotateAbsolute_Goal_TypeSupportInterface_var _var_type;

                static RotateAbsolute_Goal_TypeSupportInterface_ptr _duplicate (RotateAbsolute_Goal_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Goal_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Goal_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Goal_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Goal_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RotateAbsolute_Goal_TypeSupportInterface () {};
                ~RotateAbsolute_Goal_TypeSupportInterface () {};
            private:
                RotateAbsolute_Goal_TypeSupportInterface (const RotateAbsolute_Goal_TypeSupportInterface &);
                RotateAbsolute_Goal_TypeSupportInterface & operator = (const RotateAbsolute_Goal_TypeSupportInterface &);
            };

            class  RotateAbsolute_Goal_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RotateAbsolute_Goal_DataWriter_ptr _ptr_type;
                typedef RotateAbsolute_Goal_DataWriter_var _var_type;

                static RotateAbsolute_Goal_DataWriter_ptr _duplicate (RotateAbsolute_Goal_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Goal_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Goal_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Goal_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Goal_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RotateAbsolute_Goal_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RotateAbsolute_Goal_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RotateAbsolute_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RotateAbsolute_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RotateAbsolute_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RotateAbsolute_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RotateAbsolute_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RotateAbsolute_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RotateAbsolute_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RotateAbsolute_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Goal_& instance_data) = 0;

            protected:
                RotateAbsolute_Goal_DataWriter () {};
                ~RotateAbsolute_Goal_DataWriter () {};
            private:
                RotateAbsolute_Goal_DataWriter (const RotateAbsolute_Goal_DataWriter &);
                RotateAbsolute_Goal_DataWriter & operator = (const RotateAbsolute_Goal_DataWriter &);
            };

            class  RotateAbsolute_Goal_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RotateAbsolute_Goal_DataReader_ptr _ptr_type;
                typedef RotateAbsolute_Goal_DataReader_var _var_type;

                static RotateAbsolute_Goal_DataReader_ptr _duplicate (RotateAbsolute_Goal_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Goal_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Goal_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Goal_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Goal_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Goal_& instance) = 0;

            protected:
                RotateAbsolute_Goal_DataReader () {};
                ~RotateAbsolute_Goal_DataReader () {};
            private:
                RotateAbsolute_Goal_DataReader (const RotateAbsolute_Goal_DataReader &);
                RotateAbsolute_Goal_DataReader & operator = (const RotateAbsolute_Goal_DataReader &);
            };

            class  RotateAbsolute_Goal_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RotateAbsolute_Goal_DataReaderView_ptr _ptr_type;
                typedef RotateAbsolute_Goal_DataReaderView_var _var_type;

                static RotateAbsolute_Goal_DataReaderView_ptr _duplicate (RotateAbsolute_Goal_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Goal_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Goal_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Goal_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Goal_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Goal_& instance) = 0;

            protected:
                RotateAbsolute_Goal_DataReaderView () {};
                ~RotateAbsolute_Goal_DataReaderView () {};
            private:
                RotateAbsolute_Goal_DataReaderView (const RotateAbsolute_Goal_DataReaderView &);
                RotateAbsolute_Goal_DataReaderView & operator = (const RotateAbsolute_Goal_DataReaderView &);
            };
            class RotateAbsolute_SendGoal_Request_TypeSupportInterface;

            typedef RotateAbsolute_SendGoal_Request_TypeSupportInterface * RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_SendGoal_Request_TypeSupportInterface> RotateAbsolute_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_SendGoal_Request_TypeSupportInterface> RotateAbsolute_SendGoal_Request_TypeSupportInterface_out;


            class RotateAbsolute_SendGoal_Request_DataWriter;

            typedef RotateAbsolute_SendGoal_Request_DataWriter * RotateAbsolute_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_SendGoal_Request_DataWriter> RotateAbsolute_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_SendGoal_Request_DataWriter> RotateAbsolute_SendGoal_Request_DataWriter_out;


            class RotateAbsolute_SendGoal_Request_DataReader;

            typedef RotateAbsolute_SendGoal_Request_DataReader * RotateAbsolute_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_SendGoal_Request_DataReader> RotateAbsolute_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_SendGoal_Request_DataReader> RotateAbsolute_SendGoal_Request_DataReader_out;


            class RotateAbsolute_SendGoal_Request_DataReaderView;

            typedef RotateAbsolute_SendGoal_Request_DataReaderView * RotateAbsolute_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_SendGoal_Request_DataReaderView> RotateAbsolute_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_SendGoal_Request_DataReaderView> RotateAbsolute_SendGoal_Request_DataReaderView_out;

            struct RotateAbsolute_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RotateAbsolute_SendGoal_Request_, struct RotateAbsolute_SendGoal_Request_Seq_uniq_> RotateAbsolute_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < RotateAbsolute_SendGoal_Request_Seq> RotateAbsolute_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < RotateAbsolute_SendGoal_Request_Seq> RotateAbsolute_SendGoal_Request_Seq_out;

            class  RotateAbsolute_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef RotateAbsolute_SendGoal_Request_TypeSupportInterface_var _var_type;

                static RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _duplicate (RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RotateAbsolute_SendGoal_Request_TypeSupportInterface () {};
                ~RotateAbsolute_SendGoal_Request_TypeSupportInterface () {};
            private:
                RotateAbsolute_SendGoal_Request_TypeSupportInterface (const RotateAbsolute_SendGoal_Request_TypeSupportInterface &);
                RotateAbsolute_SendGoal_Request_TypeSupportInterface & operator = (const RotateAbsolute_SendGoal_Request_TypeSupportInterface &);
            };

            class  RotateAbsolute_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RotateAbsolute_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef RotateAbsolute_SendGoal_Request_DataWriter_var _var_type;

                static RotateAbsolute_SendGoal_Request_DataWriter_ptr _duplicate (RotateAbsolute_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RotateAbsolute_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RotateAbsolute_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_SendGoal_Request_& instance_data) = 0;

            protected:
                RotateAbsolute_SendGoal_Request_DataWriter () {};
                ~RotateAbsolute_SendGoal_Request_DataWriter () {};
            private:
                RotateAbsolute_SendGoal_Request_DataWriter (const RotateAbsolute_SendGoal_Request_DataWriter &);
                RotateAbsolute_SendGoal_Request_DataWriter & operator = (const RotateAbsolute_SendGoal_Request_DataWriter &);
            };

            class  RotateAbsolute_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RotateAbsolute_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef RotateAbsolute_SendGoal_Request_DataReader_var _var_type;

                static RotateAbsolute_SendGoal_Request_DataReader_ptr _duplicate (RotateAbsolute_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_SendGoal_Request_& instance) = 0;

            protected:
                RotateAbsolute_SendGoal_Request_DataReader () {};
                ~RotateAbsolute_SendGoal_Request_DataReader () {};
            private:
                RotateAbsolute_SendGoal_Request_DataReader (const RotateAbsolute_SendGoal_Request_DataReader &);
                RotateAbsolute_SendGoal_Request_DataReader & operator = (const RotateAbsolute_SendGoal_Request_DataReader &);
            };

            class  RotateAbsolute_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RotateAbsolute_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef RotateAbsolute_SendGoal_Request_DataReaderView_var _var_type;

                static RotateAbsolute_SendGoal_Request_DataReaderView_ptr _duplicate (RotateAbsolute_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_SendGoal_Request_& instance) = 0;

            protected:
                RotateAbsolute_SendGoal_Request_DataReaderView () {};
                ~RotateAbsolute_SendGoal_Request_DataReaderView () {};
            private:
                RotateAbsolute_SendGoal_Request_DataReaderView (const RotateAbsolute_SendGoal_Request_DataReaderView &);
                RotateAbsolute_SendGoal_Request_DataReaderView & operator = (const RotateAbsolute_SendGoal_Request_DataReaderView &);
            };
            class RotateAbsolute_SendGoal_Response_TypeSupportInterface;

            typedef RotateAbsolute_SendGoal_Response_TypeSupportInterface * RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_SendGoal_Response_TypeSupportInterface> RotateAbsolute_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_SendGoal_Response_TypeSupportInterface> RotateAbsolute_SendGoal_Response_TypeSupportInterface_out;


            class RotateAbsolute_SendGoal_Response_DataWriter;

            typedef RotateAbsolute_SendGoal_Response_DataWriter * RotateAbsolute_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_SendGoal_Response_DataWriter> RotateAbsolute_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_SendGoal_Response_DataWriter> RotateAbsolute_SendGoal_Response_DataWriter_out;


            class RotateAbsolute_SendGoal_Response_DataReader;

            typedef RotateAbsolute_SendGoal_Response_DataReader * RotateAbsolute_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_SendGoal_Response_DataReader> RotateAbsolute_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_SendGoal_Response_DataReader> RotateAbsolute_SendGoal_Response_DataReader_out;


            class RotateAbsolute_SendGoal_Response_DataReaderView;

            typedef RotateAbsolute_SendGoal_Response_DataReaderView * RotateAbsolute_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_SendGoal_Response_DataReaderView> RotateAbsolute_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_SendGoal_Response_DataReaderView> RotateAbsolute_SendGoal_Response_DataReaderView_out;

            struct RotateAbsolute_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RotateAbsolute_SendGoal_Response_, struct RotateAbsolute_SendGoal_Response_Seq_uniq_> RotateAbsolute_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < RotateAbsolute_SendGoal_Response_Seq> RotateAbsolute_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < RotateAbsolute_SendGoal_Response_Seq> RotateAbsolute_SendGoal_Response_Seq_out;

            class  RotateAbsolute_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef RotateAbsolute_SendGoal_Response_TypeSupportInterface_var _var_type;

                static RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _duplicate (RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RotateAbsolute_SendGoal_Response_TypeSupportInterface () {};
                ~RotateAbsolute_SendGoal_Response_TypeSupportInterface () {};
            private:
                RotateAbsolute_SendGoal_Response_TypeSupportInterface (const RotateAbsolute_SendGoal_Response_TypeSupportInterface &);
                RotateAbsolute_SendGoal_Response_TypeSupportInterface & operator = (const RotateAbsolute_SendGoal_Response_TypeSupportInterface &);
            };

            class  RotateAbsolute_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RotateAbsolute_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef RotateAbsolute_SendGoal_Response_DataWriter_var _var_type;

                static RotateAbsolute_SendGoal_Response_DataWriter_ptr _duplicate (RotateAbsolute_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RotateAbsolute_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RotateAbsolute_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_SendGoal_Response_& instance_data) = 0;

            protected:
                RotateAbsolute_SendGoal_Response_DataWriter () {};
                ~RotateAbsolute_SendGoal_Response_DataWriter () {};
            private:
                RotateAbsolute_SendGoal_Response_DataWriter (const RotateAbsolute_SendGoal_Response_DataWriter &);
                RotateAbsolute_SendGoal_Response_DataWriter & operator = (const RotateAbsolute_SendGoal_Response_DataWriter &);
            };

            class  RotateAbsolute_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RotateAbsolute_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef RotateAbsolute_SendGoal_Response_DataReader_var _var_type;

                static RotateAbsolute_SendGoal_Response_DataReader_ptr _duplicate (RotateAbsolute_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_SendGoal_Response_& instance) = 0;

            protected:
                RotateAbsolute_SendGoal_Response_DataReader () {};
                ~RotateAbsolute_SendGoal_Response_DataReader () {};
            private:
                RotateAbsolute_SendGoal_Response_DataReader (const RotateAbsolute_SendGoal_Response_DataReader &);
                RotateAbsolute_SendGoal_Response_DataReader & operator = (const RotateAbsolute_SendGoal_Response_DataReader &);
            };

            class  RotateAbsolute_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RotateAbsolute_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef RotateAbsolute_SendGoal_Response_DataReaderView_var _var_type;

                static RotateAbsolute_SendGoal_Response_DataReaderView_ptr _duplicate (RotateAbsolute_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_SendGoal_Response_& instance) = 0;

            protected:
                RotateAbsolute_SendGoal_Response_DataReaderView () {};
                ~RotateAbsolute_SendGoal_Response_DataReaderView () {};
            private:
                RotateAbsolute_SendGoal_Response_DataReaderView (const RotateAbsolute_SendGoal_Response_DataReaderView &);
                RotateAbsolute_SendGoal_Response_DataReaderView & operator = (const RotateAbsolute_SendGoal_Response_DataReaderView &);
            };
            class Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface;

            typedef Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface * Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface> Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface> Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_out;


            class Sample_RotateAbsolute_SendGoal_Request_DataWriter;

            typedef Sample_RotateAbsolute_SendGoal_Request_DataWriter * Sample_RotateAbsolute_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_SendGoal_Request_DataWriter> Sample_RotateAbsolute_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_SendGoal_Request_DataWriter> Sample_RotateAbsolute_SendGoal_Request_DataWriter_out;


            class Sample_RotateAbsolute_SendGoal_Request_DataReader;

            typedef Sample_RotateAbsolute_SendGoal_Request_DataReader * Sample_RotateAbsolute_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_SendGoal_Request_DataReader> Sample_RotateAbsolute_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_SendGoal_Request_DataReader> Sample_RotateAbsolute_SendGoal_Request_DataReader_out;


            class Sample_RotateAbsolute_SendGoal_Request_DataReaderView;

            typedef Sample_RotateAbsolute_SendGoal_Request_DataReaderView * Sample_RotateAbsolute_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_SendGoal_Request_DataReaderView> Sample_RotateAbsolute_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_SendGoal_Request_DataReaderView> Sample_RotateAbsolute_SendGoal_Request_DataReaderView_out;

            struct Sample_RotateAbsolute_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_RotateAbsolute_SendGoal_Request_, struct Sample_RotateAbsolute_SendGoal_Request_Seq_uniq_> Sample_RotateAbsolute_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_RotateAbsolute_SendGoal_Request_Seq> Sample_RotateAbsolute_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_RotateAbsolute_SendGoal_Request_Seq> Sample_RotateAbsolute_SendGoal_Request_Seq_out;

            class  Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_var _var_type;

                static Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _duplicate (Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface () {};
                ~Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface () {};
            private:
                Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface (const Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface &);
                Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface & operator = (const Sample_RotateAbsolute_SendGoal_Request_TypeSupportInterface &);
            };

            class  Sample_RotateAbsolute_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_RotateAbsolute_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef Sample_RotateAbsolute_SendGoal_Request_DataWriter_var _var_type;

                static Sample_RotateAbsolute_SendGoal_Request_DataWriter_ptr _duplicate (Sample_RotateAbsolute_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_RotateAbsolute_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_RotateAbsolute_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_SendGoal_Request_& instance_data) = 0;

            protected:
                Sample_RotateAbsolute_SendGoal_Request_DataWriter () {};
                ~Sample_RotateAbsolute_SendGoal_Request_DataWriter () {};
            private:
                Sample_RotateAbsolute_SendGoal_Request_DataWriter (const Sample_RotateAbsolute_SendGoal_Request_DataWriter &);
                Sample_RotateAbsolute_SendGoal_Request_DataWriter & operator = (const Sample_RotateAbsolute_SendGoal_Request_DataWriter &);
            };

            class  Sample_RotateAbsolute_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_RotateAbsolute_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef Sample_RotateAbsolute_SendGoal_Request_DataReader_var _var_type;

                static Sample_RotateAbsolute_SendGoal_Request_DataReader_ptr _duplicate (Sample_RotateAbsolute_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_RotateAbsolute_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_RotateAbsolute_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_SendGoal_Request_& instance) = 0;

            protected:
                Sample_RotateAbsolute_SendGoal_Request_DataReader () {};
                ~Sample_RotateAbsolute_SendGoal_Request_DataReader () {};
            private:
                Sample_RotateAbsolute_SendGoal_Request_DataReader (const Sample_RotateAbsolute_SendGoal_Request_DataReader &);
                Sample_RotateAbsolute_SendGoal_Request_DataReader & operator = (const Sample_RotateAbsolute_SendGoal_Request_DataReader &);
            };

            class  Sample_RotateAbsolute_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_RotateAbsolute_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_RotateAbsolute_SendGoal_Request_DataReaderView_var _var_type;

                static Sample_RotateAbsolute_SendGoal_Request_DataReaderView_ptr _duplicate (Sample_RotateAbsolute_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_RotateAbsolute_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_RotateAbsolute_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_RotateAbsolute_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_SendGoal_Request_& instance) = 0;

            protected:
                Sample_RotateAbsolute_SendGoal_Request_DataReaderView () {};
                ~Sample_RotateAbsolute_SendGoal_Request_DataReaderView () {};
            private:
                Sample_RotateAbsolute_SendGoal_Request_DataReaderView (const Sample_RotateAbsolute_SendGoal_Request_DataReaderView &);
                Sample_RotateAbsolute_SendGoal_Request_DataReaderView & operator = (const Sample_RotateAbsolute_SendGoal_Request_DataReaderView &);
            };
            class Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface;

            typedef Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface * Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface> Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface> Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_out;


            class Sample_RotateAbsolute_SendGoal_Response_DataWriter;

            typedef Sample_RotateAbsolute_SendGoal_Response_DataWriter * Sample_RotateAbsolute_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_SendGoal_Response_DataWriter> Sample_RotateAbsolute_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_SendGoal_Response_DataWriter> Sample_RotateAbsolute_SendGoal_Response_DataWriter_out;


            class Sample_RotateAbsolute_SendGoal_Response_DataReader;

            typedef Sample_RotateAbsolute_SendGoal_Response_DataReader * Sample_RotateAbsolute_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_SendGoal_Response_DataReader> Sample_RotateAbsolute_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_SendGoal_Response_DataReader> Sample_RotateAbsolute_SendGoal_Response_DataReader_out;


            class Sample_RotateAbsolute_SendGoal_Response_DataReaderView;

            typedef Sample_RotateAbsolute_SendGoal_Response_DataReaderView * Sample_RotateAbsolute_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_SendGoal_Response_DataReaderView> Sample_RotateAbsolute_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_SendGoal_Response_DataReaderView> Sample_RotateAbsolute_SendGoal_Response_DataReaderView_out;

            struct Sample_RotateAbsolute_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_RotateAbsolute_SendGoal_Response_, struct Sample_RotateAbsolute_SendGoal_Response_Seq_uniq_> Sample_RotateAbsolute_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_RotateAbsolute_SendGoal_Response_Seq> Sample_RotateAbsolute_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_RotateAbsolute_SendGoal_Response_Seq> Sample_RotateAbsolute_SendGoal_Response_Seq_out;

            class  Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_var _var_type;

                static Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _duplicate (Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface () {};
                ~Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface () {};
            private:
                Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface (const Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface &);
                Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface & operator = (const Sample_RotateAbsolute_SendGoal_Response_TypeSupportInterface &);
            };

            class  Sample_RotateAbsolute_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_RotateAbsolute_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef Sample_RotateAbsolute_SendGoal_Response_DataWriter_var _var_type;

                static Sample_RotateAbsolute_SendGoal_Response_DataWriter_ptr _duplicate (Sample_RotateAbsolute_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_RotateAbsolute_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_RotateAbsolute_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_SendGoal_Response_& instance_data) = 0;

            protected:
                Sample_RotateAbsolute_SendGoal_Response_DataWriter () {};
                ~Sample_RotateAbsolute_SendGoal_Response_DataWriter () {};
            private:
                Sample_RotateAbsolute_SendGoal_Response_DataWriter (const Sample_RotateAbsolute_SendGoal_Response_DataWriter &);
                Sample_RotateAbsolute_SendGoal_Response_DataWriter & operator = (const Sample_RotateAbsolute_SendGoal_Response_DataWriter &);
            };

            class  Sample_RotateAbsolute_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_RotateAbsolute_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef Sample_RotateAbsolute_SendGoal_Response_DataReader_var _var_type;

                static Sample_RotateAbsolute_SendGoal_Response_DataReader_ptr _duplicate (Sample_RotateAbsolute_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_RotateAbsolute_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_RotateAbsolute_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_SendGoal_Response_& instance) = 0;

            protected:
                Sample_RotateAbsolute_SendGoal_Response_DataReader () {};
                ~Sample_RotateAbsolute_SendGoal_Response_DataReader () {};
            private:
                Sample_RotateAbsolute_SendGoal_Response_DataReader (const Sample_RotateAbsolute_SendGoal_Response_DataReader &);
                Sample_RotateAbsolute_SendGoal_Response_DataReader & operator = (const Sample_RotateAbsolute_SendGoal_Response_DataReader &);
            };

            class  Sample_RotateAbsolute_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_RotateAbsolute_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_RotateAbsolute_SendGoal_Response_DataReaderView_var _var_type;

                static Sample_RotateAbsolute_SendGoal_Response_DataReaderView_ptr _duplicate (Sample_RotateAbsolute_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_RotateAbsolute_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_RotateAbsolute_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_RotateAbsolute_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_SendGoal_Response_& instance) = 0;

            protected:
                Sample_RotateAbsolute_SendGoal_Response_DataReaderView () {};
                ~Sample_RotateAbsolute_SendGoal_Response_DataReaderView () {};
            private:
                Sample_RotateAbsolute_SendGoal_Response_DataReaderView (const Sample_RotateAbsolute_SendGoal_Response_DataReaderView &);
                Sample_RotateAbsolute_SendGoal_Response_DataReaderView & operator = (const Sample_RotateAbsolute_SendGoal_Response_DataReaderView &);
            };
            class RotateAbsolute_Result_TypeSupportInterface;

            typedef RotateAbsolute_Result_TypeSupportInterface * RotateAbsolute_Result_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Result_TypeSupportInterface> RotateAbsolute_Result_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Result_TypeSupportInterface> RotateAbsolute_Result_TypeSupportInterface_out;


            class RotateAbsolute_Result_DataWriter;

            typedef RotateAbsolute_Result_DataWriter * RotateAbsolute_Result_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Result_DataWriter> RotateAbsolute_Result_DataWriter_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Result_DataWriter> RotateAbsolute_Result_DataWriter_out;


            class RotateAbsolute_Result_DataReader;

            typedef RotateAbsolute_Result_DataReader * RotateAbsolute_Result_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Result_DataReader> RotateAbsolute_Result_DataReader_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Result_DataReader> RotateAbsolute_Result_DataReader_out;


            class RotateAbsolute_Result_DataReaderView;

            typedef RotateAbsolute_Result_DataReaderView * RotateAbsolute_Result_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Result_DataReaderView> RotateAbsolute_Result_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Result_DataReaderView> RotateAbsolute_Result_DataReaderView_out;

            struct RotateAbsolute_Result_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RotateAbsolute_Result_, struct RotateAbsolute_Result_Seq_uniq_> RotateAbsolute_Result_Seq;
            typedef DDS_DCPSSequence_var < RotateAbsolute_Result_Seq> RotateAbsolute_Result_Seq_var;
            typedef DDS_DCPSSequence_out < RotateAbsolute_Result_Seq> RotateAbsolute_Result_Seq_out;

            class  RotateAbsolute_Result_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RotateAbsolute_Result_TypeSupportInterface_ptr _ptr_type;
                typedef RotateAbsolute_Result_TypeSupportInterface_var _var_type;

                static RotateAbsolute_Result_TypeSupportInterface_ptr _duplicate (RotateAbsolute_Result_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Result_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Result_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Result_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Result_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RotateAbsolute_Result_TypeSupportInterface () {};
                ~RotateAbsolute_Result_TypeSupportInterface () {};
            private:
                RotateAbsolute_Result_TypeSupportInterface (const RotateAbsolute_Result_TypeSupportInterface &);
                RotateAbsolute_Result_TypeSupportInterface & operator = (const RotateAbsolute_Result_TypeSupportInterface &);
            };

            class  RotateAbsolute_Result_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RotateAbsolute_Result_DataWriter_ptr _ptr_type;
                typedef RotateAbsolute_Result_DataWriter_var _var_type;

                static RotateAbsolute_Result_DataWriter_ptr _duplicate (RotateAbsolute_Result_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Result_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Result_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Result_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Result_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RotateAbsolute_Result_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RotateAbsolute_Result_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RotateAbsolute_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RotateAbsolute_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RotateAbsolute_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RotateAbsolute_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RotateAbsolute_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RotateAbsolute_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RotateAbsolute_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RotateAbsolute_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Result_& instance_data) = 0;

            protected:
                RotateAbsolute_Result_DataWriter () {};
                ~RotateAbsolute_Result_DataWriter () {};
            private:
                RotateAbsolute_Result_DataWriter (const RotateAbsolute_Result_DataWriter &);
                RotateAbsolute_Result_DataWriter & operator = (const RotateAbsolute_Result_DataWriter &);
            };

            class  RotateAbsolute_Result_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RotateAbsolute_Result_DataReader_ptr _ptr_type;
                typedef RotateAbsolute_Result_DataReader_var _var_type;

                static RotateAbsolute_Result_DataReader_ptr _duplicate (RotateAbsolute_Result_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Result_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Result_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Result_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Result_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Result_& instance) = 0;

            protected:
                RotateAbsolute_Result_DataReader () {};
                ~RotateAbsolute_Result_DataReader () {};
            private:
                RotateAbsolute_Result_DataReader (const RotateAbsolute_Result_DataReader &);
                RotateAbsolute_Result_DataReader & operator = (const RotateAbsolute_Result_DataReader &);
            };

            class  RotateAbsolute_Result_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RotateAbsolute_Result_DataReaderView_ptr _ptr_type;
                typedef RotateAbsolute_Result_DataReaderView_var _var_type;

                static RotateAbsolute_Result_DataReaderView_ptr _duplicate (RotateAbsolute_Result_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Result_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Result_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Result_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Result_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Result_& instance) = 0;

            protected:
                RotateAbsolute_Result_DataReaderView () {};
                ~RotateAbsolute_Result_DataReaderView () {};
            private:
                RotateAbsolute_Result_DataReaderView (const RotateAbsolute_Result_DataReaderView &);
                RotateAbsolute_Result_DataReaderView & operator = (const RotateAbsolute_Result_DataReaderView &);
            };
            class RotateAbsolute_GetResult_Request_TypeSupportInterface;

            typedef RotateAbsolute_GetResult_Request_TypeSupportInterface * RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_GetResult_Request_TypeSupportInterface> RotateAbsolute_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_GetResult_Request_TypeSupportInterface> RotateAbsolute_GetResult_Request_TypeSupportInterface_out;


            class RotateAbsolute_GetResult_Request_DataWriter;

            typedef RotateAbsolute_GetResult_Request_DataWriter * RotateAbsolute_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_GetResult_Request_DataWriter> RotateAbsolute_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_GetResult_Request_DataWriter> RotateAbsolute_GetResult_Request_DataWriter_out;


            class RotateAbsolute_GetResult_Request_DataReader;

            typedef RotateAbsolute_GetResult_Request_DataReader * RotateAbsolute_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_GetResult_Request_DataReader> RotateAbsolute_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_GetResult_Request_DataReader> RotateAbsolute_GetResult_Request_DataReader_out;


            class RotateAbsolute_GetResult_Request_DataReaderView;

            typedef RotateAbsolute_GetResult_Request_DataReaderView * RotateAbsolute_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_GetResult_Request_DataReaderView> RotateAbsolute_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_GetResult_Request_DataReaderView> RotateAbsolute_GetResult_Request_DataReaderView_out;

            struct RotateAbsolute_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RotateAbsolute_GetResult_Request_, struct RotateAbsolute_GetResult_Request_Seq_uniq_> RotateAbsolute_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < RotateAbsolute_GetResult_Request_Seq> RotateAbsolute_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < RotateAbsolute_GetResult_Request_Seq> RotateAbsolute_GetResult_Request_Seq_out;

            class  RotateAbsolute_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef RotateAbsolute_GetResult_Request_TypeSupportInterface_var _var_type;

                static RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _duplicate (RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RotateAbsolute_GetResult_Request_TypeSupportInterface () {};
                ~RotateAbsolute_GetResult_Request_TypeSupportInterface () {};
            private:
                RotateAbsolute_GetResult_Request_TypeSupportInterface (const RotateAbsolute_GetResult_Request_TypeSupportInterface &);
                RotateAbsolute_GetResult_Request_TypeSupportInterface & operator = (const RotateAbsolute_GetResult_Request_TypeSupportInterface &);
            };

            class  RotateAbsolute_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RotateAbsolute_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef RotateAbsolute_GetResult_Request_DataWriter_var _var_type;

                static RotateAbsolute_GetResult_Request_DataWriter_ptr _duplicate (RotateAbsolute_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RotateAbsolute_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RotateAbsolute_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_GetResult_Request_& instance_data) = 0;

            protected:
                RotateAbsolute_GetResult_Request_DataWriter () {};
                ~RotateAbsolute_GetResult_Request_DataWriter () {};
            private:
                RotateAbsolute_GetResult_Request_DataWriter (const RotateAbsolute_GetResult_Request_DataWriter &);
                RotateAbsolute_GetResult_Request_DataWriter & operator = (const RotateAbsolute_GetResult_Request_DataWriter &);
            };

            class  RotateAbsolute_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RotateAbsolute_GetResult_Request_DataReader_ptr _ptr_type;
                typedef RotateAbsolute_GetResult_Request_DataReader_var _var_type;

                static RotateAbsolute_GetResult_Request_DataReader_ptr _duplicate (RotateAbsolute_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_GetResult_Request_& instance) = 0;

            protected:
                RotateAbsolute_GetResult_Request_DataReader () {};
                ~RotateAbsolute_GetResult_Request_DataReader () {};
            private:
                RotateAbsolute_GetResult_Request_DataReader (const RotateAbsolute_GetResult_Request_DataReader &);
                RotateAbsolute_GetResult_Request_DataReader & operator = (const RotateAbsolute_GetResult_Request_DataReader &);
            };

            class  RotateAbsolute_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RotateAbsolute_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef RotateAbsolute_GetResult_Request_DataReaderView_var _var_type;

                static RotateAbsolute_GetResult_Request_DataReaderView_ptr _duplicate (RotateAbsolute_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_GetResult_Request_& instance) = 0;

            protected:
                RotateAbsolute_GetResult_Request_DataReaderView () {};
                ~RotateAbsolute_GetResult_Request_DataReaderView () {};
            private:
                RotateAbsolute_GetResult_Request_DataReaderView (const RotateAbsolute_GetResult_Request_DataReaderView &);
                RotateAbsolute_GetResult_Request_DataReaderView & operator = (const RotateAbsolute_GetResult_Request_DataReaderView &);
            };
            class RotateAbsolute_GetResult_Response_TypeSupportInterface;

            typedef RotateAbsolute_GetResult_Response_TypeSupportInterface * RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_GetResult_Response_TypeSupportInterface> RotateAbsolute_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_GetResult_Response_TypeSupportInterface> RotateAbsolute_GetResult_Response_TypeSupportInterface_out;


            class RotateAbsolute_GetResult_Response_DataWriter;

            typedef RotateAbsolute_GetResult_Response_DataWriter * RotateAbsolute_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_GetResult_Response_DataWriter> RotateAbsolute_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_GetResult_Response_DataWriter> RotateAbsolute_GetResult_Response_DataWriter_out;


            class RotateAbsolute_GetResult_Response_DataReader;

            typedef RotateAbsolute_GetResult_Response_DataReader * RotateAbsolute_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_GetResult_Response_DataReader> RotateAbsolute_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_GetResult_Response_DataReader> RotateAbsolute_GetResult_Response_DataReader_out;


            class RotateAbsolute_GetResult_Response_DataReaderView;

            typedef RotateAbsolute_GetResult_Response_DataReaderView * RotateAbsolute_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_GetResult_Response_DataReaderView> RotateAbsolute_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_GetResult_Response_DataReaderView> RotateAbsolute_GetResult_Response_DataReaderView_out;

            struct RotateAbsolute_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RotateAbsolute_GetResult_Response_, struct RotateAbsolute_GetResult_Response_Seq_uniq_> RotateAbsolute_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < RotateAbsolute_GetResult_Response_Seq> RotateAbsolute_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < RotateAbsolute_GetResult_Response_Seq> RotateAbsolute_GetResult_Response_Seq_out;

            class  RotateAbsolute_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef RotateAbsolute_GetResult_Response_TypeSupportInterface_var _var_type;

                static RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _duplicate (RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RotateAbsolute_GetResult_Response_TypeSupportInterface () {};
                ~RotateAbsolute_GetResult_Response_TypeSupportInterface () {};
            private:
                RotateAbsolute_GetResult_Response_TypeSupportInterface (const RotateAbsolute_GetResult_Response_TypeSupportInterface &);
                RotateAbsolute_GetResult_Response_TypeSupportInterface & operator = (const RotateAbsolute_GetResult_Response_TypeSupportInterface &);
            };

            class  RotateAbsolute_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RotateAbsolute_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef RotateAbsolute_GetResult_Response_DataWriter_var _var_type;

                static RotateAbsolute_GetResult_Response_DataWriter_ptr _duplicate (RotateAbsolute_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RotateAbsolute_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RotateAbsolute_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_GetResult_Response_& instance_data) = 0;

            protected:
                RotateAbsolute_GetResult_Response_DataWriter () {};
                ~RotateAbsolute_GetResult_Response_DataWriter () {};
            private:
                RotateAbsolute_GetResult_Response_DataWriter (const RotateAbsolute_GetResult_Response_DataWriter &);
                RotateAbsolute_GetResult_Response_DataWriter & operator = (const RotateAbsolute_GetResult_Response_DataWriter &);
            };

            class  RotateAbsolute_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RotateAbsolute_GetResult_Response_DataReader_ptr _ptr_type;
                typedef RotateAbsolute_GetResult_Response_DataReader_var _var_type;

                static RotateAbsolute_GetResult_Response_DataReader_ptr _duplicate (RotateAbsolute_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_GetResult_Response_& instance) = 0;

            protected:
                RotateAbsolute_GetResult_Response_DataReader () {};
                ~RotateAbsolute_GetResult_Response_DataReader () {};
            private:
                RotateAbsolute_GetResult_Response_DataReader (const RotateAbsolute_GetResult_Response_DataReader &);
                RotateAbsolute_GetResult_Response_DataReader & operator = (const RotateAbsolute_GetResult_Response_DataReader &);
            };

            class  RotateAbsolute_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RotateAbsolute_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef RotateAbsolute_GetResult_Response_DataReaderView_var _var_type;

                static RotateAbsolute_GetResult_Response_DataReaderView_ptr _duplicate (RotateAbsolute_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_GetResult_Response_& instance) = 0;

            protected:
                RotateAbsolute_GetResult_Response_DataReaderView () {};
                ~RotateAbsolute_GetResult_Response_DataReaderView () {};
            private:
                RotateAbsolute_GetResult_Response_DataReaderView (const RotateAbsolute_GetResult_Response_DataReaderView &);
                RotateAbsolute_GetResult_Response_DataReaderView & operator = (const RotateAbsolute_GetResult_Response_DataReaderView &);
            };
            class Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface;

            typedef Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface * Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface> Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface> Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_out;


            class Sample_RotateAbsolute_GetResult_Request_DataWriter;

            typedef Sample_RotateAbsolute_GetResult_Request_DataWriter * Sample_RotateAbsolute_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_GetResult_Request_DataWriter> Sample_RotateAbsolute_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_GetResult_Request_DataWriter> Sample_RotateAbsolute_GetResult_Request_DataWriter_out;


            class Sample_RotateAbsolute_GetResult_Request_DataReader;

            typedef Sample_RotateAbsolute_GetResult_Request_DataReader * Sample_RotateAbsolute_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_GetResult_Request_DataReader> Sample_RotateAbsolute_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_GetResult_Request_DataReader> Sample_RotateAbsolute_GetResult_Request_DataReader_out;


            class Sample_RotateAbsolute_GetResult_Request_DataReaderView;

            typedef Sample_RotateAbsolute_GetResult_Request_DataReaderView * Sample_RotateAbsolute_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_GetResult_Request_DataReaderView> Sample_RotateAbsolute_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_GetResult_Request_DataReaderView> Sample_RotateAbsolute_GetResult_Request_DataReaderView_out;

            struct Sample_RotateAbsolute_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_RotateAbsolute_GetResult_Request_, struct Sample_RotateAbsolute_GetResult_Request_Seq_uniq_> Sample_RotateAbsolute_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_RotateAbsolute_GetResult_Request_Seq> Sample_RotateAbsolute_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_RotateAbsolute_GetResult_Request_Seq> Sample_RotateAbsolute_GetResult_Request_Seq_out;

            class  Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_var _var_type;

                static Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _duplicate (Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface () {};
                ~Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface () {};
            private:
                Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface (const Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface &);
                Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface & operator = (const Sample_RotateAbsolute_GetResult_Request_TypeSupportInterface &);
            };

            class  Sample_RotateAbsolute_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_RotateAbsolute_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef Sample_RotateAbsolute_GetResult_Request_DataWriter_var _var_type;

                static Sample_RotateAbsolute_GetResult_Request_DataWriter_ptr _duplicate (Sample_RotateAbsolute_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_RotateAbsolute_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_RotateAbsolute_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_RotateAbsolute_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_GetResult_Request_& instance_data) = 0;

            protected:
                Sample_RotateAbsolute_GetResult_Request_DataWriter () {};
                ~Sample_RotateAbsolute_GetResult_Request_DataWriter () {};
            private:
                Sample_RotateAbsolute_GetResult_Request_DataWriter (const Sample_RotateAbsolute_GetResult_Request_DataWriter &);
                Sample_RotateAbsolute_GetResult_Request_DataWriter & operator = (const Sample_RotateAbsolute_GetResult_Request_DataWriter &);
            };

            class  Sample_RotateAbsolute_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_RotateAbsolute_GetResult_Request_DataReader_ptr _ptr_type;
                typedef Sample_RotateAbsolute_GetResult_Request_DataReader_var _var_type;

                static Sample_RotateAbsolute_GetResult_Request_DataReader_ptr _duplicate (Sample_RotateAbsolute_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_RotateAbsolute_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_RotateAbsolute_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_GetResult_Request_& instance) = 0;

            protected:
                Sample_RotateAbsolute_GetResult_Request_DataReader () {};
                ~Sample_RotateAbsolute_GetResult_Request_DataReader () {};
            private:
                Sample_RotateAbsolute_GetResult_Request_DataReader (const Sample_RotateAbsolute_GetResult_Request_DataReader &);
                Sample_RotateAbsolute_GetResult_Request_DataReader & operator = (const Sample_RotateAbsolute_GetResult_Request_DataReader &);
            };

            class  Sample_RotateAbsolute_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_RotateAbsolute_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_RotateAbsolute_GetResult_Request_DataReaderView_var _var_type;

                static Sample_RotateAbsolute_GetResult_Request_DataReaderView_ptr _duplicate (Sample_RotateAbsolute_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_RotateAbsolute_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_RotateAbsolute_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_RotateAbsolute_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_GetResult_Request_& instance) = 0;

            protected:
                Sample_RotateAbsolute_GetResult_Request_DataReaderView () {};
                ~Sample_RotateAbsolute_GetResult_Request_DataReaderView () {};
            private:
                Sample_RotateAbsolute_GetResult_Request_DataReaderView (const Sample_RotateAbsolute_GetResult_Request_DataReaderView &);
                Sample_RotateAbsolute_GetResult_Request_DataReaderView & operator = (const Sample_RotateAbsolute_GetResult_Request_DataReaderView &);
            };
            class Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface;

            typedef Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface * Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface> Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface> Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_out;


            class Sample_RotateAbsolute_GetResult_Response_DataWriter;

            typedef Sample_RotateAbsolute_GetResult_Response_DataWriter * Sample_RotateAbsolute_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_GetResult_Response_DataWriter> Sample_RotateAbsolute_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_GetResult_Response_DataWriter> Sample_RotateAbsolute_GetResult_Response_DataWriter_out;


            class Sample_RotateAbsolute_GetResult_Response_DataReader;

            typedef Sample_RotateAbsolute_GetResult_Response_DataReader * Sample_RotateAbsolute_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_GetResult_Response_DataReader> Sample_RotateAbsolute_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_GetResult_Response_DataReader> Sample_RotateAbsolute_GetResult_Response_DataReader_out;


            class Sample_RotateAbsolute_GetResult_Response_DataReaderView;

            typedef Sample_RotateAbsolute_GetResult_Response_DataReaderView * Sample_RotateAbsolute_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_RotateAbsolute_GetResult_Response_DataReaderView> Sample_RotateAbsolute_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_RotateAbsolute_GetResult_Response_DataReaderView> Sample_RotateAbsolute_GetResult_Response_DataReaderView_out;

            struct Sample_RotateAbsolute_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_RotateAbsolute_GetResult_Response_, struct Sample_RotateAbsolute_GetResult_Response_Seq_uniq_> Sample_RotateAbsolute_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_RotateAbsolute_GetResult_Response_Seq> Sample_RotateAbsolute_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_RotateAbsolute_GetResult_Response_Seq> Sample_RotateAbsolute_GetResult_Response_Seq_out;

            class  Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_var _var_type;

                static Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _duplicate (Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface () {};
                ~Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface () {};
            private:
                Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface (const Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface &);
                Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface & operator = (const Sample_RotateAbsolute_GetResult_Response_TypeSupportInterface &);
            };

            class  Sample_RotateAbsolute_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_RotateAbsolute_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef Sample_RotateAbsolute_GetResult_Response_DataWriter_var _var_type;

                static Sample_RotateAbsolute_GetResult_Response_DataWriter_ptr _duplicate (Sample_RotateAbsolute_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_RotateAbsolute_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_RotateAbsolute_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_RotateAbsolute_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_GetResult_Response_& instance_data) = 0;

            protected:
                Sample_RotateAbsolute_GetResult_Response_DataWriter () {};
                ~Sample_RotateAbsolute_GetResult_Response_DataWriter () {};
            private:
                Sample_RotateAbsolute_GetResult_Response_DataWriter (const Sample_RotateAbsolute_GetResult_Response_DataWriter &);
                Sample_RotateAbsolute_GetResult_Response_DataWriter & operator = (const Sample_RotateAbsolute_GetResult_Response_DataWriter &);
            };

            class  Sample_RotateAbsolute_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_RotateAbsolute_GetResult_Response_DataReader_ptr _ptr_type;
                typedef Sample_RotateAbsolute_GetResult_Response_DataReader_var _var_type;

                static Sample_RotateAbsolute_GetResult_Response_DataReader_ptr _duplicate (Sample_RotateAbsolute_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_RotateAbsolute_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_RotateAbsolute_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_GetResult_Response_& instance) = 0;

            protected:
                Sample_RotateAbsolute_GetResult_Response_DataReader () {};
                ~Sample_RotateAbsolute_GetResult_Response_DataReader () {};
            private:
                Sample_RotateAbsolute_GetResult_Response_DataReader (const Sample_RotateAbsolute_GetResult_Response_DataReader &);
                Sample_RotateAbsolute_GetResult_Response_DataReader & operator = (const Sample_RotateAbsolute_GetResult_Response_DataReader &);
            };

            class  Sample_RotateAbsolute_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_RotateAbsolute_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_RotateAbsolute_GetResult_Response_DataReaderView_var _var_type;

                static Sample_RotateAbsolute_GetResult_Response_DataReaderView_ptr _duplicate (Sample_RotateAbsolute_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_RotateAbsolute_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_RotateAbsolute_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_RotateAbsolute_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_RotateAbsolute_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_RotateAbsolute_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_RotateAbsolute_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_RotateAbsolute_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_RotateAbsolute_GetResult_Response_& instance) = 0;

            protected:
                Sample_RotateAbsolute_GetResult_Response_DataReaderView () {};
                ~Sample_RotateAbsolute_GetResult_Response_DataReaderView () {};
            private:
                Sample_RotateAbsolute_GetResult_Response_DataReaderView (const Sample_RotateAbsolute_GetResult_Response_DataReaderView &);
                Sample_RotateAbsolute_GetResult_Response_DataReaderView & operator = (const Sample_RotateAbsolute_GetResult_Response_DataReaderView &);
            };
            class RotateAbsolute_Feedback_TypeSupportInterface;

            typedef RotateAbsolute_Feedback_TypeSupportInterface * RotateAbsolute_Feedback_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Feedback_TypeSupportInterface> RotateAbsolute_Feedback_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Feedback_TypeSupportInterface> RotateAbsolute_Feedback_TypeSupportInterface_out;


            class RotateAbsolute_Feedback_DataWriter;

            typedef RotateAbsolute_Feedback_DataWriter * RotateAbsolute_Feedback_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Feedback_DataWriter> RotateAbsolute_Feedback_DataWriter_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Feedback_DataWriter> RotateAbsolute_Feedback_DataWriter_out;


            class RotateAbsolute_Feedback_DataReader;

            typedef RotateAbsolute_Feedback_DataReader * RotateAbsolute_Feedback_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Feedback_DataReader> RotateAbsolute_Feedback_DataReader_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Feedback_DataReader> RotateAbsolute_Feedback_DataReader_out;


            class RotateAbsolute_Feedback_DataReaderView;

            typedef RotateAbsolute_Feedback_DataReaderView * RotateAbsolute_Feedback_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_Feedback_DataReaderView> RotateAbsolute_Feedback_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_Feedback_DataReaderView> RotateAbsolute_Feedback_DataReaderView_out;

            struct RotateAbsolute_Feedback_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RotateAbsolute_Feedback_, struct RotateAbsolute_Feedback_Seq_uniq_> RotateAbsolute_Feedback_Seq;
            typedef DDS_DCPSSequence_var < RotateAbsolute_Feedback_Seq> RotateAbsolute_Feedback_Seq_var;
            typedef DDS_DCPSSequence_out < RotateAbsolute_Feedback_Seq> RotateAbsolute_Feedback_Seq_out;

            class  RotateAbsolute_Feedback_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RotateAbsolute_Feedback_TypeSupportInterface_ptr _ptr_type;
                typedef RotateAbsolute_Feedback_TypeSupportInterface_var _var_type;

                static RotateAbsolute_Feedback_TypeSupportInterface_ptr _duplicate (RotateAbsolute_Feedback_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Feedback_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Feedback_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Feedback_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Feedback_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RotateAbsolute_Feedback_TypeSupportInterface () {};
                ~RotateAbsolute_Feedback_TypeSupportInterface () {};
            private:
                RotateAbsolute_Feedback_TypeSupportInterface (const RotateAbsolute_Feedback_TypeSupportInterface &);
                RotateAbsolute_Feedback_TypeSupportInterface & operator = (const RotateAbsolute_Feedback_TypeSupportInterface &);
            };

            class  RotateAbsolute_Feedback_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RotateAbsolute_Feedback_DataWriter_ptr _ptr_type;
                typedef RotateAbsolute_Feedback_DataWriter_var _var_type;

                static RotateAbsolute_Feedback_DataWriter_ptr _duplicate (RotateAbsolute_Feedback_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Feedback_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Feedback_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Feedback_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Feedback_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RotateAbsolute_Feedback_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RotateAbsolute_Feedback_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RotateAbsolute_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RotateAbsolute_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RotateAbsolute_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RotateAbsolute_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RotateAbsolute_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RotateAbsolute_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RotateAbsolute_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RotateAbsolute_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Feedback_& instance_data) = 0;

            protected:
                RotateAbsolute_Feedback_DataWriter () {};
                ~RotateAbsolute_Feedback_DataWriter () {};
            private:
                RotateAbsolute_Feedback_DataWriter (const RotateAbsolute_Feedback_DataWriter &);
                RotateAbsolute_Feedback_DataWriter & operator = (const RotateAbsolute_Feedback_DataWriter &);
            };

            class  RotateAbsolute_Feedback_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RotateAbsolute_Feedback_DataReader_ptr _ptr_type;
                typedef RotateAbsolute_Feedback_DataReader_var _var_type;

                static RotateAbsolute_Feedback_DataReader_ptr _duplicate (RotateAbsolute_Feedback_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Feedback_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Feedback_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Feedback_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Feedback_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Feedback_& instance) = 0;

            protected:
                RotateAbsolute_Feedback_DataReader () {};
                ~RotateAbsolute_Feedback_DataReader () {};
            private:
                RotateAbsolute_Feedback_DataReader (const RotateAbsolute_Feedback_DataReader &);
                RotateAbsolute_Feedback_DataReader & operator = (const RotateAbsolute_Feedback_DataReader &);
            };

            class  RotateAbsolute_Feedback_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RotateAbsolute_Feedback_DataReaderView_ptr _ptr_type;
                typedef RotateAbsolute_Feedback_DataReaderView_var _var_type;

                static RotateAbsolute_Feedback_DataReaderView_ptr _duplicate (RotateAbsolute_Feedback_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_Feedback_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Feedback_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_Feedback_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_Feedback_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_Feedback_& instance) = 0;

            protected:
                RotateAbsolute_Feedback_DataReaderView () {};
                ~RotateAbsolute_Feedback_DataReaderView () {};
            private:
                RotateAbsolute_Feedback_DataReaderView (const RotateAbsolute_Feedback_DataReaderView &);
                RotateAbsolute_Feedback_DataReaderView & operator = (const RotateAbsolute_Feedback_DataReaderView &);
            };
            class RotateAbsolute_FeedbackMessage_TypeSupportInterface;

            typedef RotateAbsolute_FeedbackMessage_TypeSupportInterface * RotateAbsolute_FeedbackMessage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_FeedbackMessage_TypeSupportInterface> RotateAbsolute_FeedbackMessage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_FeedbackMessage_TypeSupportInterface> RotateAbsolute_FeedbackMessage_TypeSupportInterface_out;


            class RotateAbsolute_FeedbackMessage_DataWriter;

            typedef RotateAbsolute_FeedbackMessage_DataWriter * RotateAbsolute_FeedbackMessage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_FeedbackMessage_DataWriter> RotateAbsolute_FeedbackMessage_DataWriter_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_FeedbackMessage_DataWriter> RotateAbsolute_FeedbackMessage_DataWriter_out;


            class RotateAbsolute_FeedbackMessage_DataReader;

            typedef RotateAbsolute_FeedbackMessage_DataReader * RotateAbsolute_FeedbackMessage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_FeedbackMessage_DataReader> RotateAbsolute_FeedbackMessage_DataReader_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_FeedbackMessage_DataReader> RotateAbsolute_FeedbackMessage_DataReader_out;


            class RotateAbsolute_FeedbackMessage_DataReaderView;

            typedef RotateAbsolute_FeedbackMessage_DataReaderView * RotateAbsolute_FeedbackMessage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RotateAbsolute_FeedbackMessage_DataReaderView> RotateAbsolute_FeedbackMessage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RotateAbsolute_FeedbackMessage_DataReaderView> RotateAbsolute_FeedbackMessage_DataReaderView_out;

            struct RotateAbsolute_FeedbackMessage_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < RotateAbsolute_FeedbackMessage_, struct RotateAbsolute_FeedbackMessage_Seq_uniq_> RotateAbsolute_FeedbackMessage_Seq;
            typedef DDS_DCPSSequence_var < RotateAbsolute_FeedbackMessage_Seq> RotateAbsolute_FeedbackMessage_Seq_var;
            typedef DDS_DCPSSequence_out < RotateAbsolute_FeedbackMessage_Seq> RotateAbsolute_FeedbackMessage_Seq_out;

            class  RotateAbsolute_FeedbackMessage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RotateAbsolute_FeedbackMessage_TypeSupportInterface_ptr _ptr_type;
                typedef RotateAbsolute_FeedbackMessage_TypeSupportInterface_var _var_type;

                static RotateAbsolute_FeedbackMessage_TypeSupportInterface_ptr _duplicate (RotateAbsolute_FeedbackMessage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_FeedbackMessage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_FeedbackMessage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_FeedbackMessage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_FeedbackMessage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RotateAbsolute_FeedbackMessage_TypeSupportInterface () {};
                ~RotateAbsolute_FeedbackMessage_TypeSupportInterface () {};
            private:
                RotateAbsolute_FeedbackMessage_TypeSupportInterface (const RotateAbsolute_FeedbackMessage_TypeSupportInterface &);
                RotateAbsolute_FeedbackMessage_TypeSupportInterface & operator = (const RotateAbsolute_FeedbackMessage_TypeSupportInterface &);
            };

            class  RotateAbsolute_FeedbackMessage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RotateAbsolute_FeedbackMessage_DataWriter_ptr _ptr_type;
                typedef RotateAbsolute_FeedbackMessage_DataWriter_var _var_type;

                static RotateAbsolute_FeedbackMessage_DataWriter_ptr _duplicate (RotateAbsolute_FeedbackMessage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_FeedbackMessage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_FeedbackMessage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_FeedbackMessage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_FeedbackMessage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RotateAbsolute_FeedbackMessage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RotateAbsolute_FeedbackMessage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RotateAbsolute_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RotateAbsolute_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RotateAbsolute_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RotateAbsolute_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RotateAbsolute_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RotateAbsolute_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RotateAbsolute_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RotateAbsolute_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_FeedbackMessage_& instance_data) = 0;

            protected:
                RotateAbsolute_FeedbackMessage_DataWriter () {};
                ~RotateAbsolute_FeedbackMessage_DataWriter () {};
            private:
                RotateAbsolute_FeedbackMessage_DataWriter (const RotateAbsolute_FeedbackMessage_DataWriter &);
                RotateAbsolute_FeedbackMessage_DataWriter & operator = (const RotateAbsolute_FeedbackMessage_DataWriter &);
            };

            class  RotateAbsolute_FeedbackMessage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RotateAbsolute_FeedbackMessage_DataReader_ptr _ptr_type;
                typedef RotateAbsolute_FeedbackMessage_DataReader_var _var_type;

                static RotateAbsolute_FeedbackMessage_DataReader_ptr _duplicate (RotateAbsolute_FeedbackMessage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_FeedbackMessage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_FeedbackMessage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_FeedbackMessage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_FeedbackMessage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_FeedbackMessage_& instance) = 0;

            protected:
                RotateAbsolute_FeedbackMessage_DataReader () {};
                ~RotateAbsolute_FeedbackMessage_DataReader () {};
            private:
                RotateAbsolute_FeedbackMessage_DataReader (const RotateAbsolute_FeedbackMessage_DataReader &);
                RotateAbsolute_FeedbackMessage_DataReader & operator = (const RotateAbsolute_FeedbackMessage_DataReader &);
            };

            class  RotateAbsolute_FeedbackMessage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RotateAbsolute_FeedbackMessage_DataReaderView_ptr _ptr_type;
                typedef RotateAbsolute_FeedbackMessage_DataReaderView_var _var_type;

                static RotateAbsolute_FeedbackMessage_DataReaderView_ptr _duplicate (RotateAbsolute_FeedbackMessage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RotateAbsolute_FeedbackMessage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RotateAbsolute_FeedbackMessage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RotateAbsolute_FeedbackMessage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RotateAbsolute_FeedbackMessage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RotateAbsolute_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RotateAbsolute_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RotateAbsolute_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RotateAbsolute_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RotateAbsolute_FeedbackMessage_& instance) = 0;

            protected:
                RotateAbsolute_FeedbackMessage_DataReaderView () {};
                ~RotateAbsolute_FeedbackMessage_DataReaderView () {};
            private:
                RotateAbsolute_FeedbackMessage_DataReaderView (const RotateAbsolute_FeedbackMessage_DataReaderView &);
                RotateAbsolute_FeedbackMessage_DataReaderView & operator = (const RotateAbsolute_FeedbackMessage_DataReaderView &);
            };
        }

    }

}

#endif
