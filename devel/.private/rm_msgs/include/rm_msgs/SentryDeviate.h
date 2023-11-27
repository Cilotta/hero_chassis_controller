// Generated by gencpp from file rm_msgs/SentryDeviate.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_SENTRYDEVIATE_H
#define RM_MSGS_MESSAGE_SENTRYDEVIATE_H


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
struct SentryDeviate_
{
  typedef SentryDeviate_<ContainerAllocator> Type;

  SentryDeviate_()
    : deviate_x(0.0)
    , deviate_y(0.0)
    , isDeviate(false)  {
    }
  SentryDeviate_(const ContainerAllocator& _alloc)
    : deviate_x(0.0)
    , deviate_y(0.0)
    , isDeviate(false)  {
  (void)_alloc;
    }



   typedef float _deviate_x_type;
  _deviate_x_type deviate_x;

   typedef float _deviate_y_type;
  _deviate_y_type deviate_y;

   typedef uint8_t _isDeviate_type;
  _isDeviate_type isDeviate;





  typedef boost::shared_ptr< ::rm_msgs::SentryDeviate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::SentryDeviate_<ContainerAllocator> const> ConstPtr;

}; // struct SentryDeviate_

typedef ::rm_msgs::SentryDeviate_<std::allocator<void> > SentryDeviate;

typedef boost::shared_ptr< ::rm_msgs::SentryDeviate > SentryDeviatePtr;
typedef boost::shared_ptr< ::rm_msgs::SentryDeviate const> SentryDeviateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::SentryDeviate_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::SentryDeviate_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::SentryDeviate_<ContainerAllocator1> & lhs, const ::rm_msgs::SentryDeviate_<ContainerAllocator2> & rhs)
{
  return lhs.deviate_x == rhs.deviate_x &&
    lhs.deviate_y == rhs.deviate_y &&
    lhs.isDeviate == rhs.isDeviate;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::SentryDeviate_<ContainerAllocator1> & lhs, const ::rm_msgs::SentryDeviate_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::SentryDeviate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::SentryDeviate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::SentryDeviate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::SentryDeviate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::SentryDeviate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::SentryDeviate_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::SentryDeviate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c69b176feecb141daf67e3748f91a86";
  }

  static const char* value(const ::rm_msgs::SentryDeviate_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c69b176feecb141ULL;
  static const uint64_t static_value2 = 0xdaf67e3748f91a86ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::SentryDeviate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/SentryDeviate";
  }

  static const char* value(const ::rm_msgs::SentryDeviate_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::SentryDeviate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 deviate_x\n"
"float32 deviate_y\n"
"bool isDeviate\n"
;
  }

  static const char* value(const ::rm_msgs::SentryDeviate_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::SentryDeviate_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.deviate_x);
      stream.next(m.deviate_y);
      stream.next(m.isDeviate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SentryDeviate_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::SentryDeviate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::SentryDeviate_<ContainerAllocator>& v)
  {
    s << indent << "deviate_x: ";
    Printer<float>::stream(s, indent + "  ", v.deviate_x);
    s << indent << "deviate_y: ";
    Printer<float>::stream(s, indent + "  ", v.deviate_y);
    s << indent << "isDeviate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isDeviate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_SENTRYDEVIATE_H