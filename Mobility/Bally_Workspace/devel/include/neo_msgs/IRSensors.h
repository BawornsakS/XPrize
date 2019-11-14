// Generated by gencpp from file neo_msgs/IRSensors.msg
// DO NOT EDIT!


#ifndef NEO_MSGS_MESSAGE_IRSENSORS_H
#define NEO_MSGS_MESSAGE_IRSENSORS_H


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
struct IRSensors_
{
  typedef IRSensors_<ContainerAllocator> Type;

  IRSensors_()
    : measurement()  {
      measurement.assign(0);
  }
  IRSensors_(const ContainerAllocator& _alloc)
    : measurement()  {
  (void)_alloc;
      measurement.assign(0);
  }



   typedef boost::array<int32_t, 4>  _measurement_type;
  _measurement_type measurement;





  typedef boost::shared_ptr< ::neo_msgs::IRSensors_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neo_msgs::IRSensors_<ContainerAllocator> const> ConstPtr;

}; // struct IRSensors_

typedef ::neo_msgs::IRSensors_<std::allocator<void> > IRSensors;

typedef boost::shared_ptr< ::neo_msgs::IRSensors > IRSensorsPtr;
typedef boost::shared_ptr< ::neo_msgs::IRSensors const> IRSensorsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::neo_msgs::IRSensors_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::neo_msgs::IRSensors_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace neo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'neo_msgs': ['/home/bally/Bally_Workspace/src/neo_driver/neo_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::neo_msgs::IRSensors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::neo_msgs::IRSensors_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_msgs::IRSensors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_msgs::IRSensors_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_msgs::IRSensors_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_msgs::IRSensors_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::neo_msgs::IRSensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b608e536c75438a771e1cfb29f4b570";
  }

  static const char* value(const ::neo_msgs::IRSensors_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b608e536c75438aULL;
  static const uint64_t static_value2 = 0x771e1cfb29f4b570ULL;
};

template<class ContainerAllocator>
struct DataType< ::neo_msgs::IRSensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "neo_msgs/IRSensors";
  }

  static const char* value(const ::neo_msgs::IRSensors_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::neo_msgs::IRSensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[4] measurement\n"
;
  }

  static const char* value(const ::neo_msgs::IRSensors_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::neo_msgs::IRSensors_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.measurement);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IRSensors_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::neo_msgs::IRSensors_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::neo_msgs::IRSensors_<ContainerAllocator>& v)
  {
    s << indent << "measurement[]" << std::endl;
    for (size_t i = 0; i < v.measurement.size(); ++i)
    {
      s << indent << "  measurement[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.measurement[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NEO_MSGS_MESSAGE_IRSENSORS_H
