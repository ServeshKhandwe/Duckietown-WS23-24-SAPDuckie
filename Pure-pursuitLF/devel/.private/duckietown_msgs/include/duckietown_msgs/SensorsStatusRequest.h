// Generated by gencpp from file duckietown_msgs/SensorsStatusRequest.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_SENSORSSTATUSREQUEST_H
#define DUCKIETOWN_MSGS_MESSAGE_SENSORSSTATUSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace duckietown_msgs
{
template <class ContainerAllocator>
struct SensorsStatusRequest_
{
  typedef SensorsStatusRequest_<ContainerAllocator> Type;

  SensorsStatusRequest_()
    : state(false)  {
    }
  SensorsStatusRequest_(const ContainerAllocator& _alloc)
    : state(false)  {
  (void)_alloc;
    }



   typedef uint8_t _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SensorsStatusRequest_

typedef ::duckietown_msgs::SensorsStatusRequest_<std::allocator<void> > SensorsStatusRequest;

typedef boost::shared_ptr< ::duckietown_msgs::SensorsStatusRequest > SensorsStatusRequestPtr;
typedef boost::shared_ptr< ::duckietown_msgs::SensorsStatusRequest const> SensorsStatusRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "001fde3cab9e313a150416ff09c08ee4";
  }

  static const char* value(const ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x001fde3cab9e313aULL;
  static const uint64_t static_value2 = 0x150416ff09c08ee4ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/SensorsStatusRequest";
  }

  static const char* value(const ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool state\n\
";
  }

  static const char* value(const ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorsStatusRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::SensorsStatusRequest_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_SENSORSSTATUSREQUEST_H