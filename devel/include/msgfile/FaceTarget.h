// Generated by gencpp from file msgfile/FaceTarget.msg
// DO NOT EDIT!


#ifndef MSGFILE_MESSAGE_FACETARGET_H
#define MSGFILE_MESSAGE_FACETARGET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace msgfile
{
template <class ContainerAllocator>
struct FaceTarget_
{
  typedef FaceTarget_<ContainerAllocator> Type;

  FaceTarget_()
    : header()
    , cmd()
    , target()  {
    }
  FaceTarget_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cmd(_alloc)
    , target(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_type;
  _cmd_type cmd;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _target_type;
  _target_type target;




  typedef boost::shared_ptr< ::msgfile::FaceTarget_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgfile::FaceTarget_<ContainerAllocator> const> ConstPtr;

}; // struct FaceTarget_

typedef ::msgfile::FaceTarget_<std::allocator<void> > FaceTarget;

typedef boost::shared_ptr< ::msgfile::FaceTarget > FaceTargetPtr;
typedef boost::shared_ptr< ::msgfile::FaceTarget const> FaceTargetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgfile::FaceTarget_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgfile::FaceTarget_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msgfile

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'msgfile': ['/home/sanghongrui/catkin_ws/src/msgfile/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msgfile::FaceTarget_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgfile::FaceTarget_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgfile::FaceTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgfile::FaceTarget_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgfile::FaceTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgfile::FaceTarget_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgfile::FaceTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "04a005a5867c4d41196138f92451713b";
  }

  static const char* value(const ::msgfile::FaceTarget_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x04a005a5867c4d41ULL;
  static const uint64_t static_value2 = 0x196138f92451713bULL;
};

template<class ContainerAllocator>
struct DataType< ::msgfile::FaceTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgfile/FaceTarget";
  }

  static const char* value(const ::msgfile::FaceTarget_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgfile::FaceTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string  cmd\n\
geometry_msgs/Point target\n\
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
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::msgfile::FaceTarget_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgfile::FaceTarget_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cmd);
      stream.next(m.target);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceTarget_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgfile::FaceTarget_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msgfile::FaceTarget_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd);
    s << indent << "target: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.target);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGFILE_MESSAGE_FACETARGET_H