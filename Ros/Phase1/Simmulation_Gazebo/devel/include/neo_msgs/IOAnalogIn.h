// Generated by gencpp from file neo_msgs/IOAnalogIn.msg
// DO NOT EDIT!


#ifndef NEO_MSGS_MESSAGE_IOANALOGIN_H
#define NEO_MSGS_MESSAGE_IOANALOGIN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace neo_msgs
{
template <class ContainerAllocator>
struct IOAnalogIn_
{
  typedef IOAnalogIn_<ContainerAllocator> Type;

  IOAnalogIn_()
    : input()  {
      input.assign(0);
  }
  IOAnalogIn_(const ContainerAllocator& _alloc)
    : input()  {
  (void)_alloc;
      input.assign(0);
  }



   typedef boost::array<int16_t, 8>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::neo_msgs::IOAnalogIn_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neo_msgs::IOAnalogIn_<ContainerAllocator> const> ConstPtr;

}; // struct IOAnalogIn_

typedef ::neo_msgs::IOAnalogIn_<std::allocator<void> > IOAnalogIn;

typedef boost::shared_ptr< ::neo_msgs::IOAnalogIn > IOAnalogInPtr;
typedef boost::shared_ptr< ::neo_msgs::IOAnalogIn const> IOAnalogInConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::neo_msgs::IOAnalogIn_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace neo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'neo_msgs': ['/home/xprize/Bally_Workspace/src/neo_driver/neo_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::neo_msgs::IOAnalogIn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_msgs::IOAnalogIn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_msgs::IOAnalogIn_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4b0e4815c9bd4f4b74f05fb5691e16a6";
  }

  static const char* value(const ::neo_msgs::IOAnalogIn_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4b0e4815c9bd4f4bULL;
  static const uint64_t static_value2 = 0x74f05fb5691e16a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "neo_msgs/IOAnalogIn";
  }

  static const char* value(const ::neo_msgs::IOAnalogIn_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16[8] input\n"
;
  }

  static const char* value(const ::neo_msgs::IOAnalogIn_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IOAnalogIn_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::neo_msgs::IOAnalogIn_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::neo_msgs::IOAnalogIn_<ContainerAllocator>& v)
  {
    s << indent << "input[]" << std::endl;
    for (size_t i = 0; i < v.input.size(); ++i)
    {
      s << indent << "  input[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.input[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NEO_MSGS_MESSAGE_IOANALOGIN_H