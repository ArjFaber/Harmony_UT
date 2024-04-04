// Generated by gencpp from file test_rosbag/MigratedAddSub.msg
// DO NOT EDIT!


#ifndef TEST_ROSBAG_MESSAGE_MIGRATEDADDSUB_H
#define TEST_ROSBAG_MESSAGE_MIGRATEDADDSUB_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_rosbag/Simple.h>
#include <test_rosbag/Simple.h>

namespace test_rosbag
{
template <class ContainerAllocator>
struct MigratedAddSub_
{
  typedef MigratedAddSub_<ContainerAllocator> Type;

  MigratedAddSub_()
    : field1()
    , field2()  {
    }
  MigratedAddSub_(const ContainerAllocator& _alloc)
    : field1(_alloc)
    , field2(_alloc)  {
  (void)_alloc;
    }



   typedef  ::test_rosbag::Simple_<ContainerAllocator>  _field1_type;
  _field1_type field1;

   typedef  ::test_rosbag::Simple_<ContainerAllocator>  _field2_type;
  _field2_type field2;





  typedef boost::shared_ptr< ::test_rosbag::MigratedAddSub_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosbag::MigratedAddSub_<ContainerAllocator> const> ConstPtr;

}; // struct MigratedAddSub_

typedef ::test_rosbag::MigratedAddSub_<std::allocator<void> > MigratedAddSub;

typedef boost::shared_ptr< ::test_rosbag::MigratedAddSub > MigratedAddSubPtr;
typedef boost::shared_ptr< ::test_rosbag::MigratedAddSub const> MigratedAddSubConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosbag::MigratedAddSub_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_rosbag::MigratedAddSub_<ContainerAllocator1> & lhs, const ::test_rosbag::MigratedAddSub_<ContainerAllocator2> & rhs)
{
  return lhs.field1 == rhs.field1 &&
    lhs.field2 == rhs.field2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_rosbag::MigratedAddSub_<ContainerAllocator1> & lhs, const ::test_rosbag::MigratedAddSub_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_rosbag

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::MigratedAddSub_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::MigratedAddSub_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::MigratedAddSub_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f54ff3b9ba622359fa96ac15d4498153";
  }

  static const char* value(const ::test_rosbag::MigratedAddSub_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf54ff3b9ba622359ULL;
  static const uint64_t static_value2 = 0xfa96ac15d4498153ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosbag/MigratedAddSub";
  }

  static const char* value(const ::test_rosbag::MigratedAddSub_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Simple field1\n"
"Simple field2\n"
"================================================================================\n"
"MSG: test_rosbag/Simple\n"
"int32 field1 #42\n"
;
  }

  static const char* value(const ::test_rosbag::MigratedAddSub_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field1);
      stream.next(m.field2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MigratedAddSub_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosbag::MigratedAddSub_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosbag::MigratedAddSub_<ContainerAllocator>& v)
  {
    s << indent << "field1: ";
    s << std::endl;
    Printer< ::test_rosbag::Simple_<ContainerAllocator> >::stream(s, indent + "  ", v.field1);
    s << indent << "field2: ";
    s << std::endl;
    Printer< ::test_rosbag::Simple_<ContainerAllocator> >::stream(s, indent + "  ", v.field2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSBAG_MESSAGE_MIGRATEDADDSUB_H
