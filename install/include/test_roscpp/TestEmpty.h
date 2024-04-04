// Generated by gencpp from file test_roscpp/TestEmpty.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_TESTEMPTY_H
#define TEST_ROSCPP_MESSAGE_TESTEMPTY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_roscpp
{
template <class ContainerAllocator>
struct TestEmpty_
{
  typedef TestEmpty_<ContainerAllocator> Type;

  TestEmpty_()
    {
    }
  TestEmpty_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::test_roscpp::TestEmpty_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::TestEmpty_<ContainerAllocator> const> ConstPtr;

}; // struct TestEmpty_

typedef ::test_roscpp::TestEmpty_<std::allocator<void> > TestEmpty;

typedef boost::shared_ptr< ::test_roscpp::TestEmpty > TestEmptyPtr;
typedef boost::shared_ptr< ::test_roscpp::TestEmpty const> TestEmptyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::TestEmpty_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::TestEmpty_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace test_roscpp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::TestEmpty_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::TestEmpty_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::TestEmpty_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::TestEmpty_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::TestEmpty_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::TestEmpty_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::TestEmpty_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::test_roscpp::TestEmpty_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::TestEmpty_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/TestEmpty";
  }

  static const char* value(const ::test_roscpp::TestEmpty_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::TestEmpty_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::test_roscpp::TestEmpty_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::TestEmpty_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestEmpty_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::TestEmpty_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::test_roscpp::TestEmpty_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_TESTEMPTY_H
