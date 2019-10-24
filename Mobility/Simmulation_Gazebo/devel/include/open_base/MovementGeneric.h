// Generated by gencpp from file open_base/MovementGeneric.msg
// DO NOT EDIT!


#ifndef OPEN_BASE_MESSAGE_MOVEMENTGENERIC_H
#define OPEN_BASE_MESSAGE_MOVEMENTGENERIC_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>

namespace open_base
{
template <class ContainerAllocator>
struct MovementGeneric_
{
  typedef MovementGeneric_<ContainerAllocator> Type;

  MovementGeneric_()
    : type(0)
    , frame(0)
    , target()  {
    }
  MovementGeneric_(const ContainerAllocator& _alloc)
    : type(0)
    , frame(0)
    , target(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;

   typedef uint8_t _frame_type;
  _frame_type frame;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _target_type;
  _target_type target;





  typedef boost::shared_ptr< ::open_base::MovementGeneric_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_base::MovementGeneric_<ContainerAllocator> const> ConstPtr;

}; // struct MovementGeneric_

typedef ::open_base::MovementGeneric_<std::allocator<void> > MovementGeneric;

typedef boost::shared_ptr< ::open_base::MovementGeneric > MovementGenericPtr;
typedef boost::shared_ptr< ::open_base::MovementGeneric const> MovementGenericConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_base::MovementGeneric_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_base::MovementGeneric_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::open_base::MovementGeneric_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_base::MovementGeneric_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::MovementGeneric_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::MovementGeneric_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::MovementGeneric_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::MovementGeneric_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_base::MovementGeneric_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4524cf69d2ddd194d9c04f05478153fd";
  }

  static const char* value(const ::open_base::MovementGeneric_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4524cf69d2ddd194ULL;
  static const uint64_t static_value2 = 0xd9c04f05478153fdULL;
};

template<class ContainerAllocator>
struct DataType< ::open_base::MovementGeneric_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_base/MovementGeneric";
  }

  static const char* value(const ::open_base::MovementGeneric_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_base::MovementGeneric_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 type\n"
"uint8 frame\n"
"geometry_msgs/Pose2D target\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
;
  }

  static const char* value(const ::open_base::MovementGeneric_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_base::MovementGeneric_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.frame);
      stream.next(m.target);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MovementGeneric_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_base::MovementGeneric_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_base::MovementGeneric_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frame);
    s << indent << "target: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.target);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_BASE_MESSAGE_MOVEMENTGENERIC_H
