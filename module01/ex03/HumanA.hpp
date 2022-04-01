#ifndef HUMAN_A_H
#define HUMAN_A_H
#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
  std::string _name;
  Weapon &_weapon;

public:
  HumanA(std::string name, Weapon &weapon);
  void attack(void);
};
#endif
