// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__TELEPORT_ABSOLUTE__TRAITS_HPP_
#define TURTLESIM__SRV__TELEPORT_ABSOLUTE__TRAITS_HPP_

#include "turtlesim/srv/teleport_absolute__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::TeleportAbsolute_Request>()
{
  return "turtlesim::srv::TeleportAbsolute_Request";
}

template<>
struct has_fixed_size<turtlesim::srv::TeleportAbsolute_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::TeleportAbsolute_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::TeleportAbsolute_Response>()
{
  return "turtlesim::srv::TeleportAbsolute_Response";
}

template<>
struct has_fixed_size<turtlesim::srv::TeleportAbsolute_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::TeleportAbsolute_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::TeleportAbsolute>()
{
  return "turtlesim::srv::TeleportAbsolute";
}

template<>
struct has_fixed_size<turtlesim::srv::TeleportAbsolute>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim::srv::TeleportAbsolute_Request>::value &&
    has_fixed_size<turtlesim::srv::TeleportAbsolute_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim::srv::TeleportAbsolute>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim::srv::TeleportAbsolute_Request>::value &&
    has_bounded_size<turtlesim::srv::TeleportAbsolute_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM__SRV__TELEPORT_ABSOLUTE__TRAITS_HPP_
