// Generated by gencpp from file navigation/GraphSearchResponse.msg
// DO NOT EDIT!


#ifndef NAVIGATION_MESSAGE_GRAPHSEARCHRESPONSE_H
#define NAVIGATION_MESSAGE_GRAPHSEARCHRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace navigation
{
template <class ContainerAllocator>
struct GraphSearchResponse_
{
  typedef GraphSearchResponse_<ContainerAllocator> Type;

  GraphSearchResponse_()
    : actions()  {
    }
  GraphSearchResponse_(const ContainerAllocator& _alloc)
    : actions(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _actions_type;
  _actions_type actions;





  typedef boost::shared_ptr< ::navigation::GraphSearchResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation::GraphSearchResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GraphSearchResponse_

typedef ::navigation::GraphSearchResponse_<std::allocator<void> > GraphSearchResponse;

typedef boost::shared_ptr< ::navigation::GraphSearchResponse > GraphSearchResponsePtr;
typedef boost::shared_ptr< ::navigation::GraphSearchResponse const> GraphSearchResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::navigation::GraphSearchResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::navigation::GraphSearchResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace navigation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::navigation::GraphSearchResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::navigation::GraphSearchResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::GraphSearchResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::GraphSearchResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::GraphSearchResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::GraphSearchResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::navigation::GraphSearchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f07885866f2898e1d5d5a009ea44ae10";
  }

  static const char* value(const ::navigation::GraphSearchResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf07885866f2898e1ULL;
  static const uint64_t static_value2 = 0xd5d5a009ea44ae10ULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation::GraphSearchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "navigation/GraphSearchResponse";
  }

  static const char* value(const ::navigation::GraphSearchResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::navigation::GraphSearchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] actions\n\
\n\
";
  }

  static const char* value(const ::navigation::GraphSearchResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::navigation::GraphSearchResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.actions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraphSearchResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation::GraphSearchResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::navigation::GraphSearchResponse_<ContainerAllocator>& v)
  {
    s << indent << "actions[]" << std::endl;
    for (size_t i = 0; i < v.actions.size(); ++i)
    {
      s << indent << "  actions[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.actions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_MESSAGE_GRAPHSEARCHRESPONSE_H
