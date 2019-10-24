// Generated by gencpp from file neo_msgs/Keypad.msg
// DO NOT EDIT!


#ifndef NEO_MSGS_MESSAGE_KEYPAD_H
#define NEO_MSGS_MESSAGE_KEYPAD_H


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
struct Keypad_
{
  typedef Keypad_<ContainerAllocator> Type;

  Keypad_()
    : button()  {
      button.assign(false);
  }
  Keypad_(const ContainerAllocator& _alloc)
    : button()  {
  (void)_alloc;
      button.assign(false);
  }



   typedef boost::array<uint8_t, 5>  _button_type;
  _button_type button;





  typedef boost::shared_ptr< ::neo_msgs::Keypad_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neo_msgs::Keypad_<ContainerAllocator> const> ConstPtr;

}; // struct Keypad_

typedef ::neo_msgs::Keypad_<std::allocator<void> > Keypad;

typedef boost::shared_ptr< ::neo_msgs::Keypad > KeypadPtr;
typedef boost::shared_ptr< ::neo_msgs::Keypad const> KeypadConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::neo_msgs::Keypad_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::neo_msgs::Keypad_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::neo_msgs::Keypad_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::neo_msgs::Keypad_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_msgs::Keypad_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_msgs::Keypad_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_msgs::Keypad_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_msgs::Keypad_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::neo_msgs::Keypad_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cdd812e75f32f7f8c53f07222b1ffa3c";
  }

  static const char* value(const ::neo_msgs::Keypad_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcdd812e75f32f7f8ULL;
  static const uint64_t static_value2 = 0xc53f07222b1ffa3cULL;
};

template<class ContainerAllocator>
struct DataType< ::neo_msgs::Keypad_<ContainerAllocator> >
{
  static const char* value()
  {
    return "neo_msgs/Keypad";
  }

  static const char* value(const ::neo_msgs::Keypad_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::neo_msgs::Keypad_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool[5] button #5 button keypad\n"
;
  }

  static const char* value(const ::neo_msgs::Keypad_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::neo_msgs::Keypad_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.button);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Keypad_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::neo_msgs::Keypad_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::neo_msgs::Keypad_<ContainerAllocator>& v)
  {
    s << indent << "button[]" << std::endl;
    for (size_t i = 0; i < v.button.size(); ++i)
    {
      s << indent << "  button[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.button[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NEO_MSGS_MESSAGE_KEYPAD_H
