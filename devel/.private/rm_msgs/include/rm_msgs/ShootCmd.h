// Generated by gencpp from file rm_msgs/ShootCmd.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_SHOOTCMD_H
#define RM_MSGS_MESSAGE_SHOOTCMD_H


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
struct ShootCmd_
{
  typedef ShootCmd_<ContainerAllocator> Type;

  ShootCmd_()
    : mode(0)
    , wheel_speed(0.0)
    , hz(0.0)
    , stamp()  {
    }
  ShootCmd_(const ContainerAllocator& _alloc)
    : mode(0)
    , wheel_speed(0.0)
    , hz(0.0)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef double _wheel_speed_type;
  _wheel_speed_type wheel_speed;

   typedef double _hz_type;
  _hz_type hz;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(STOP)
  #undef STOP
#endif
#if defined(_WIN32) && defined(READY)
  #undef READY
#endif
#if defined(_WIN32) && defined(PUSH)
  #undef PUSH
#endif
#if defined(_WIN32) && defined(SPEED_ZERO_FOR_TEST)
  #undef SPEED_ZERO_FOR_TEST
#endif
#if defined(_WIN32) && defined(SPEED_10M_PER_SECOND)
  #undef SPEED_10M_PER_SECOND
#endif
#if defined(_WIN32) && defined(SPEED_15M_PER_SECOND)
  #undef SPEED_15M_PER_SECOND
#endif
#if defined(_WIN32) && defined(SPEED_16M_PER_SECOND)
  #undef SPEED_16M_PER_SECOND
#endif
#if defined(_WIN32) && defined(SPEED_18M_PER_SECOND)
  #undef SPEED_18M_PER_SECOND
#endif
#if defined(_WIN32) && defined(SPEED_30M_PER_SECOND)
  #undef SPEED_30M_PER_SECOND
#endif

  enum {
    STOP = 0u,
    READY = 1u,
    PUSH = 2u,
    SPEED_ZERO_FOR_TEST = 0u,
    SPEED_10M_PER_SECOND = 1u,
    SPEED_15M_PER_SECOND = 2u,
    SPEED_16M_PER_SECOND = 3u,
    SPEED_18M_PER_SECOND = 4u,
    SPEED_30M_PER_SECOND = 5u,
  };


  typedef boost::shared_ptr< ::rm_msgs::ShootCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::ShootCmd_<ContainerAllocator> const> ConstPtr;

}; // struct ShootCmd_

typedef ::rm_msgs::ShootCmd_<std::allocator<void> > ShootCmd;

typedef boost::shared_ptr< ::rm_msgs::ShootCmd > ShootCmdPtr;
typedef boost::shared_ptr< ::rm_msgs::ShootCmd const> ShootCmdConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::ShootCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::ShootCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::ShootCmd_<ContainerAllocator1> & lhs, const ::rm_msgs::ShootCmd_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode &&
    lhs.wheel_speed == rhs.wheel_speed &&
    lhs.hz == rhs.hz &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::ShootCmd_<ContainerAllocator1> & lhs, const ::rm_msgs::ShootCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::ShootCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::ShootCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::ShootCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::ShootCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::ShootCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::ShootCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::ShootCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8993cce6e078c47eb12520efee766b30";
  }

  static const char* value(const ::rm_msgs::ShootCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8993cce6e078c47eULL;
  static const uint64_t static_value2 = 0xb12520efee766b30ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::ShootCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/ShootCmd";
  }

  static const char* value(const ::rm_msgs::ShootCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::ShootCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 STOP = 0\n"
"uint8 READY = 1\n"
"uint8 PUSH = 2\n"
"\n"
"uint8 SPEED_ZERO_FOR_TEST = 0\n"
"uint8 SPEED_10M_PER_SECOND = 1\n"
"uint8 SPEED_15M_PER_SECOND = 2\n"
"uint8 SPEED_16M_PER_SECOND = 3\n"
"uint8 SPEED_18M_PER_SECOND = 4\n"
"uint8 SPEED_30M_PER_SECOND = 5\n"
"\n"
"uint8 mode\n"
"float64 wheel_speed\n"
"float64 hz\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::ShootCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::ShootCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.wheel_speed);
      stream.next(m.hz);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShootCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::ShootCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::ShootCmd_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "wheel_speed: ";
    Printer<double>::stream(s, indent + "  ", v.wheel_speed);
    s << indent << "hz: ";
    Printer<double>::stream(s, indent + "  ", v.hz);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_SHOOTCMD_H
