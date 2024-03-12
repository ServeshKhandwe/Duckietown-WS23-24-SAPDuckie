// Generated by gencpp from file duckietown_msgs/SetVariableResponse.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_SETVARIABLERESPONSE_H
#define DUCKIETOWN_MSGS_MESSAGE_SETVARIABLERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct SetVariableResponse_
{
  typedef SetVariableResponse_<ContainerAllocator> Type;

  SetVariableResponse_()
    : success_json()  {
    }
  SetVariableResponse_(const ContainerAllocator& _alloc)
    : success_json(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _success_json_type;
  _success_json_type success_json;





  typedef boost::shared_ptr< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetVariableResponse_

typedef ::duckietown_msgs::SetVariableResponse_<std::allocator<void> > SetVariableResponse;

typedef boost::shared_ptr< ::duckietown_msgs::SetVariableResponse > SetVariableResponsePtr;
typedef boost::shared_ptr< ::duckietown_msgs::SetVariableResponse const> SetVariableResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b40e451a7c63a6647ba8c4c52db0f4c";
  }

  static const char* value(const ::duckietown_msgs::SetVariableResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b40e451a7c63a66ULL;
  static const uint64_t static_value2 = 0x47ba8c4c52db0f4cULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/SetVariableResponse";
  }

  static const char* value(const ::duckietown_msgs::SetVariableResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String success_json\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::duckietown_msgs::SetVariableResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success_json);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetVariableResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::SetVariableResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::SetVariableResponse_<ContainerAllocator>& v)
  {
    s << indent << "success_json: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.success_json);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_SETVARIABLERESPONSE_H
