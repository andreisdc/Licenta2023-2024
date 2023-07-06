#pragma once
#include "Battery.h"

class Charger {
private:
  int _chargingSpeed;
public:
  Charger(int charging_speed);
  float charging_time(Battery& battery);
};
