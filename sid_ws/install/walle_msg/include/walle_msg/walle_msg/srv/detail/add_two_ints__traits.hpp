// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from walle_msg:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef WALLE_MSG__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
#define WALLE_MSG__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "walle_msg/srv/detail/add_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace walle_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTwoInts_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoInts_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace walle_msg

namespace rosidl_generator_traits
{

[[deprecated("use walle_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const walle_msg::srv::AddTwoInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  walle_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use walle_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const walle_msg::srv::AddTwoInts_Request & msg)
{
  return walle_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<walle_msg::srv::AddTwoInts_Request>()
{
  return "walle_msg::srv::AddTwoInts_Request";
}

template<>
inline const char * name<walle_msg::srv::AddTwoInts_Request>()
{
  return "walle_msg/srv/AddTwoInts_Request";
}

template<>
struct has_fixed_size<walle_msg::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<walle_msg::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<walle_msg::srv::AddTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace walle_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTwoInts_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoInts_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace walle_msg

namespace rosidl_generator_traits
{

[[deprecated("use walle_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const walle_msg::srv::AddTwoInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  walle_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use walle_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const walle_msg::srv::AddTwoInts_Response & msg)
{
  return walle_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<walle_msg::srv::AddTwoInts_Response>()
{
  return "walle_msg::srv::AddTwoInts_Response";
}

template<>
inline const char * name<walle_msg::srv::AddTwoInts_Response>()
{
  return "walle_msg/srv/AddTwoInts_Response";
}

template<>
struct has_fixed_size<walle_msg::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<walle_msg::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<walle_msg::srv::AddTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<walle_msg::srv::AddTwoInts>()
{
  return "walle_msg::srv::AddTwoInts";
}

template<>
inline const char * name<walle_msg::srv::AddTwoInts>()
{
  return "walle_msg/srv/AddTwoInts";
}

template<>
struct has_fixed_size<walle_msg::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<walle_msg::srv::AddTwoInts_Request>::value &&
    has_fixed_size<walle_msg::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<walle_msg::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<walle_msg::srv::AddTwoInts_Request>::value &&
    has_bounded_size<walle_msg::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct is_service<walle_msg::srv::AddTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<walle_msg::srv::AddTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<walle_msg::srv::AddTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WALLE_MSG__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
