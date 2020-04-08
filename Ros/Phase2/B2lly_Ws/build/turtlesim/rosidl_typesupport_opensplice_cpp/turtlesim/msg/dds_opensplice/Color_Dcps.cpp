#include "Color_.h"
#include "Color_Dcps.h"

namespace turtlesim
{
    namespace msg
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < turtlesim::msg::dds_::Color_, struct Color_Seq_uniq_>;
#endif

const char * turtlesim::msg::dds_::Color_TypeSupportInterface::_local_id = "IDL:::turtlesim::msg::dds_/Color_TypeSupportInterface:1.0";

turtlesim::msg::dds_::Color_TypeSupportInterface_ptr turtlesim::msg::dds_::Color_TypeSupportInterface::_duplicate (turtlesim::msg::dds_::Color_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::msg::dds_::Color_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::msg::dds_::Color_TypeSupportInterface::_local_id) == 0)
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

turtlesim::msg::dds_::Color_TypeSupportInterface_ptr turtlesim::msg::dds_::Color_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    turtlesim::msg::dds_::Color_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (turtlesim::msg::dds_::Color_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < turtlesim::msg::dds_::Color_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::msg::dds_::Color_TypeSupportInterface_ptr turtlesim::msg::dds_::Color_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::msg::dds_::Color_TypeSupportInterface_ptr result;
    result = dynamic_cast < turtlesim::msg::dds_::Color_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::msg::dds_::Color_DataWriter::_local_id = "IDL:::turtlesim::msg::dds_/Color_DataWriter:1.0";

turtlesim::msg::dds_::Color_DataWriter_ptr turtlesim::msg::dds_::Color_DataWriter::_duplicate (turtlesim::msg::dds_::Color_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::msg::dds_::Color_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::msg::dds_::Color_DataWriter::_local_id) == 0)
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

turtlesim::msg::dds_::Color_DataWriter_ptr turtlesim::msg::dds_::Color_DataWriter::_narrow (DDS::Object_ptr p)
{
    turtlesim::msg::dds_::Color_DataWriter_ptr result = NULL;
    if (p && p->_is_a (turtlesim::msg::dds_::Color_DataWriter::_local_id))
    {
        result = dynamic_cast < turtlesim::msg::dds_::Color_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::msg::dds_::Color_DataWriter_ptr turtlesim::msg::dds_::Color_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::msg::dds_::Color_DataWriter_ptr result;
    result = dynamic_cast < turtlesim::msg::dds_::Color_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::msg::dds_::Color_DataReader::_local_id = "IDL:::turtlesim::msg::dds_/Color_DataReader:1.0";

turtlesim::msg::dds_::Color_DataReader_ptr turtlesim::msg::dds_::Color_DataReader::_duplicate (turtlesim::msg::dds_::Color_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::msg::dds_::Color_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::msg::dds_::Color_DataReader::_local_id) == 0)
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

turtlesim::msg::dds_::Color_DataReader_ptr turtlesim::msg::dds_::Color_DataReader::_narrow (DDS::Object_ptr p)
{
    turtlesim::msg::dds_::Color_DataReader_ptr result = NULL;
    if (p && p->_is_a (turtlesim::msg::dds_::Color_DataReader::_local_id))
    {
        result = dynamic_cast < turtlesim::msg::dds_::Color_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::msg::dds_::Color_DataReader_ptr turtlesim::msg::dds_::Color_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::msg::dds_::Color_DataReader_ptr result;
    result = dynamic_cast < turtlesim::msg::dds_::Color_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * turtlesim::msg::dds_::Color_DataReaderView::_local_id = "IDL:::turtlesim::msg::dds_/Color_DataReaderView:1.0";

turtlesim::msg::dds_::Color_DataReaderView_ptr turtlesim::msg::dds_::Color_DataReaderView::_duplicate (turtlesim::msg::dds_::Color_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean turtlesim::msg::dds_::Color_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, turtlesim::msg::dds_::Color_DataReaderView::_local_id) == 0)
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

turtlesim::msg::dds_::Color_DataReaderView_ptr turtlesim::msg::dds_::Color_DataReaderView::_narrow (DDS::Object_ptr p)
{
    turtlesim::msg::dds_::Color_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (turtlesim::msg::dds_::Color_DataReaderView::_local_id))
    {
        result = dynamic_cast < turtlesim::msg::dds_::Color_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

turtlesim::msg::dds_::Color_DataReaderView_ptr turtlesim::msg::dds_::Color_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    turtlesim::msg::dds_::Color_DataReaderView_ptr result;
    result = dynamic_cast < turtlesim::msg::dds_::Color_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

