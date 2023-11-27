// Generated by gencpp from file rm_msgs/SetLimitVelResponse.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_SETLIMITVELRESPONSE_H
#define RM_MSGS_MESSAGE_SETLIMITVELRESPONSE_H


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
struct SetLimitVelResponse_
{
  typedef SetLimitVelResponse_<ContainerAllocator> Type;

  SetLimitVelResponse_()
    : current_limit_vel(0.0)  {
    }
  SetLimitVelResponse_(const ContainerAllocator& _alloc)
    : current_limit_vel(0.0)  {
  (void)_alloc;
    }



   typedef float _current_limit_vel_type;
  _current_limit_vel_type current_limit_vel;





  typedef boost::shared_ptr< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetLimitVelResponse_

typedef ::rm_msgs::SetLimitVelResponse_<std::allocator<void> > SetLimitVelResponse;

typedef boost::shared_ptr< ::rm_msgs::SetLimitVelResponse > SetLimitVelResponsePtr;
typedef boost::shared_ptr< ::rm_msgs::SetLimitVelResponse const> SetLimitVelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator1> & lhs, const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator2> & rhs)
{
  return lhs.current_limit_vel == rhs.current_limit_vel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator1> & lhs, const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8cc9732843acc2684a34d93d83f2fde3";
  }

  static const char* value(const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8cc9732843acc268ULL;
  static const uint64_t static_value2 = 0x4a34d93d83f2fde3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/SetLimitVelResponse";
  }

  static const char* value(const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 current_limit_vel\n"
"\n"
;
  }

  static const char* value(const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current_limit_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetLimitVelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::SetLimitVelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::SetLimitVelResponse_<ContainerAllocator>& v)
  {
    s << indent << "current_limit_vel: ";
    Printer<float>::stream(s, indent + "  ", v.current_limit_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_SETLIMITVELRESPONSE_H
