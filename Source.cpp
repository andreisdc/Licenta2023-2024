#include "Battery.h"
#include "Charger.h"
#include <iomanip>

int main() {
  int ch;
  std::cout << "Alege optiunea: ";
  std::cin >> ch;

  switch (ch) {
  case (1): {
    int battery_capacity_small = 18;
    int battery_capacity_medium = 40;
    int battery_capacity_big = 100;
    int charging_speed_slow = 3;
    int charging_speed_medium = 11;
    int charging_speed_fast = 50;

    Battery battery_small(battery_capacity_small);
    Battery battery_medium(battery_capacity_medium);
    Battery battery_big(battery_capacity_big);
    Charger charger_small(charging_speed_slow);
    Charger charger_medium(charging_speed_medium);
    Charger charger_fast(charging_speed_fast);



    
    std::cout << charger_small.charging_time(battery_small) << "         "
              << charger_medium.charging_time(battery_small) << "         "
              << charger_fast.charging_time(battery_small) << std::endl;
    std::cout << charger_small.charging_time(battery_medium) << "         "
              << charger_medium.charging_time(battery_medium) << "         "
              << charger_fast.charging_time(battery_medium) << std::endl;
    std::cout << charger_small.charging_time(battery_big) << "         "
              << charger_medium.charging_time(battery_big) << "         "
              << charger_fast.charging_time(battery_big) << std::endl;

    

    break;
  }
  case (2): {

    break;
  }
  default: break;
  }
}
