// Generated by gencpp from file multi_robot/gotoGoal.msg
// DO NOT EDIT!


#ifndef MULTI_ROBOT_MESSAGE_GOTOGOAL_H
#define MULTI_ROBOT_MESSAGE_GOTOGOAL_H


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
struct gotoGoal_
{
  typedef gotoGoal_<ContainerAllocator> Type;

  gotoGoal_()
    : order()  {
    }
  gotoGoal_(const ContainerAllocator& _alloc)
    : order(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _order_type;
  _order_type order;





  typedef boost::shared_ptr< ::multi_robot::gotoGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multi_robot::gotoGoal_<ContainerAllocator> const> ConstPtr;

}; // struct gotoGoal_

typedef ::multi_robot::gotoGoal_<std::allocator<void> > gotoGoal;

typedef boost::shared_ptr< ::multi_robot::gotoGoal > gotoGoalPtr;
typedef boost::shared_ptr< ::multi_robot::gotoGoal const> gotoGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multi_robot::gotoGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multi_robot::gotoGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::multi_robot::gotoGoal_<ContainerAllocator1> & lhs, const ::multi_robot::gotoGoal_<ContainerAllocator2> & rhs)
{
  return lhs.order == rhs.order;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::multi_robot::gotoGoal_<ContainerAllocator1> & lhs, const ::multi_robot::gotoGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace multi_robot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::multi_robot::gotoGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_robot::gotoGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multi_robot::gotoGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multi_robot::gotoGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_robot::gotoGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_robot::gotoGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multi_robot::gotoGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b5edba87f02b289938819f83435372db";
  }

  static const char* value(const ::multi_robot::gotoGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb5edba87f02b2899ULL;
  static const uint64_t static_value2 = 0x38819f83435372dbULL;
};

template<class ContainerAllocator>
struct DataType< ::multi_robot::gotoGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multi_robot/gotoGoal";
  }

  static const char* value(const ::multi_robot::gotoGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multi_robot::gotoGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"int32[] order\n"
;
  }

  static const char* value(const ::multi_robot::gotoGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multi_robot::gotoGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.order);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gotoGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multi_robot::gotoGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multi_robot::gotoGoal_<ContainerAllocator>& v)
  {
    s << indent << "order[]" << std::endl;
    for (size_t i = 0; i < v.order.size(); ++i)
    {
      s << indent << "  order[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.order[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTI_ROBOT_MESSAGE_GOTOGOAL_H