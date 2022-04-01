#ifndef HUMAN_B_H
#define HUMAN_B_H
#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
  std::string _name;
  Weapon *_weapon;

public:
  HumanB(std::string name);
  HumanB(std::string name, Weapon &weapon);

  void attack(void);
  void setWeapon(Weapon &weapon);
};
#endif
