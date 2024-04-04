// Generated by gencpp from file test_rosmaster/TestString.msg
// DO NOT EDIT!


#ifndef TEST_ROSMASTER_MESSAGE_TESTSTRING_H
#define TEST_ROSMASTER_MESSAGE_TESTSTRING_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_rosmaster
{
template <class ContainerAllocator>
struct TestString_
{
  typedef TestString_<ContainerAllocator> Type;

  TestString_()
    : caller_id()
    , orig_caller_id()
    , data()  {
    }
  TestString_(const ContainerAllocator& _alloc)
    : caller_id(_alloc)
    , orig_caller_id(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _caller_id_type;
  _caller_id_type caller_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _orig_caller_id_type;
  _orig_caller_id_type orig_caller_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::test_rosmaster::TestString_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosmaster::TestString_<ContainerAllocator> const> ConstPtr;

}; // struct TestString_

typedef ::test_rosmaster::TestString_<std::allocator<void> > TestString;

typedef boost::shared_ptr< ::test_rosmaster::TestString > TestStringPtr;
typedef boost::shared_ptr< ::test_rosmaster::TestString const> TestStringConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosmaster::TestString_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosmaster::TestString_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_rosmaster::TestString_<ContainerAllocator1> & lhs, const ::test_rosmaster::TestString_<ContainerAllocator2> & rhs)
{
  return lhs.caller_id == rhs.caller_id &&
    lhs.orig_caller_id == rhs.orig_caller_id &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_rosmaster::TestString_<ContainerAllocator1> & lhs, const ::test_rosmaster::TestString_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_rosmaster

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::TestString_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::TestString_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::TestString_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::TestString_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::TestString_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::TestString_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosmaster::TestString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "334ff4377be93faa44ebc66d23d40fd3";
  }

  static const char* value(const ::test_rosmaster::TestString_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x334ff4377be93faaULL;
  static const uint64_t static_value2 = 0x44ebc66d23d40fd3ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosmaster::TestString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosmaster/TestString";
  }

  static const char* value(const ::test_rosmaster::TestString_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosmaster::TestString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Integration test message\n"
"# caller_id of most recent node to send this message\n"
"string caller_id\n"
"# caller_id of the original node to send this message\n"
"string orig_caller_id\n"
"string data\n"
;
  }

  static const char* value(const ::test_rosmaster::TestString_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosmaster::TestString_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.caller_id);
      stream.next(m.orig_caller_id);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestString_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosmaster::TestString_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosmaster::TestString_<ContainerAllocator>& v)
  {
    s << indent << "caller_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.caller_id);
    s << indent << "orig_caller_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.orig_caller_id);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSMASTER_MESSAGE_TESTSTRING_H
