// Generated by gencpp from file rm_msgs/GameRobotHp.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_GAMEROBOTHP_H
#define RM_MSGS_MESSAGE_GAMEROBOTHP_H


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
struct GameRobotHp_
{
  typedef GameRobotHp_<ContainerAllocator> Type;

  GameRobotHp_()
    : red_1_robot_hp(0)
    , red_2_robot_hp(0)
    , red_3_robot_hp(0)
    , red_4_robot_hp(0)
    , red_5_robot_hp(0)
    , red_7_robot_hp(0)
    , red_outpost_hp(0)
    , red_base_hp(0)
    , blue_1_robot_hp(0)
    , blue_2_robot_hp(0)
    , blue_3_robot_hp(0)
    , blue_4_robot_hp(0)
    , blue_5_robot_hp(0)
    , blue_7_robot_hp(0)
    , blue_outpost_hp(0)
    , blue_base_hp(0)
    , stamp()  {
    }
  GameRobotHp_(const ContainerAllocator& _alloc)
    : red_1_robot_hp(0)
    , red_2_robot_hp(0)
    , red_3_robot_hp(0)
    , red_4_robot_hp(0)
    , red_5_robot_hp(0)
    , red_7_robot_hp(0)
    , red_outpost_hp(0)
    , red_base_hp(0)
    , blue_1_robot_hp(0)
    , blue_2_robot_hp(0)
    , blue_3_robot_hp(0)
    , blue_4_robot_hp(0)
    , blue_5_robot_hp(0)
    , blue_7_robot_hp(0)
    , blue_outpost_hp(0)
    , blue_base_hp(0)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint16_t _red_1_robot_hp_type;
  _red_1_robot_hp_type red_1_robot_hp;

   typedef uint16_t _red_2_robot_hp_type;
  _red_2_robot_hp_type red_2_robot_hp;

   typedef uint16_t _red_3_robot_hp_type;
  _red_3_robot_hp_type red_3_robot_hp;

   typedef uint16_t _red_4_robot_hp_type;
  _red_4_robot_hp_type red_4_robot_hp;

   typedef uint16_t _red_5_robot_hp_type;
  _red_5_robot_hp_type red_5_robot_hp;

   typedef uint16_t _red_7_robot_hp_type;
  _red_7_robot_hp_type red_7_robot_hp;

   typedef uint16_t _red_outpost_hp_type;
  _red_outpost_hp_type red_outpost_hp;

   typedef uint16_t _red_base_hp_type;
  _red_base_hp_type red_base_hp;

   typedef uint16_t _blue_1_robot_hp_type;
  _blue_1_robot_hp_type blue_1_robot_hp;

   typedef uint16_t _blue_2_robot_hp_type;
  _blue_2_robot_hp_type blue_2_robot_hp;

   typedef uint16_t _blue_3_robot_hp_type;
  _blue_3_robot_hp_type blue_3_robot_hp;

   typedef uint16_t _blue_4_robot_hp_type;
  _blue_4_robot_hp_type blue_4_robot_hp;

   typedef uint16_t _blue_5_robot_hp_type;
  _blue_5_robot_hp_type blue_5_robot_hp;

   typedef uint16_t _blue_7_robot_hp_type;
  _blue_7_robot_hp_type blue_7_robot_hp;

   typedef uint16_t _blue_outpost_hp_type;
  _blue_outpost_hp_type blue_outpost_hp;

   typedef uint16_t _blue_base_hp_type;
  _blue_base_hp_type blue_base_hp;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::rm_msgs::GameRobotHp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::GameRobotHp_<ContainerAllocator> const> ConstPtr;

}; // struct GameRobotHp_

typedef ::rm_msgs::GameRobotHp_<std::allocator<void> > GameRobotHp;

