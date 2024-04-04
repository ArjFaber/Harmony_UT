// Generated by gencpp from file test_rosmaster/TestArrays.msg
// DO NOT EDIT!


#ifndef TEST_ROSMASTER_MESSAGE_TESTARRAYS_H
#define TEST_ROSMASTER_MESSAGE_TESTARRAYS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_rosmaster/TestString.h>

namespace test_rosmaster
{
template <class ContainerAllocator>
struct TestArrays_
{
  typedef TestArrays_<ContainerAllocator> Type;

  TestArrays_()
    : caller_id()
    , orig_caller_id()
    , int32_array()
    , float32_array()
    , time_array()
    , test_string_array()  {
    }
  TestArrays_(const ContainerAllocator& _alloc)
    : caller_id(_alloc)
    , orig_caller_id(_alloc)
    , int32_array(_alloc)
    , float32_array(_alloc)
    , time_array(_alloc)
    , test_string_array(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _caller_id_type;
  _caller_id_type caller_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _orig_caller_id_type;
  _orig_caller_id_type orig_caller_id;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _int32_array_type;
  _int32_array_type int32_array;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _float32_array_type;
  _float32_array_type float32_array;

   typedef std::vector<ros::Time, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros::Time>> _time_array_type;
  _time_array_type time_array;

   typedef std::vector< ::test_rosmaster::TestString_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::test_rosmaster::TestString_<ContainerAllocator> >> _test_string_array_type;
  _test_string_array_type test_string_array;





  typedef boost::shared_ptr< ::test_rosmaster::TestArrays_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosmaster::TestArrays_<ContainerAllocator> const> ConstPtr;

}; // struct TestArrays_

typedef ::test_rosmaster::TestArrays_<std::allocator<void> > TestArrays;

typedef boost::shared_ptr< ::test_rosmaster::TestArrays > TestArraysPtr;
typedef boost::shared_ptr< ::test_rosmaster::TestArrays const> TestArraysConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosmaster::TestArrays_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosmaster::TestArrays_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_rosmaster::TestArrays_<ContainerAllocator1> & lhs, const ::test_rosmaster::TestArrays_<ContainerAllocator2> & rhs)
{
  return lhs.caller_id == rhs.caller_id &&
    lhs.orig_caller_id == rhs.orig_caller_id &&
    lhs.int32_array == rhs.int32_array &&
    lhs.float32_array == rhs.float32_array &&
    lhs.time_array == rhs.time_array &&
    lhs.test_string_array == rhs.test_string_array;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_rosmaster::TestArrays_<ContainerAllocator1> & lhs, const ::test_rosmaster::TestArrays_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_rosmaster

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::TestArrays_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::TestArrays_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::TestArrays_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::TestArrays_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::TestArrays_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::TestArrays_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosmaster::TestArrays_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4cc9b5e2cebe791aa3e994f5bc159eb6";
  }

  static const char* value(const ::test_rosmaster::TestArrays_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4cc9b5e2cebe791aULL;
  static const uint64_t static_value2 = 0xa3e994f5bc159eb6ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosmaster::TestArrays_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosmaster/TestArrays";
  }

  static const char* value(const ::test_rosmaster::TestArrays_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosmaster::TestArrays_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# caller_id of most recent node to send this message\n"
"string caller_id\n"
"# caller_id of the original node to send this message\n"
"string orig_caller_id\n"
"\n"
"int32[] int32_array\n"
"float32[] float32_array\n"
"time[] time_array\n"
"TestString[] test_string_array\n"
"# TODO: array of arrays\n"
"\n"
"================================================================================\n"
"MSG: test_rosmaster/TestString\n"
"# Integration test message\n"
"# caller_id of most recent node to send this message\n"
"string caller_id\n"
"# caller_id of the original node to send this message\n"
"string orig_caller_id\n"
"string data\n"
;
  }

  static const char* value(const ::test_rosmaster::TestArrays_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosmaster::TestArrays_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.caller_id);
      stream.next(m.orig_caller_id);
      stream.next(m.int32_array);
      stream.next(m.float32_array);
      stream.next(m.time_array);
      stream.next(m.test_string_array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestArrays_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosmaster::TestArrays_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosmaster::TestArrays_<ContainerAllocator>& v)
  {
    s << indent << "caller_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.caller_id);
    s << indent << "orig_caller_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.orig_caller_id);
    s << indent << "int32_array[]" << std::endl;
    for (size_t i = 0; i < v.int32_array.size(); ++i)
    {
      s << indent << "  int32_array[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.int32_array[i]);
    }
    s << indent << "float32_array[]" << std::endl;
    for (size_t i = 0; i < v.float32_array.size(); ++i)
    {
      s << indent << "  float32_array[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.float32_array[i]);
    }
    s << indent << "time_array[]" << std::endl;
    for (size_t i = 0; i < v.time_array.size(); ++i)
    {
      s << indent << "  time_array[" << i << "]: ";
      Printer<ros::Time>::stream(s, indent + "  ", v.time_array[i]);
    }
    s << indent << "test_string_array[]" << std::endl;
    for (size_t i = 0; i < v.test_string_array.size(); ++i)
    {
      s << indent << "  test_string_array[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_rosmaster::TestString_<ContainerAllocator> >::stream(s, indent + "    ", v.test_string_array[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSMASTER_MESSAGE_TESTARRAYS_H
