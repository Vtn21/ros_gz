// Copyright 2021 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "factories/ros_ign_interfaces.hpp"

#include <memory>
#include <string>

#include "factory.hpp"
#include "ros_ign_bridge/convert/ros_ign_interfaces.hpp"

namespace ros_ign_bridge
{

std::shared_ptr<FactoryInterface>
get_factory__ros_ign_interfaces(
  const std::string & ros_type_name,
  const std::string & ign_type_name)
{
  if (
    (ros_type_name == "ros_ign_interfaces/msg/JointWrench" || ros_type_name.empty()) &&
    ign_type_name == "ignition.msgs.JointWrench")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::JointWrench,
        ignition::msgs::JointWrench
      >
    >("ros_ign_interfaces/msg/JointWrench", ign_type_name);
  }
  if (
    (ros_type_name == "ros_ign_interfaces/msg/Entity" || ros_type_name.empty()) &&
    ign_type_name == "ignition.msgs.Entity")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::Entity,
        ignition::msgs::Entity
      >
    >("ros_ign_interfaces/msg/Entity", ign_type_name);
  }
  if (
    (ros_type_name == "ros_ign_interfaces/msg/Contact" || ros_type_name.empty()) &&
    ign_type_name == "ignition.msgs.Contact")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::Contact,
        ignition::msgs::Contact
      >
    >("ros_ign_interfaces/msg/Contact", ign_type_name);
  }
  if (
    (ros_type_name == "ros_ign_interfaces/msg/Contacts" || ros_type_name.empty()) &&
    ign_type_name == "ignition.msgs.Contacts")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::Contacts,
        ignition::msgs::Contacts
      >
    >("ros_ign_interfaces/msg/Contacts", ign_type_name);
  }
  if ((ros_type_name == "ros_ign_interfaces/msg/GuiCamera" ||
    ros_type_name.empty()) && ign_type_name == "ignition.msgs.GUICamera")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::GuiCamera,
        ignition::msgs::GUICamera
      >
    >("ros_ign_interfaces/msg/GuiCamera", ign_type_name);
  }
  if ((ros_type_name == "ros_ign_interfaces/msg/Light" ||
    ros_type_name.empty()) && ign_type_name == "ignition.msgs.Light")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::Light,
        ignition::msgs::Light
      >
    >("ros_ign_interfaces/msg/Light", ign_type_name);
  }
  if ((ros_type_name == "ros_ign_interfaces/msg/StringVec" ||
    ros_type_name.empty()) && ign_type_name == "ignition.msgs.StringMsg_V")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::StringVec,
        ignition::msgs::StringMsg_V
      >
    >("ros_ign_interfaces/msg/StringVec", ign_type_name);
  }
  if ((ros_type_name == "ros_ign_interfaces/msg/TrackVisual" ||
    ros_type_name.empty()) && ign_type_name == "ignition.msgs.TrackVisual")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::TrackVisual,
        ignition::msgs::TrackVisual
      >
    >("ros_ign_interfaces/msg/TrackVisual", ign_type_name);
  }
  if ((ros_type_name == "ros_ign_interfaces/msg/VideoRecord" ||
    ros_type_name.empty()) && ign_type_name == "ignition.msgs.VideoRecord")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::VideoRecord,
        ignition::msgs::VideoRecord
      >
    >("ros_ign_interfaces/msg/VideoRecord", ign_type_name);
  }
  if ((ros_type_name == "ros_ign_interfaces/msg/WorldControl" ||
    ros_type_name.empty()) && ign_type_name == "ignition.msgs.WorldControl")
  {
    return std::make_shared<
      Factory<
        ros_ign_interfaces::msg::WorldControl,
        ignition::msgs::WorldControl
      >
    >("ros_ign_interfaces/msg/WorldControl", ign_type_name);
  }
  return nullptr;
}

template<>
void
Factory<
  ros_ign_interfaces::msg::JointWrench,
  ignition::msgs::JointWrench
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::JointWrench & ros_msg,
  ignition::msgs::JointWrench & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::JointWrench,
  ignition::msgs::JointWrench
>::convert_ign_to_ros(
  const ignition::msgs::JointWrench & ign_msg,
  ros_ign_interfaces::msg::JointWrench & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::Entity,
  ignition::msgs::Entity
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::Entity & ros_msg,
  ignition::msgs::Entity & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::Entity,
  ignition::msgs::Entity
>::convert_ign_to_ros(
  const ignition::msgs::Entity & ign_msg,
  ros_ign_interfaces::msg::Entity & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::Contact,
  ignition::msgs::Contact
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::Contact & ros_msg,
  ignition::msgs::Contact & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::Contact,
  ignition::msgs::Contact
>::convert_ign_to_ros(
  const ignition::msgs::Contact & ign_msg,
  ros_ign_interfaces::msg::Contact & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::Contacts,
  ignition::msgs::Contacts
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::Contacts & ros_msg,
  ignition::msgs::Contacts & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::Contacts,
  ignition::msgs::Contacts
>::convert_ign_to_ros(
  const ignition::msgs::Contacts & ign_msg,
  ros_ign_interfaces::msg::Contacts & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::GuiCamera,
  ignition::msgs::GUICamera
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::GuiCamera & ros_msg,
  ignition::msgs::GUICamera & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::GuiCamera,
  ignition::msgs::GUICamera
>::convert_ign_to_ros(
  const ignition::msgs::GUICamera & ign_msg,
  ros_ign_interfaces::msg::GuiCamera & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::Light,
  ignition::msgs::Light
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::Light & ros_msg,
  ignition::msgs::Light & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::Light,
  ignition::msgs::Light
>::convert_ign_to_ros(
  const ignition::msgs::Light & ign_msg,
  ros_ign_interfaces::msg::Light & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::StringVec,
  ignition::msgs::StringMsg_V
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::StringVec & ros_msg,
  ignition::msgs::StringMsg_V & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::StringVec,
  ignition::msgs::StringMsg_V
>::convert_ign_to_ros(
  const ignition::msgs::StringMsg_V & ign_msg,
  ros_ign_interfaces::msg::StringVec & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::TrackVisual,
  ignition::msgs::TrackVisual
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::TrackVisual & ros_msg,
  ignition::msgs::TrackVisual & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::TrackVisual,
  ignition::msgs::TrackVisual
>::convert_ign_to_ros(
  const ignition::msgs::TrackVisual & ign_msg,
  ros_ign_interfaces::msg::TrackVisual & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::VideoRecord,
  ignition::msgs::VideoRecord
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::VideoRecord & ros_msg,
  ignition::msgs::VideoRecord & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::VideoRecord,
  ignition::msgs::VideoRecord
>::convert_ign_to_ros(
  const ignition::msgs::VideoRecord & ign_msg,
  ros_ign_interfaces::msg::VideoRecord & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::WorldControl,
  ignition::msgs::WorldControl
>::convert_ros_to_ign(
  const ros_ign_interfaces::msg::WorldControl & ros_msg,
  ignition::msgs::WorldControl & ign_msg)
{
  ros_ign_bridge::convert_ros_to_ign(ros_msg, ign_msg);
}

template<>
void
Factory<
  ros_ign_interfaces::msg::WorldControl,
  ignition::msgs::WorldControl
>::convert_ign_to_ros(
  const ignition::msgs::WorldControl & ign_msg,
  ros_ign_interfaces::msg::WorldControl & ros_msg)
{
  ros_ign_bridge::convert_ign_to_ros(ign_msg, ros_msg);
}
}  // namespace ros_ign_bridge
