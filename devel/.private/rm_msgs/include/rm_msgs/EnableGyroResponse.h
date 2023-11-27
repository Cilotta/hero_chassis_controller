// Generated by gencpp from file rm_msgs/EnableGyroResponse.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_ENABLEGYRORESPONSE_H
#define RM_MSGS_MESSAGE_ENABLEGYRORESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rm_msgs
{
template <class ContainerAllocator>
struct EnableGyroResponse_
{
  typedef EnableGyroResponse_<ContainerAllocator> Type;

  EnableGyroResponse_()
    : is_gyro(false)  {
    }
  EnableGyroResponse_(const ContainerAllocator& _alloc)
    : is_gyro(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_gyro_type;
  _is_gyro_type is_gyro;





  typedef boost::shared_ptr< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> const> ConstPtr;

}; // struct EnableGyroResponse_

typedef ::rm_msgs::EnableGyroResponse_<std::allocator<void> > EnableGyroResponse;

typedef boost::shared_ptr< ::rm_msgs::EnableGyroResponse > EnableGyroResponsePtr;
typedef boost::shared_ptr< ::rm_msgs::EnableGyroResponse const> EnableGyroResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::EnableGyroResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::EnableGyroResponse_<ContainerAllocator1> & lhs, const ::rm_msgs::EnableGyroResponse_<ContainerAllocator2> & rhs)
{
  return lhs.is_gyro == rhs.is_gyro;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::EnableGyroResponse_<ContainerAllocator1> & lhs, const ::rm_msgs::EnableGyroResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2d2f657da9f0ac44cd61b7b688bb7134";
  }

  static const char* value(const ::rm_msgs::EnableGyroResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2d2f657da9f0ac44ULL;
  static const uint64_t static_value2 = 0xcd61b7b688bb7134ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/EnableGyroResponse";
  }

  static const char* value(const ::rm_msgs::EnableGyroResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool is_gyro\n"
"\n"
;
  }

  static const char* value(const ::rm_msgs::EnableGyroResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_gyro);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnableGyroResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::EnableGyroResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::EnableGyroResponse_<ContainerAllocator>& v)
  {
    s << indent << "is_gyro: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_gyro);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_ENABLEGYRORESPONSE_H
