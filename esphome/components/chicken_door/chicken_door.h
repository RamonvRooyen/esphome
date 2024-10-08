#pragma once

#include "esphome/core/component.h"
#include "esphome/components/cover/cover.h"
#include "motor.h"
#include "button.h"


namespace esphome {
namespace chicken_door {

class ChickenDoor : public cover::Cover, public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  cover::CoverTraits get_traits() override;

 protected:
  void control(const cover::CoverCall &call) override;
  MotorDriver motor;
  Button button;
};


} //namespace empty_light
} //namespace esphome