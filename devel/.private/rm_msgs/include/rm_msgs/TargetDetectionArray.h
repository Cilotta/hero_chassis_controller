// Generated by gencpp from file rm_msgs/TargetDetectionArray.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_TARGETDETECTIONARRAY_H
#define RM_MSGS_MESSAGE_TARGETDETECTIONARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <rm_msgs/TargetDetection.h>

namespace rm_msgs
{
template <class ContainerAllocator>
struct TargetDetectionArray_
{
  typedef TargetDetectionArray_<ContainerAllocator> Type;

  TargetDetectionArray_()
    : header()
    , detections()  {
    }
  TargetDetectionArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::rm_msgs::TargetDetection_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::rm_msgs::TargetDetection_<ContainerAllocator> >> _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> const> ConstPtr;

}; // struct TargetDetectionArray_

typedef ::rm_msgs::TargetDetectionArray_<std::allocator<void> > TargetDetectionArray;

typedef boost::shared_ptr< ::rm_msgs::TargetDetectionArray > TargetDetectionArrayPtr;
typedef boost::shared_ptr< ::rm_msgs::TargetDetectionArray const> TargetDetectionArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::TargetDetectionArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::TargetDetectionArray_<ContainerAllocator1> & lhs, const ::rm_msgs::TargetDetectionArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.detections == rhs.detections;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::TargetDetectionArray_<ContainerAllocator1> & lhs, const ::rm_msgs::TargetDetectionArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c50cbeffb44adbe69a39bc42cd0e9da";
  }

  static const char* value(const ::rm_msgs::TargetDetectionArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c50cbeffb44adbeULL;
  static const uint64_t static_value2 = 0x69a39bc42cd0e9daULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/TargetDetectionArray";
  }

  static const char* value(const ::rm_msgs::TargetDetectionArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"TargetDetection[] detections\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: rm_msgs/TargetDetection\n"
"uint8 id\n"
"float64 distance_to_image_center\n"
"float64 confidence\n"
"bool is_large_armor\n"
"geometry_msgs/Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::rm_msgs::TargetDetectionArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TargetDetectionArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::TargetDetectionArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::TargetDetectionArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rm_msgs::TargetDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_TARGETDETECTIONARRAY_H
