// Generated by gencpp from file actionlib/TestResult.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_MESSAGE_TESTRESULT_H
#define ACTIONLIB_MESSAGE_TESTRESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib
{
template <class ContainerAllocator>
struct TestResult_
{
  typedef TestResult_<ContainerAllocator> Type;

  TestResult_()
    : result(0)  {
    }
  TestResult_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::actionlib::TestResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib::TestResult_<ContainerAllocator> const> ConstPtr;

}; // struct TestResult_

typedef ::actionlib::TestResult_<std::allocator<void> > TestResult;

typedef boost::shared_ptr< ::actionlib::TestResult > TestResultPtr;
typedef boost::shared_ptr< ::actionlib::TestResult const> TestResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib::TestResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib::TestResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::actionlib::TestResult_<ContainerAllocator1> & lhs, const ::actionlib::TestResult_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::actionlib::TestResult_<ContainerAllocator1> & lhs, const ::actionlib::TestResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace actionlib

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::actionlib::TestResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TestResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TestResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TestResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TestResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TestResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib::TestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::actionlib::TestResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib::TestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib/TestResult";
  }

  static const char* value(const ::actionlib::TestResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib::TestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"int32 result\n"
;
  }

  static const char* value(const ::actionlib::TestResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib::TestResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib::TestResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib::TestResult_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_MESSAGE_TESTRESULT_H
