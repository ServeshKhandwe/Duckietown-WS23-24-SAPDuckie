// Generated by gencpp from file duckietown_msgs/CoordinationSignal.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_COORDINATIONSIGNAL_H
#define DUCKIETOWN_MSGS_MESSAGE_COORDINATIONSIGNAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct CoordinationSignal_
{
  typedef CoordinationSignal_<ContainerAllocator> Type;

  CoordinationSignal_()
    : header()
    , signal()  {
    }
  CoordinationSignal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , signal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _signal_type;
  _signal_type signal;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  OFF;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ON;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SIGNAL_A;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SIGNAL_B;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SIGNAL_C;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SIGNAL_GREEN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SIGNAL_PRIORITY;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SIGNAL_SACRIFICE_FOR_PRIORITY;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TL_GO_ALL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TL_STOP_ALL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TL_GO_N;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TL_GO_S;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TL_GO_W;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TL_GO_E;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TL_YIELD;

  typedef boost::shared_ptr< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> const> ConstPtr;

}; // struct CoordinationSignal_

typedef ::duckietown_msgs::CoordinationSignal_<std::allocator<void> > CoordinationSignal;

typedef boost::shared_ptr< ::duckietown_msgs::CoordinationSignal > CoordinationSignalPtr;
typedef boost::shared_ptr< ::duckietown_msgs::CoordinationSignal const> CoordinationSignalConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::OFF =
        
          "light_off"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::ON =
        
          "traffic_light_go"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::SIGNAL_A =
        
          "CAR_SIGNAL_A"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::SIGNAL_B =
        
          "CAR_SIGNAL_B"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::SIGNAL_C =
        
          "CAR_SIGNAL_C"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::SIGNAL_GREEN =
        
          "CAR_SIGNAL_GREEN"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::SIGNAL_PRIORITY =
        
          "CAR_SIGNAL_PRIORITY"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::SIGNAL_SACRIFICE_FOR_PRIORITY =
        
          "CAR_SIGNAL_SACRIFICE_FOR_PRIORITY"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::TL_GO_ALL =
        
          "tl_go_all"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::TL_STOP_ALL =
        
          "tl_stop_all"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::TL_GO_N =
        
          "tl_go_N"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::TL_GO_S =
        
          "tl_go_S"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::TL_GO_W =
        
          "tl_go_W"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::TL_GO_E =
        
          "tl_go_E"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CoordinationSignal_<ContainerAllocator>::TL_YIELD =
        
          "tl_yield"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3caa78ed5f7d2e4ac24db630f8ee77a8";
  }

  static const char* value(const ::duckietown_msgs::CoordinationSignal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3caa78ed5f7d2e4aULL;
  static const uint64_t static_value2 = 0xc24db630f8ee77a8ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/CoordinationSignal";
  }

  static const char* value(const ::duckietown_msgs::CoordinationSignal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
string signal\n\
\n\
# these must match with LED_protocol.yaml\n\
string OFF=light_off\n\
#string ON = light_on\n\
string ON=traffic_light_go\n\
string SIGNAL_A=CAR_SIGNAL_A\n\
string SIGNAL_B=CAR_SIGNAL_B\n\
string SIGNAL_C=CAR_SIGNAL_C\n\
string SIGNAL_GREEN = CAR_SIGNAL_GREEN\n\
string SIGNAL_PRIORITY = CAR_SIGNAL_PRIORITY\n\
string SIGNAL_SACRIFICE_FOR_PRIORITY = CAR_SIGNAL_SACRIFICE_FOR_PRIORITY\n\
\n\
string TL_GO_ALL=tl_go_all\n\
string TL_STOP_ALL=tl_stop_all\n\
string TL_GO_N=tl_go_N\n\
string TL_GO_S=tl_go_S\n\
string TL_GO_W=tl_go_W\n\
string TL_GO_E=tl_go_E\n\
string TL_YIELD=tl_yield\n\
\n\
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
";
  }

  static const char* value(const ::duckietown_msgs::CoordinationSignal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.signal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CoordinationSignal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::CoordinationSignal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::CoordinationSignal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "signal: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.signal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_COORDINATIONSIGNAL_H
