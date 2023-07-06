#pragma once
#include <iostream>
#include <cmath>

class Battery {
private:
  int _batteryCapacity; // capacity
  int _batteryLevel; //battery level

public:
  Battery(int const capacity);
  int get_battery_capacity();
  int get_battery_level();
  void update_battery_level(int value);
  float get_battery_required();
};
