#pragma once

#include <rclcpp/rclcpp.hpp>

namespace common_utils {

inline rclcpp::QoS sensor_qos() {
  return rclcpp::QoS(rclcpp::KeepLast(1))
    .best_effort()
    .durability_volatile();
}

inline rclcpp::QoS reliable_qos() {
  return rclcpp::QoS(rclcpp::KeepLast(10))
    .reliable()
    .durability_volatile();
}

inline rclcpp::QoS reliable_qos_shallow() {
  return rclcpp::QoS(rclcpp::KeepLast(1))
    .reliable()
    .durability_volatile();
}

}  // namespace common_utils
