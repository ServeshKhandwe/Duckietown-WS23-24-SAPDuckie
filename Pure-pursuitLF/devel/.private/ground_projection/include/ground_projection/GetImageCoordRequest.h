// Generated by gencpp from file ground_projection/GetImageCoordRequest.msg
// DO NOT EDIT!


#ifndef GROUND_PROJECTION_MESSAGE_GETIMAGECOORDREQUEST_H
#define GROUND_PROJECTION_MESSAGE_GETIMAGECOORDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace ground_projection
{
template <class ContainerAllocator>
struct GetImageCoordRequest_
{
  typedef GetImageCoordRequest_<ContainerAllocator> Type;

  GetImageCoordRequest_()
    : gp()  {
    }
  GetImageCoordRequest_(const ContainerAllocator& _alloc)
    : gp(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _gp_type;
  _gp_type gp;





  typedef boost::shared_ptr< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetImageCoordRequest_

typedef ::ground_projection::GetImageCoordRequest_<std::allocator<void> > GetImageCoordRequest;

typedef boost::shared_ptr< ::ground_projection::GetImageCoordRequest > GetImageCoordRequestPtr;
typedef boost::shared_ptr< ::ground_projection::GetImageCoordRequest const> GetImageCoordRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ground_projection::GetImageCoordRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ground_projection

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'duckietown_msgs': ['/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb06b1906fc6f1f5910a7d2012f835c0";
  }

  static const char* value(const ::ground_projection::GetImageCoordRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb06b1906fc6f1f5ULL;
  static const uint64_t static_value2 = 0x910a7d2012f835c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ground_projection/GetImageCoordRequest";
  }

  static const char* value(const ::ground_projection::GetImageCoordRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
geometry_msgs/Point gp\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::ground_projection::GetImageCoordRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetImageCoordRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ground_projection::GetImageCoordRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ground_projection::GetImageCoordRequest_<ContainerAllocator>& v)
  {
    s << indent << "gp: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.gp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GROUND_PROJECTION_MESSAGE_GETIMAGECOORDREQUEST_H
