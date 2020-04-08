#include "Spawn_.h"
#include "Spawn_Dcps.h"

namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < turtlesim::srv::dds_::Spawn_Request_, struct Spawn_Request_Seq_uniq_>;
#endif

const char * turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface::_local_id = "IDL:::turtlesim::srv::dds_/Spawn_Request_TypeSupportInterface:1.0";

turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface_ptr turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface::_duplicate (turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface_ptr turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface_ptr turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Spawn_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Spawn_Request_DataWriter::_local_id = "IDL:::turtlesim::srv::dds_/Spawn_Request_DataWriter:1.0";

turtlesim::srv::dds_::Spawn_Request_DataWriter_ptr turtlesim::srv::dds_::Spawn_Request_DataWriter::_duplicate (turtlesim::srv::dds_::Spawn_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Spawn_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Spawn_Request_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Spawn_Request_DataWriter_ptr turtlesim::srv::dds_::Spawn_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Spawn_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Spawn_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Spawn_Request_DataWriter_ptr turtlesim::srv::dds_::Spawn_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Request_DataWriter_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Spawn_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Spawn_Request_DataReader::_local_id = "IDL:::turtlesim::srv::dds_/Spawn_Request_DataReader:1.0";

turtlesim::srv::dds_::Spawn_Request_DataReader_ptr turtlesim::srv::dds_::Spawn_Request_DataReader::_duplicate (turtlesim::srv::dds_::Spawn_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Spawn_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Spawn_Request_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Spawn_Request_DataReader_ptr turtlesim::srv::dds_::Spawn_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Spawn_Request_DataReader::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Spawn_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Spawn_Request_DataReader_ptr turtlesim::srv::dds_::Spawn_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Request_DataReader_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Spawn_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Spawn_Request_DataReaderView::_local_id = "IDL:::turtlesim::srv::dds_/Spawn_Request_DataReaderView:1.0";

turtlesim::srv::dds_::Spawn_Request_DataReaderView_ptr turtlesim::srv::dds_::Spawn_Request_DataReaderView::_duplicate (turtlesim::srv::dds_::Spawn_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Spawn_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Spawn_Request_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Spawn_Request_DataReaderView_ptr turtlesim::srv::dds_::Spawn_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Spawn_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Spawn_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Spawn_Request_DataReaderView_ptr turtlesim::srv::dds_::Spawn_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Request_DataReaderView_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Spawn_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < turtlesim::srv::dds_::Spawn_Response_, struct Spawn_Response_Seq_uniq_>;
#endif

const char * turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface::_local_id = "IDL:::turtlesim::srv::dds_/Spawn_Response_TypeSupportInterface:1.0";

turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface_ptr turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface::_duplicate (turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface_ptr turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface_ptr turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Spawn_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Spawn_Response_DataWriter::_local_id = "IDL:::turtlesim::srv::dds_/Spawn_Response_DataWriter:1.0";

turtlesim::srv::dds_::Spawn_Response_DataWriter_ptr turtlesim::srv::dds_::Spawn_Response_DataWriter::_duplicate (turtlesim::srv::dds_::Spawn_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Spawn_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Spawn_Response_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Spawn_Response_DataWriter_ptr turtlesim::srv::dds_::Spawn_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Spawn_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Spawn_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Spawn_Response_DataWriter_ptr turtlesim::srv::dds_::Spawn_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Response_DataWriter_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Spawn_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Spawn_Response_DataReader::_local_id = "IDL:::turtlesim::srv::dds_/Spawn_Response_DataReader:1.0";

turtlesim::srv::dds_::Spawn_Response_DataReader_ptr turtlesim::srv::dds_::Spawn_Response_DataReader::_duplicate (turtlesim::srv::dds_::Spawn_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Spawn_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Spawn_Response_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Spawn_Response_DataReader_ptr turtlesim::srv::dds_::Spawn_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Spawn_Response_DataReader::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Spawn_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Spawn_Response_DataReader_ptr turtlesim::srv::dds_::Spawn_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Response_DataReader_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Spawn_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Spawn_Response_DataReaderView::_local_id = "IDL:::turtlesim::srv::dds_/Spawn_Response_DataReaderView:1.0";

turtlesim::srv::dds_::Spawn_Response_DataReaderView_ptr turtlesim::srv::dds_::Spawn_Response_DataReaderView::_duplicate (turtlesim::srv::dds_::Spawn_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Spawn_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Spawn_Response_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Spawn_Response_DataReaderView_ptr turtlesim::srv::dds_::Spawn_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Spawn_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Spawn_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Spawn_Response_DataReaderView_ptr turtlesim::srv::dds_::Spawn_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Spawn_Response_DataReaderView_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Spawn_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < turtlesim::srv::dds_::Sample_Spawn_Request_, struct Sample_Spawn_Request_Seq_uniq_>;
#endif

const char * turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface::_local_id = "IDL:::turtlesim::srv::dds_/Sample_Spawn_Request_TypeSupportInterface:1.0";

turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface_ptr turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface::_duplicate (turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface_ptr turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface_ptr turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter::_local_id = "IDL:::turtlesim::srv::dds_/Sample_Spawn_Request_DataWriter:1.0";

turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter::_duplicate (turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Sample_Spawn_Request_DataReader::_local_id = "IDL:::turtlesim::srv::dds_/Sample_Spawn_Request_DataReader:1.0";

turtlesim::srv::dds_::Sample_Spawn_Request_DataReader_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataReader::_duplicate (turtlesim::srv::dds_::Sample_Spawn_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Sample_Spawn_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Sample_Spawn_Request_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Sample_Spawn_Request_DataReader_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Sample_Spawn_Request_DataReader::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Sample_Spawn_Request_DataReader_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Request_DataReader_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView::_local_id = "IDL:::turtlesim::srv::dds_/Sample_Spawn_Request_DataReaderView:1.0";

turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView::_duplicate (turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView_ptr turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < turtlesim::srv::dds_::Sample_Spawn_Response_, struct Sample_Spawn_Response_Seq_uniq_>;
#endif

const char * turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface::_local_id = "IDL:::turtlesim::srv::dds_/Sample_Spawn_Response_TypeSupportInterface:1.0";

turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface_ptr turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface::_duplicate (turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface_ptr turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface_ptr turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter::_local_id = "IDL:::turtlesim::srv::dds_/Sample_Spawn_Response_DataWriter:1.0";

turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter::_duplicate (turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Sample_Spawn_Response_DataReader::_local_id = "IDL:::turtlesim::srv::dds_/Sample_Spawn_Response_DataReader:1.0";

turtlesim::srv::dds_::Sample_Spawn_Response_DataReader_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataReader::_duplicate (turtlesim::srv::dds_::Sample_Spawn_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Sample_Spawn_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Sample_Spawn_Response_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Sample_Spawn_Response_DataReader_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Sample_Spawn_Response_DataReader::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Sample_Spawn_Response_DataReader_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Response_DataReader_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView::_local_id = "IDL:::turtlesim::srv::dds_/Sample_Spawn_Response_DataReaderView:1.0";

turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView::_duplicate (turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView_ptr turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView_ptr result;
    result = dynamic_cast < turtlesim::srv::dds_::Sample_Spawn_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

