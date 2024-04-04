// Generated by gencpp from file test_roslib_comm/HeaderTest.msg
// DO NOT EDIT!


#ifndef TEST_ROSLIB_COMM_MESSAGE_HEADERTEST_H
#define TEST_ROSLIB_COMM_MESSAGE_HEADERTEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace test_roslib_comm
{
template <class ContainerAllocator>
struct HeaderTest_
{
  typedef HeaderTest_<ContainerAllocator> Type;

  HeaderTest_()
    : header()
    , i32(0)  {
    }
  HeaderTest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , i32(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _i32_type;
  _i32_type i32;





  typedef boost::shared_ptr< ::test_roslib_comm::HeaderTest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roslib_comm::HeaderTest_<ContainerAllocator> const> ConstPtr;

}; // struct HeaderTest_

typedef ::test_roslib_comm::HeaderTest_<std::allocator<void> > HeaderTest;

typedef boost::shared_ptr< ::test_roslib_comm::HeaderTest > HeaderTestPtr;
typedef boost::shared_ptr< ::test_roslib_comm::HeaderTest const> HeaderTestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roslib_comm::HeaderTest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_roslib_comm::HeaderTest_<ContainerAllocator1> & lhs, const ::test_roslib_comm::HeaderTest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.i32 == rhs.i32;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_roslib_comm::HeaderTest_<ContainerAllocator1> & lhs, const ::test_roslib_comm::HeaderTest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_roslib_comm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roslib_comm::HeaderTest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roslib_comm::HeaderTest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roslib_comm::HeaderTest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4426b8931bec8509041d64c6a89b54a2";
  }

  static const char* value(const ::test_roslib_comm::HeaderTest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4426b8931bec8509ULL;
  static const uint64_t static_value2 = 0x041d64c6a89b54a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roslib_comm/HeaderTest";
  }

  static const char* value(const ::test_roslib_comm::HeaderTest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32 i32\n"
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
;
  }

  static const char* value(const ::test_roslib_comm::HeaderTest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.i32);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HeaderTest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roslib_comm::HeaderTest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roslib_comm::HeaderTest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "i32: ";
    Printer<int32_t>::stream(s, indent + "  ", v.i32);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSLIB_COMM_MESSAGE_HEADERTEST_H
