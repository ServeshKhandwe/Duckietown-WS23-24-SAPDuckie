// Generated by gencpp from file duckietown_msgs/LEDDetectionDebugInfo.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_LEDDETECTIONDEBUGINFO_H
#define DUCKIETOWN_MSGS_MESSAGE_LEDDETECTIONDEBUGINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/CompressedImage.h>
#include <duckietown_msgs/Vector2D.h>
#include <duckietown_msgs/LEDDetectionArray.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct LEDDetectionDebugInfo_
{
  typedef LEDDetectionDebugInfo_<ContainerAllocator> Type;

  LEDDetectionDebugInfo_()
    : state(0)
    , capture_progress(0.0)
    , cell_size()
    , crop_rect_norm()
    , variance_map()
    , candidates()
    , led_all_unfiltered()  {
      cell_size.assign(0);

      crop_rect_norm.assign(0.0);
  }
  LEDDetectionDebugInfo_(const ContainerAllocator& _alloc)
    : state(0)
    , capture_progress(0.0)
    , cell_size()
    , crop_rect_norm()
    , variance_map(_alloc)
    , candidates(_alloc)
    , led_all_unfiltered(_alloc)  {
  (void)_alloc;
      cell_size.assign(0);

      crop_rect_norm.assign(0.0);
  }



   typedef uint8_t _state_type;
  _state_type state;

   typedef float _capture_progress_type;
  _capture_progress_type capture_progress;

   typedef boost::array<uint32_t, 2>  _cell_size_type;
  _cell_size_type cell_size;

   typedef boost::array<float, 4>  _crop_rect_norm_type;
  _crop_rect_norm_type crop_rect_norm;

   typedef  ::sensor_msgs::CompressedImage_<ContainerAllocator>  _variance_map_type;
  _variance_map_type variance_map;

   typedef std::vector< ::duckietown_msgs::Vector2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::Vector2D_<ContainerAllocator> >::other >  _candidates_type;
  _candidates_type candidates;

   typedef  ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator>  _led_all_unfiltered_type;
  _led_all_unfiltered_type led_all_unfiltered;





  typedef boost::shared_ptr< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> const> ConstPtr;

}; // struct LEDDetectionDebugInfo_

typedef ::duckietown_msgs::LEDDetectionDebugInfo_<std::allocator<void> > LEDDetectionDebugInfo;

typedef boost::shared_ptr< ::duckietown_msgs::LEDDetectionDebugInfo > LEDDetectionDebugInfoPtr;
typedef boost::shared_ptr< ::duckietown_msgs::LEDDetectionDebugInfo const> LEDDetectionDebugInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be212adc91f6527a99fc828df2018200";
  }

  static const char* value(const ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe212adc91f6527aULL;
  static const uint64_t static_value2 = 0x99fc828df2018200ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/LEDDetectionDebugInfo";
  }

  static const char* value(const ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 state # 0: idle, 1: capturing, 2: processing\n\
float32 capture_progress\n\
\n\
uint32[2] cell_size\n\
float32[4] crop_rect_norm\n\
\n\
sensor_msgs/CompressedImage variance_map\n\
Vector2D[] candidates\n\
\n\
LEDDetectionArray led_all_unfiltered\n\
\n\
================================================================================\n\
MSG: sensor_msgs/CompressedImage\n\
# This message contains a compressed image\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of camera\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
\n\
string format        # Specifies the format of the data\n\
                     #   Acceptable values:\n\
                     #     jpeg, png\n\
uint8[] data         # Compressed image buffer\n\
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
\n\
================================================================================\n\
MSG: duckietown_msgs/Vector2D\n\
float32 x\n\
float32 y\n\
\n\
================================================================================\n\
MSG: duckietown_msgs/LEDDetectionArray\n\
LEDDetection[] detections\n\
================================================================================\n\
MSG: duckietown_msgs/LEDDetection\n\
time timestamp1		# initial timestamp of the camera stream used \n\
time timestamp2		# final timestamp of the camera stream used \n\
Vector2D pixels_normalized\n\
float32 frequency \n\
string color        # will be r, g or b \n\
float32 confidence  # some value of confidence for the detection (TBD)\n\
\n\
# for debug/visualization\n\
float64[] signal_ts\n\
float32[] signal\n\
float32[] fft_fs\n\
float32[] fft\n\
";
  }

  static const char* value(const ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.capture_progress);
      stream.next(m.cell_size);
      stream.next(m.crop_rect_norm);
      stream.next(m.variance_map);
      stream.next(m.candidates);
      stream.next(m.led_all_unfiltered);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LEDDetectionDebugInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::LEDDetectionDebugInfo_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "capture_progress: ";
    Printer<float>::stream(s, indent + "  ", v.capture_progress);
    s << indent << "cell_size[]" << std::endl;
    for (size_t i = 0; i < v.cell_size.size(); ++i)
    {
      s << indent << "  cell_size[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.cell_size[i]);
    }
    s << indent << "crop_rect_norm[]" << std::endl;
    for (size_t i = 0; i < v.crop_rect_norm.size(); ++i)
    {
      s << indent << "  crop_rect_norm[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.crop_rect_norm[i]);
    }
    s << indent << "variance_map: ";
    s << std::endl;
    Printer< ::sensor_msgs::CompressedImage_<ContainerAllocator> >::stream(s, indent + "  ", v.variance_map);
    s << indent << "candidates[]" << std::endl;
    for (size_t i = 0; i < v.candidates.size(); ++i)
    {
      s << indent << "  candidates[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::Vector2D_<ContainerAllocator> >::stream(s, indent + "    ", v.candidates[i]);
    }
    s << indent << "led_all_unfiltered: ";
    s << std::endl;
    Printer< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >::stream(s, indent + "  ", v.led_all_unfiltered);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_LEDDETECTIONDEBUGINFO_H
