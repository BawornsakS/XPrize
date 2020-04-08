#ifndef _H_4C89848404780383BBEE83F0DFC9AD13_Spawn_DCPS_H_
#define _H_4C89848404780383BBEE83F0DFC9AD13_Spawn_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Spawn_.h"


namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            class Spawn_Request_TypeSupportInterface;

            typedef Spawn_Request_TypeSupportInterface * Spawn_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Spawn_Request_TypeSupportInterface> Spawn_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Spawn_Request_TypeSupportInterface> Spawn_Request_TypeSupportInterface_out;


            class Spawn_Request_DataWriter;

            typedef Spawn_Request_DataWriter * Spawn_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Spawn_Request_DataWriter> Spawn_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Spawn_Request_DataWriter> Spawn_Request_DataWriter_out;


            class Spawn_Request_DataReader;

            typedef Spawn_Request_DataReader * Spawn_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Spawn_Request_DataReader> Spawn_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Spawn_Request_DataReader> Spawn_Request_DataReader_out;


            class Spawn_Request_DataReaderView;

            typedef Spawn_Request_DataReaderView * Spawn_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Spawn_Request_DataReaderView> Spawn_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Spawn_Request_DataReaderView> Spawn_Request_DataReaderView_out;

            struct Spawn_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Spawn_Request_, struct Spawn_Request_Seq_uniq_> Spawn_Request_Seq;
            typedef DDS_DCPSSequence_var < Spawn_Request_Seq> Spawn_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Spawn_Request_Seq> Spawn_Request_Seq_out;

            class  Spawn_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Spawn_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Spawn_Request_TypeSupportInterface_var _var_type;

                static Spawn_Request_TypeSupportInterface_ptr _duplicate (Spawn_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Spawn_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Spawn_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Spawn_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Spawn_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Spawn_Request_TypeSupportInterface () {};
                ~Spawn_Request_TypeSupportInterface () {};
            private:
                Spawn_Request_TypeSupportInterface (const Spawn_Request_TypeSupportInterface &);
                Spawn_Request_TypeSupportInterface & operator = (const Spawn_Request_TypeSupportInterface &);
            };

            class  Spawn_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Spawn_Request_DataWriter_ptr _ptr_type;
                typedef Spawn_Request_DataWriter_var _var_type;

                static Spawn_Request_DataWriter_ptr _duplicate (Spawn_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Spawn_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Spawn_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Spawn_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Spawn_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Spawn_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Spawn_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Spawn_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Spawn_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Spawn_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Spawn_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Spawn_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Spawn_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Spawn_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Spawn_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Spawn_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Spawn_Request_& instance_data) = 0;

            protected:
                Spawn_Request_DataWriter () {};
                ~Spawn_Request_DataWriter () {};
            private:
                Spawn_Request_DataWriter (const Spawn_Request_DataWriter &);
                Spawn_Request_DataWriter & operator = (const Spawn_Request_DataWriter &);
            };

            class  Spawn_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Spawn_Request_DataReader_ptr _ptr_type;
                typedef Spawn_Request_DataReader_var _var_type;

                static Spawn_Request_DataReader_ptr _duplicate (Spawn_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Spawn_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Spawn_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Spawn_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Spawn_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Spawn_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Spawn_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Spawn_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Spawn_Request_& instance) = 0;

            protected:
                Spawn_Request_DataReader () {};
                ~Spawn_Request_DataReader () {};
            private:
                Spawn_Request_DataReader (const Spawn_Request_DataReader &);
                Spawn_Request_DataReader & operator = (const Spawn_Request_DataReader &);
            };

            class  Spawn_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Spawn_Request_DataReaderView_ptr _ptr_type;
                typedef Spawn_Request_DataReaderView_var _var_type;

                static Spawn_Request_DataReaderView_ptr _duplicate (Spawn_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Spawn_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Spawn_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Spawn_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Spawn_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Spawn_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Spawn_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Spawn_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Spawn_Request_& instance) = 0;

            protected:
                Spawn_Request_DataReaderView () {};
                ~Spawn_Request_DataReaderView () {};
            private:
                Spawn_Request_DataReaderView (const Spawn_Request_DataReaderView &);
                Spawn_Request_DataReaderView & operator = (const Spawn_Request_DataReaderView &);
            };
            class Spawn_Response_TypeSupportInterface;

            typedef Spawn_Response_TypeSupportInterface * Spawn_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Spawn_Response_TypeSupportInterface> Spawn_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Spawn_Response_TypeSupportInterface> Spawn_Response_TypeSupportInterface_out;


            class Spawn_Response_DataWriter;

            typedef Spawn_Response_DataWriter * Spawn_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Spawn_Response_DataWriter> Spawn_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Spawn_Response_DataWriter> Spawn_Response_DataWriter_out;


            class Spawn_Response_DataReader;

            typedef Spawn_Response_DataReader * Spawn_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Spawn_Response_DataReader> Spawn_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Spawn_Response_DataReader> Spawn_Response_DataReader_out;


            class Spawn_Response_DataReaderView;

            typedef Spawn_Response_DataReaderView * Spawn_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Spawn_Response_DataReaderView> Spawn_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Spawn_Response_DataReaderView> Spawn_Response_DataReaderView_out;

            struct Spawn_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Spawn_Response_, struct Spawn_Response_Seq_uniq_> Spawn_Response_Seq;
            typedef DDS_DCPSSequence_var < Spawn_Response_Seq> Spawn_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Spawn_Response_Seq> Spawn_Response_Seq_out;

            class  Spawn_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Spawn_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Spawn_Response_TypeSupportInterface_var _var_type;

                static Spawn_Response_TypeSupportInterface_ptr _duplicate (Spawn_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Spawn_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Spawn_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Spawn_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Spawn_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Spawn_Response_TypeSupportInterface () {};
                ~Spawn_Response_TypeSupportInterface () {};
            private:
                Spawn_Response_TypeSupportInterface (const Spawn_Response_TypeSupportInterface &);
                Spawn_Response_TypeSupportInterface & operator = (const Spawn_Response_TypeSupportInterface &);
            };

            class  Spawn_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Spawn_Response_DataWriter_ptr _ptr_type;
                typedef Spawn_Response_DataWriter_var _var_type;

                static Spawn_Response_DataWriter_ptr _duplicate (Spawn_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Spawn_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Spawn_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Spawn_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Spawn_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Spawn_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Spawn_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Spawn_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Spawn_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Spawn_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Spawn_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Spawn_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Spawn_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Spawn_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Spawn_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Spawn_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Spawn_Response_& instance_data) = 0;

            protected:
                Spawn_Response_DataWriter () {};
                ~Spawn_Response_DataWriter () {};
            private:
                Spawn_Response_DataWriter (const Spawn_Response_DataWriter &);
                Spawn_Response_DataWriter & operator = (const Spawn_Response_DataWriter &);
            };

            class  Spawn_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Spawn_Response_DataReader_ptr _ptr_type;
                typedef Spawn_Response_DataReader_var _var_type;

                static Spawn_Response_DataReader_ptr _duplicate (Spawn_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Spawn_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Spawn_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Spawn_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Spawn_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Spawn_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Spawn_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Spawn_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Spawn_Response_& instance) = 0;

            protected:
                Spawn_Response_DataReader () {};
                ~Spawn_Response_DataReader () {};
            private:
                Spawn_Response_DataReader (const Spawn_Response_DataReader &);
                Spawn_Response_DataReader & operator = (const Spawn_Response_DataReader &);
            };

            class  Spawn_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Spawn_Response_DataReaderView_ptr _ptr_type;
                typedef Spawn_Response_DataReaderView_var _var_type;

                static Spawn_Response_DataReaderView_ptr _duplicate (Spawn_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Spawn_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Spawn_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Spawn_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Spawn_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Spawn_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Spawn_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Spawn_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Spawn_Response_& instance) = 0;

            protected:
                Spawn_Response_DataReaderView () {};
                ~Spawn_Response_DataReaderView () {};
            private:
                Spawn_Response_DataReaderView (const Spawn_Response_DataReaderView &);
                Spawn_Response_DataReaderView & operator = (const Spawn_Response_DataReaderView &);
            };
            class Sample_Spawn_Request_TypeSupportInterface;

            typedef Sample_Spawn_Request_TypeSupportInterface * Sample_Spawn_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Spawn_Request_TypeSupportInterface> Sample_Spawn_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Spawn_Request_TypeSupportInterface> Sample_Spawn_Request_TypeSupportInterface_out;


            class Sample_Spawn_Request_DataWriter;

            typedef Sample_Spawn_Request_DataWriter * Sample_Spawn_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Spawn_Request_DataWriter> Sample_Spawn_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Spawn_Request_DataWriter> Sample_Spawn_Request_DataWriter_out;


            class Sample_Spawn_Request_DataReader;

            typedef Sample_Spawn_Request_DataReader * Sample_Spawn_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Spawn_Request_DataReader> Sample_Spawn_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Spawn_Request_DataReader> Sample_Spawn_Request_DataReader_out;


            class Sample_Spawn_Request_DataReaderView;

            typedef Sample_Spawn_Request_DataReaderView * Sample_Spawn_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Spawn_Request_DataReaderView> Sample_Spawn_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Spawn_Request_DataReaderView> Sample_Spawn_Request_DataReaderView_out;

            struct Sample_Spawn_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_Spawn_Request_, struct Sample_Spawn_Request_Seq_uniq_> Sample_Spawn_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_Spawn_Request_Seq> Sample_Spawn_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Spawn_Request_Seq> Sample_Spawn_Request_Seq_out;

            class  Sample_Spawn_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Spawn_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Spawn_Request_TypeSupportInterface_var _var_type;

                static Sample_Spawn_Request_TypeSupportInterface_ptr _duplicate (Sample_Spawn_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Spawn_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Spawn_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Spawn_Request_TypeSupportInterface () {};
                ~Sample_Spawn_Request_TypeSupportInterface () {};
            private:
                Sample_Spawn_Request_TypeSupportInterface (const Sample_Spawn_Request_TypeSupportInterface &);
                Sample_Spawn_Request_TypeSupportInterface & operator = (const Sample_Spawn_Request_TypeSupportInterface &);
            };

            class  Sample_Spawn_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Spawn_Request_DataWriter_ptr _ptr_type;
                typedef Sample_Spawn_Request_DataWriter_var _var_type;

                static Sample_Spawn_Request_DataWriter_ptr _duplicate (Sample_Spawn_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Spawn_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Spawn_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Spawn_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Spawn_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Spawn_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Spawn_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Spawn_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Spawn_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Spawn_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Spawn_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Spawn_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Spawn_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Spawn_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Spawn_Request_& instance_data) = 0;

            protected:
                Sample_Spawn_Request_DataWriter () {};
                ~Sample_Spawn_Request_DataWriter () {};
            private:
                Sample_Spawn_Request_DataWriter (const Sample_Spawn_Request_DataWriter &);
                Sample_Spawn_Request_DataWriter & operator = (const Sample_Spawn_Request_DataWriter &);
            };

            class  Sample_Spawn_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Spawn_Request_DataReader_ptr _ptr_type;
                typedef Sample_Spawn_Request_DataReader_var _var_type;

                static Sample_Spawn_Request_DataReader_ptr _duplicate (Sample_Spawn_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Spawn_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Spawn_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Spawn_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Spawn_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Spawn_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Spawn_Request_& instance) = 0;

            protected:
                Sample_Spawn_Request_DataReader () {};
                ~Sample_Spawn_Request_DataReader () {};
            private:
                Sample_Spawn_Request_DataReader (const Sample_Spawn_Request_DataReader &);
                Sample_Spawn_Request_DataReader & operator = (const Sample_Spawn_Request_DataReader &);
            };

            class  Sample_Spawn_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Spawn_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_Spawn_Request_DataReaderView_var _var_type;

                static Sample_Spawn_Request_DataReaderView_ptr _duplicate (Sample_Spawn_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Spawn_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Spawn_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Spawn_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Spawn_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Spawn_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Spawn_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Spawn_Request_& instance) = 0;

            protected:
                Sample_Spawn_Request_DataReaderView () {};
                ~Sample_Spawn_Request_DataReaderView () {};
            private:
                Sample_Spawn_Request_DataReaderView (const Sample_Spawn_Request_DataReaderView &);
                Sample_Spawn_Request_DataReaderView & operator = (const Sample_Spawn_Request_DataReaderView &);
            };
            class Sample_Spawn_Response_TypeSupportInterface;

            typedef Sample_Spawn_Response_TypeSupportInterface * Sample_Spawn_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Spawn_Response_TypeSupportInterface> Sample_Spawn_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Spawn_Response_TypeSupportInterface> Sample_Spawn_Response_TypeSupportInterface_out;


            class Sample_Spawn_Response_DataWriter;

            typedef Sample_Spawn_Response_DataWriter * Sample_Spawn_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Spawn_Response_DataWriter> Sample_Spawn_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Spawn_Response_DataWriter> Sample_Spawn_Response_DataWriter_out;


            class Sample_Spawn_Response_DataReader;

            typedef Sample_Spawn_Response_DataReader * Sample_Spawn_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Spawn_Response_DataReader> Sample_Spawn_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Spawn_Response_DataReader> Sample_Spawn_Response_DataReader_out;


            class Sample_Spawn_Response_DataReaderView;

            typedef Sample_Spawn_Response_DataReaderView * Sample_Spawn_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Spawn_Response_DataReaderView> Sample_Spawn_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Spawn_Response_DataReaderView> Sample_Spawn_Response_DataReaderView_out;

            struct Sample_Spawn_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_Spawn_Response_, struct Sample_Spawn_Response_Seq_uniq_> Sample_Spawn_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_Spawn_Response_Seq> Sample_Spawn_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Spawn_Response_Seq> Sample_Spawn_Response_Seq_out;

            class  Sample_Spawn_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Spawn_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Spawn_Response_TypeSupportInterface_var _var_type;

                static Sample_Spawn_Response_TypeSupportInterface_ptr _duplicate (Sample_Spawn_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Spawn_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Spawn_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Spawn_Response_TypeSupportInterface () {};
                ~Sample_Spawn_Response_TypeSupportInterface () {};
            private:
                Sample_Spawn_Response_TypeSupportInterface (const Sample_Spawn_Response_TypeSupportInterface &);
                Sample_Spawn_Response_TypeSupportInterface & operator = (const Sample_Spawn_Response_TypeSupportInterface &);
            };

            class  Sample_Spawn_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Spawn_Response_DataWriter_ptr _ptr_type;
                typedef Sample_Spawn_Response_DataWriter_var _var_type;

                static Sample_Spawn_Response_DataWriter_ptr _duplicate (Sample_Spawn_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Spawn_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Spawn_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Spawn_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Spawn_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Spawn_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Spawn_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Spawn_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Spawn_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Spawn_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Spawn_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Spawn_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Spawn_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Spawn_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Spawn_Response_& instance_data) = 0;

            protected:
                Sample_Spawn_Response_DataWriter () {};
                ~Sample_Spawn_Response_DataWriter () {};
            private:
                Sample_Spawn_Response_DataWriter (const Sample_Spawn_Response_DataWriter &);
                Sample_Spawn_Response_DataWriter & operator = (const Sample_Spawn_Response_DataWriter &);
            };

            class  Sample_Spawn_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Spawn_Response_DataReader_ptr _ptr_type;
                typedef Sample_Spawn_Response_DataReader_var _var_type;

                static Sample_Spawn_Response_DataReader_ptr _duplicate (Sample_Spawn_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Spawn_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Spawn_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Spawn_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Spawn_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Spawn_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Spawn_Response_& instance) = 0;

            protected:
                Sample_Spawn_Response_DataReader () {};
                ~Sample_Spawn_Response_DataReader () {};
            private:
                Sample_Spawn_Response_DataReader (const Sample_Spawn_Response_DataReader &);
                Sample_Spawn_Response_DataReader & operator = (const Sample_Spawn_Response_DataReader &);
            };

            class  Sample_Spawn_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Spawn_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_Spawn_Response_DataReaderView_var _var_type;

                static Sample_Spawn_Response_DataReaderView_ptr _duplicate (Sample_Spawn_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Spawn_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Spawn_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Spawn_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Spawn_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Spawn_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Spawn_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Spawn_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Spawn_Response_& instance) = 0;

            protected:
                Sample_Spawn_Response_DataReaderView () {};
                ~Sample_Spawn_Response_DataReaderView () {};
            private:
                Sample_Spawn_Response_DataReaderView (const Sample_Spawn_Response_DataReaderView &);
                Sample_Spawn_Response_DataReaderView & operator = (const Sample_Spawn_Response_DataReaderView &);
            };
        }

    }

}

#endif
