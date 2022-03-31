// Generated by gencpp from file multi_robot/gotoResult.msg
// DO NOT EDIT!


#ifndef MULTI_ROBOT_MESSAGE_GOTORESULT_H
#define MULTI_ROBOT_MESSAGE_GOTORESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multi_robot
{
template <class ContainerAllocator>
struct gotoResult_
{
  typedef gotoResult_<ContainerAllocator> Type;

  gotoResult_()
    : sequence()  {
    }
  gotoResult_(const ContainerAllocator& _alloc)
    : sequence(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _sequence_type;
  _sequence_type sequence;





  typedef boost::shared_ptr< ::multi_robot::gotoResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multi_robot::gotoResult_<ContainerAllocator> const> ConstPtr;

}; // struct gotoResult_

typedef ::multi_robot::gotoResult_<std::allocator<void> > gotoResult;

typedef boost::shared_ptr< ::multi_robot::gotoResult > gotoResultPtr;
typedef boost::shared_ptr< ::multi_robot::gotoResult const> gotoResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multi_robot::gotoResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multi_robot::gotoResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::multi_robot::gotoResult_<ContainerAllocator1> & lhs, const ::multi_robot::gotoResult_<ContainerAllocator2> & rhs)
{
  return lhs.sequence == rhs.sequence;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::multi_robot::gotoResult_<ContainerAllocator1> & lhs, const ::multi_robot::gotoResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace multi_robot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::multi_robot::gotoResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_robot::gotoResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multi_robot::gotoResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multi_robot::gotoResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_robot::gotoResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_robot::gotoResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multi_robot::gotoResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b81e37d2a31925a0e8ae261a8699cb79";
  }

  static const char* value(const ::multi_robot::gotoResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb81e37d2a31925a0ULL;
  static const uint64_t static_value2 = 0xe8ae261a8699cb79ULL;
};

template<class ContainerAllocator>
struct DataType< ::multi_robot::gotoResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multi_robot/gotoResult";
  }

  static const char* value(const ::multi_robot::gotoResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multi_robot::gotoResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"int32[] sequence\n"
;
  }

  static const char* value(const ::multi_robot::gotoResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multi_robot::gotoResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sequence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gotoResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multi_robot::gotoResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multi_robot::gotoResult_<ContainerAllocator>& v)
  {
    s << indent << "sequence[]" << std::endl;
    for (size_t i = 0; i < v.sequence.size(); ++i)
    {
      s << indent << "  sequence[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.sequence[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTI_ROBOT_MESSAGE_GOTORESULT_H
