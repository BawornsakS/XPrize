// Generated by gencpp from file open_base/MovementBezier.msg
// DO NOT EDIT!


#ifndef OPEN_BASE_MESSAGE_MOVEMENTBEZIER_H
#define OPEN_BASE_MESSAGE_MOVEMENTBEZIER_H


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
struct MovementBezier_
{
  typedef MovementBezier_<ContainerAllocator> Type;

  MovementBezier_()
    : frame(0)
    , targetTranslation()
    , targetRotation()
    , step(0.0)
    , offsetTraslation(false)
    , offsetRotation(false)  {
    }
  MovementBezier_(const ContainerAllocator& _alloc)
    : frame(0)
    , targetTranslation(_alloc)
    , targetRotation(_alloc)
    , step(0.0)
    , offsetTraslation(false)
    , offsetRotation(false)  {
  (void)_alloc;
    }



   typedef uint8_t _frame_type;
  _frame_type frame;

   typedef std::vector< ::geometry_msgs::Pose2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose2D_<ContainerAllocator> >::other >  _targetTranslation_type;
  _targetTranslation_type targetTranslation;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _targetRotation_type;
  _targetRotation_type targetRotation;

   typedef double _step_type;
  _step_type step;

   typedef uint8_t _offsetTraslation_type;
  _offsetTraslation_type offsetTraslation;

   typedef uint8_t _offsetRotation_type;
  _offsetRotation_type offsetRotation;





  typedef boost::shared_ptr< ::open_base::MovementBezier_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_base::MovementBezier_<ContainerAllocator> const> ConstPtr;

}; // struct MovementBezier_

typedef ::open_base::MovementBezier_<std::allocator<void> > MovementBezier;

typedef boost::shared_ptr< ::open_base::MovementBezier > MovementBezierPtr;
typedef boost::shared_ptr< ::open_base::MovementBezier const> MovementBezierConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_base::MovementBezier_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_base::MovementBezier_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace open_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'open_base': ['/home/xprize/Bally_Workspace/src/OpenBase/ROS/open_base/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::open_base::MovementBezier_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_base::MovementBezier_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::MovementBezier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::MovementBezier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::MovementBezier_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::MovementBezier_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_base::MovementBezier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ded95d34881d8c480a26fcec4fc049df";
  }

  static const char* value(const ::open_base::MovementBezier_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xded95d34881d8c48ULL;
  static const uint64_t static_value2 = 0x0a26fcec4fc049dfULL;
};

template<class ContainerAllocator>
struct DataType< ::open_base::MovementBezier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_base/MovementBezier";
  }

  static const char* value(const ::open_base::MovementBezier_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_base::MovementBezier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 frame\n"
"geometry_msgs/Pose2D[] targetTranslation\n"
"float64[] targetRotation\n"
"float64 step\n"
"bool offsetTraslation\n"
"bool offsetRotation\n"
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

  static const char* value(const ::open_base::MovementBezier_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_base::MovementBezier_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame);
      stream.next(m.targetTranslation);
      stream.next(m.targetRotation);
      stream.next(m.step);
      stream.next(m.offsetTraslation);
      stream.next(m.offsetRotation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MovementBezier_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_base::MovementBezier_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_base::MovementBezier_<ContainerAllocator>& v)
  {
    s << indent << "frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frame);
    s << indent << "targetTranslation[]" << std::endl;
    for (size_t i = 0; i < v.targetTranslation.size(); ++i)
    {
      s << indent << "  targetTranslation[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "    ", v.targetTranslation[i]);
    }
    s << indent << "targetRotation[]" << std::endl;
    for (size_t i = 0; i < v.targetRotation.size(); ++i)
    {
      s << indent << "  targetRotation[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.targetRotation[i]);
    }
    s << indent << "step: ";
    Printer<double>::stream(s, indent + "  ", v.step);
    s << indent << "offsetTraslation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.offsetTraslation);
    s << indent << "offsetRotation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.offsetRotation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_BASE_MESSAGE_MOVEMENTBEZIER_H
