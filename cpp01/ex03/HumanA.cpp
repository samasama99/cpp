#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
        : _name(name), _weapon(weapon) {}

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _weapon.getType() << "\n";
}
