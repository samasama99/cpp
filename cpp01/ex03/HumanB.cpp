#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name) { _weapon = NULL; }

void HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }

void HumanB::attack() {
  if (_weapon != NULL)
    std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
  else
    std::cout << _name << " attacks with their hands \n";
}
