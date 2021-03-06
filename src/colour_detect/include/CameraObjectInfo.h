

#ifndef CAMERAOBJECTINFO_H
#define CAMERAOBJECTINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace colour_detect
{
template <class ContainerAllocator>
struct CameraObjectInfo_
{
  typedef CameraObjectInfo_<ContainerAllocator> Type;

  CameraObjectInfo_()
    : header()
    , pos_x(0)
    , pos_y(0)
    , frame_width(0)
    , frame_height(0)
    , confidence(0.0)
    , distance_to_colour(0.0)  {
    }
  CameraObjectInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pos_x(0)
    , pos_y(0)
    , frame_width(0)
    , frame_height(0)
    , confidence(0.0)
    , distance_to_colour(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int16_t _pos_x_type;
  _pos_x_type pos_x;

   typedef int16_t _pos_y_type;
  _pos_y_type pos_y;

   typedef int16_t _frame_width_type;
  _frame_width_type frame_width;

   typedef int16_t _frame_height_type;
  _frame_height_type frame_height;

   typedef double _confidence_type;
  _confidence_type confidence;

   typedef double _distance_to_colour_type;
  _distance_to_colour_type distance_to_colour;





  typedef boost::shared_ptr< ::colour_detect::CameraObjectInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::colour_detect::CameraObjectInfo_<ContainerAllocator> const> ConstPtr;

}; // struct CameraObjectInfo_

typedef ::colour_detect::CameraObjectInfo_<std::allocator<void> > CameraObjectInfo;

typedef boost::shared_ptr< ::colour_detect::CameraObjectInfo > CameraObjectInfoPtr;
typedef boost::shared_ptr< ::colour_detect::CameraObjectInfo const> CameraObjectInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::colour_detect::CameraObjectInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace colour_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::colour_detect::CameraObjectInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::colour_detect::CameraObjectInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::colour_detect::CameraObjectInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ebfb18146cb57c2d9173e1284983ed9a";
  }

  static const char* value(const ::colour_detect::CameraObjectInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xebfb18146cb57c2dULL;
  static const uint64_t static_value2 = 0x9173e1284983ed9aULL;
};

template<class ContainerAllocator>
struct DataType< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "colour_detect/CameraObjectInfo";
  }

  static const char* value(const ::colour_detect::CameraObjectInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
#Position of object in frame\n\
int16 pos_x\n\
int16 pos_y\n\
\n\
#Camera frame size\n\
int16 frame_width\n\
int16 frame_height\n\
\n\
#range [0 , 1]\n\
float64 confidence\n\
\n\
#Distance\n\
float64 distance_to_colour \n\
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

  static const char* value(const ::colour_detect::CameraObjectInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pos_x);
      stream.next(m.pos_y);
      stream.next(m.frame_width);
      stream.next(m.frame_height);
      stream.next(m.confidence);
      stream.next(m.distance_to_colour);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraObjectInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::colour_detect::CameraObjectInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::colour_detect::CameraObjectInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pos_x: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pos_x);
    s << indent << "pos_y: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pos_y);
    s << indent << "frame_width: ";
    Printer<int16_t>::stream(s, indent + "  ", v.frame_width);
    s << indent << "frame_height: ";
    Printer<int16_t>::stream(s, indent + "  ", v.frame_height);
    s << indent << "confidence: ";
    Printer<double>::stream(s, indent + "  ", v.confidence);
    s << indent << "distance_to_colour: ";
    Printer<double>::stream(s, indent + "  ", v.distance_to_colour);
  }
};

} // namespace message_operations
} // namespace ros

#endif //MSGS_MESSAGE_CAMERAOBJECTINFO_H
