// Generated by gencpp from file quadrobot_msgs/Plane.msg
// DO NOT EDIT!


#ifndef QUADROBOT_MSGS_MESSAGE_PLANE_H
#define QUADROBOT_MSGS_MESSAGE_PLANE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace quadrobot_msgs
{
template <class ContainerAllocator>
struct Plane_
{
  typedef Plane_<ContainerAllocator> Type;

  Plane_()
    : header()
    , width(0.0)
    , height(0.0)
    , depth(0.0)
    , points()
    , coef()  {
      coef.assign(0.0);
  }
  Plane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , width(0.0)
    , height(0.0)
    , depth(0.0)
    , points()
    , coef()  {
  (void)_alloc;
      points.assign( ::geometry_msgs::Point_<ContainerAllocator> (_alloc));

      coef.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _width_type;
  _width_type width;

   typedef double _height_type;
  _height_type height;

   typedef double _depth_type;
  _depth_type depth;

   typedef boost::array< ::geometry_msgs::Point_<ContainerAllocator> , 9>  _points_type;
  _points_type points;

   typedef boost::array<double, 4>  _coef_type;
  _coef_type coef;




  typedef boost::shared_ptr< ::quadrobot_msgs::Plane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quadrobot_msgs::Plane_<ContainerAllocator> const> ConstPtr;

}; // struct Plane_

typedef ::quadrobot_msgs::Plane_<std::allocator<void> > Plane;

typedef boost::shared_ptr< ::quadrobot_msgs::Plane > PlanePtr;
typedef boost::shared_ptr< ::quadrobot_msgs::Plane const> PlaneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quadrobot_msgs::Plane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quadrobot_msgs::Plane_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace quadrobot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'quadrobot_msgs': ['/home/jjm/workspace/ROS/quadrobot_ws/src/quadrobot_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::quadrobot_msgs::Plane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quadrobot_msgs::Plane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrobot_msgs::Plane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrobot_msgs::Plane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrobot_msgs::Plane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrobot_msgs::Plane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quadrobot_msgs::Plane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d7d25a507c9272b53bddfa94d0a5afb";
  }

  static const char* value(const ::quadrobot_msgs::Plane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d7d25a507c9272bULL;
  static const uint64_t static_value2 = 0x53bddfa94d0a5afbULL;
};

template<class ContainerAllocator>
struct DataType< ::quadrobot_msgs::Plane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quadrobot_msgs/Plane";
  }

  static const char* value(const ::quadrobot_msgs::Plane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quadrobot_msgs::Plane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Custom message for Quadrobot\n\
\n\
Header header\n\
float64 width\n\
float64 height\n\
float64 depth\n\
geometry_msgs/Point[9] points   # 8 points and center point of the cuboid\n\
float64[4] coef                 # Representation of a plane, using the plane equation ax + by + cz + d = 0\n\
                                # float64[0] = a, float64[1] = b, ...\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::quadrobot_msgs::Plane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quadrobot_msgs::Plane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.depth);
      stream.next(m.points);
      stream.next(m.coef);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Plane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quadrobot_msgs::Plane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quadrobot_msgs::Plane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "width: ";
    Printer<double>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "depth: ";
    Printer<double>::stream(s, indent + "  ", v.depth);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "coef[]" << std::endl;
    for (size_t i = 0; i < v.coef.size(); ++i)
    {
      s << indent << "  coef[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.coef[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUADROBOT_MSGS_MESSAGE_PLANE_H
