#include "Charger.h"

#include <string>

Charger::Charger(int charging_speed) { this->_chargingSpeed = charging_speed; }

float Charger::charging_time(Battery &battery) {

  float time =
      (battery.get_battery_required() / static_cast<float>(_chargingSpeed));

  int hours = static_cast<int>(time);
  int minutes = static_cast<int>((time - hours) * 60);
  time = static_cast<float>(hours) + static_cast<float>(minutes) / 100;
  return time;
}
