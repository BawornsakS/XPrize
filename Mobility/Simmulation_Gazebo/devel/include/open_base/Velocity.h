// Generated by gencpp from file open_base/Velocity.msg
// DO NOT EDIT!


#ifndef OPEN_BASE_MESSAGE_VELOCITY_H
#define OPEN_BASE_MESSAGE_VELOCITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace open_base
{
template <class ContainerAllocator>
struct Velocity_
{
  typedef Velocity_<ContainerAllocator> Type;

  Velocity_()
    : v_left(0.0)
    , v_back(0.0)
    , v_right(0.0)  {
    }
  Velocity_(const ContainerAllocator& _alloc)
    : v_left(0.0)
    , v_back(0.0)
    , v_right(0.0)  {
  (void)_alloc;
    }



   typedef double _v_left_type;
  _v_left_type v_left;

   typedef double _v_back_type;
  _v_back_type v_back;

   typedef double _v_right_type;
  _v_right_type v_right;





  typedef boost::shared_ptr< ::open_base::Velocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_base::Velocity_<ContainerAllocator> const> ConstPtr;

}; // struct Velocity_

typedef ::open_base::Velocity_<std::allocator<void> > Velocity;

typedef boost::shared_ptr< ::open_base::Velocity > VelocityPtr;
typedef boost::shared_ptr< ::open_base::Velocity const> VelocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_base::Velocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_base::Velocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace open_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'open_base': ['/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::open_base::Velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_base::Velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::Velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::Velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::Velocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::Velocity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_base::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8a5c19f362eee9352ab07da80a7261d";
  }

  static const char* value(const ::open_base::Velocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8a5c19f362eee93ULL;
  static const uint64_t static_value2 = 0x52ab07da80a7261dULL;
};

template<class ContainerAllocator>
struct DataType< ::open_base::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_base/Velocity";
  }

  static const char* value(const ::open_base::Velocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_base::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 v_left\n"
"float64 v_back\n"
"float64 v_right\n"
;
  }

  static const char* value(const ::open_base::Velocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_base::Velocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.v_left);
      stream.next(m.v_back);
      stream.next(m.v_right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Velocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_base::Velocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_base::Velocity_<ContainerAllocator>& v)
  {
    s << indent << "v_left: ";
    Printer<double>::stream(s, indent + "  ", v.v_left);
    s << indent << "v_back: ";
    Printer<double>::stream(s, indent + "  ", v.v_back);
    s << indent << "v_right: ";
    Printer<double>::stream(s, indent + "  ", v.v_right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_BASE_MESSAGE_VELOCITY_H
