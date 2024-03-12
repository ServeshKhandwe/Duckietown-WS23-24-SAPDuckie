// Generated by gencpp from file duckietown_msgs/SceneSegments.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_SCENESEGMENTS_H
#define DUCKIETOWN_MSGS_MESSAGE_SCENESEGMENTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/Image.h>
#include <duckietown_msgs/Rect.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct SceneSegments_
{
  typedef SceneSegments_<ContainerAllocator> Type;

  SceneSegments_()
    : segimage()
    , rects()  {
    }
  SceneSegments_(const ContainerAllocator& _alloc)
    : segimage(_alloc)
    , rects(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _segimage_type;
  _segimage_type segimage;

   typedef std::vector< ::duckietown_msgs::Rect_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::Rect_<ContainerAllocator> >::other >  _rects_type;
  _rects_type rects;





  typedef boost::shared_ptr< ::duckietown_msgs::SceneSegments_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::SceneSegments_<ContainerAllocator> const> ConstPtr;

}; // struct SceneSegments_

typedef ::duckietown_msgs::SceneSegments_<std::allocator<void> > SceneSegments;

typedef boost::shared_ptr< ::duckietown_msgs::SceneSegments > SceneSegmentsPtr;
typedef boost::shared_ptr< ::duckietown_msgs::SceneSegments const> SceneSegmentsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::SceneSegments_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SceneSegments_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SceneSegments_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SceneSegments_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2aa3c1097b948038841bf28c11cf95cb";
  }

  static const char* value(const ::duckietown_msgs::SceneSegments_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2aa3c1097b948038ULL;
  static const uint64_t static_value2 = 0x841bf28c11cf95cbULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/SceneSegments";
  }

  static const char* value(const ::duckietown_msgs::SceneSegments_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/Image segimage\n\
duckietown_msgs/Rect[] rects\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of camera\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
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
MSG: duckietown_msgs/Rect\n\
# all in pixel coordinate\n\
# (x, y, w, h) defines a rectangle\n\
int32 x\n\
int32 y\n\
int32 w\n\
int32 h\n\
";
  }

  static const char* value(const ::duckietown_msgs::SceneSegments_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.segimage);
      stream.next(m.rects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SceneSegments_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::SceneSegments_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::SceneSegments_<ContainerAllocator>& v)
  {
    s << indent << "segimage: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.segimage);
    s << indent << "rects[]" << std::endl;
    for (size_t i = 0; i < v.rects.size(); ++i)
    {
      s << indent << "  rects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::Rect_<ContainerAllocator> >::stream(s, indent + "    ", v.rects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_SCENESEGMENTS_H