typedef boost::shared_ptr< ::rm_msgs::GameRobotHp > GameRobotHpPtr;
typedef boost::shared_ptr< ::rm_msgs::GameRobotHp const> GameRobotHpConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::GameRobotHp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::GameRobotHp_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::GameRobotHp_<ContainerAllocator1> & lhs, const ::rm_msgs::GameRobotHp_<ContainerAllocator2> & rhs)
{
  return lhs.red_1_robot_hp == rhs.red_1_robot_hp &&
    lhs.red_2_robot_hp == rhs.red_2_robot_hp &&
    lhs.red_3_robot_hp == rhs.red_3_robot_hp &&
    lhs.red_4_robot_hp == rhs.red_4_robot_hp &&
    lhs.red_5_robot_hp == rhs.red_5_robot_hp &&
    lhs.red_7_robot_hp == rhs.red_7_robot_hp &&
    lhs.red_outpost_hp == rhs.red_outpost_hp &&
    lhs.red_base_hp == rhs.red_base_hp &&
    lhs.blue_1_robot_hp == rhs.blue_1_robot_hp &&
    lhs.blue_2_robot_hp == rhs.blue_2_robot_hp &&
    lhs.blue_3_robot_hp == rhs.blue_3_robot_hp &&
    lhs.blue_4_robot_hp == rhs.blue_4_robot_hp &&
    lhs.blue_5_robot_hp == rhs.blue_5_robot_hp &&
    lhs.blue_7_robot_hp == rhs.blue_7_robot_hp &&
    lhs.blue_outpost_hp == rhs.blue_outpost_hp &&
    lhs.blue_base_hp == rhs.blue_base_hp &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::GameRobotHp_<ContainerAllocator1> & lhs, const ::rm_msgs::GameRobotHp_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::GameRobotHp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::GameRobotHp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::GameRobotHp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::GameRobotHp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::GameRobotHp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::GameRobotHp_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::GameRobotHp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7dac0f90f929e26050336fbb51d5852f";
  }

  static const char* value(const ::rm_msgs::GameRobotHp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7dac0f90f929e260ULL;
  static const uint64_t static_value2 = 0x50336fbb51d5852fULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::GameRobotHp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/GameRobotHp";
  }

  static const char* value(const ::rm_msgs::GameRobotHp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::GameRobotHp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 red_1_robot_hp\n"
"uint16 red_2_robot_hp\n"
"uint16 red_3_robot_hp\n"
"uint16 red_4_robot_hp\n"
"uint16 red_5_robot_hp\n"
"uint16 red_7_robot_hp\n"
"uint16 red_outpost_hp\n"
"uint16 red_base_hp\n"
"uint16 blue_1_robot_hp\n"
"uint16 blue_2_robot_hp\n"
"uint16 blue_3_robot_hp\n"
"uint16 blue_4_robot_hp\n"
"uint16 blue_5_robot_hp\n"
"uint16 blue_7_robot_hp\n"
"uint16 blue_outpost_hp\n"
"uint16 blue_base_hp\n"
"\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::GameRobotHp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::GameRobotHp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.red_1_robot_hp);
      stream.next(m.red_2_robot_hp);
      stream.next(m.red_3_robot_hp);
      stream.next(m.red_4_robot_hp);
      stream.next(m.red_5_robot_hp);
      stream.next(m.red_7_robot_hp);
      stream.next(m.red_outpost_hp);
      stream.next(m.red_base_hp);
      stream.next(m.blue_1_robot_hp);
      stream.next(m.blue_2_robot_hp);
      stream.next(m.blue_3_robot_hp);
      stream.next(m.blue_4_robot_hp);
      stream.next(m.blue_5_robot_hp);
      stream.next(m.blue_7_robot_hp);
      stream.next(m.blue_outpost_hp);
      stream.next(m.blue_base_hp);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GameRobotHp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::GameRobotHp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::GameRobotHp_<ContainerAllocator>& v)
  {
    s << indent << "red_1_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.red_1_robot_hp);
    s << indent << "red_2_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.red_2_robot_hp);
    s << indent << "red_3_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.red_3_robot_hp);
    s << indent << "red_4_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.red_4_robot_hp);
    s << indent << "red_5_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.red_5_robot_hp);
    s << indent << "red_7_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.red_7_robot_hp);
    s << indent << "red_outpost_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.red_outpost_hp);
    s << indent << "red_base_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.red_base_hp);
    s << indent << "blue_1_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.blue_1_robot_hp);
    s << indent << "blue_2_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.blue_2_robot_hp);
    s << indent << "blue_3_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.blue_3_robot_hp);
    s << indent << "blue_4_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.blue_4_robot_hp);
    s << indent << "blue_5_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.blue_5_robot_hp);
    s << indent << "blue_7_robot_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.blue_7_robot_hp);
    s << indent << "blue_outpost_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.blue_outpost_hp);
    s << indent << "blue_base_hp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.blue_base_hp);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_GAMEROBOTHP_H
