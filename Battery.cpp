#include "Battery.h"

Battery::Battery(int const capacity) {
  this->_batteryCapacity = capacity;
  this->_batteryLevel = 0;
}

int Battery::get_battery_capacity() { return _batteryCapacity; }

int Battery::get_battery_level() { return _batteryLevel; }

void Battery::update_battery_level(int value) { _batteryLevel = value; }

float Battery::get_battery_required() {
  float battery_requierd;
  battery_requierd =round(static_cast<float> (100-_batteryLevel) / 100 * _batteryCapacity);

	return battery_requierd;
}
