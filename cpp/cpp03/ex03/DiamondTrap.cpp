#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ScavTrap("default_name"), FragTrap() {
  std::cout << "DiamondTrap default constructor\n";
};

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << this->get_name() << " destructor called\n";
};

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name", 50, 50, 96), ScavTrap(name + "_clap_name"),
      FragTrap(name + "_clap_name"), _name(name) {
  std::cout << "DiamondTrap " << name << " constructor called\n";
};

void DiamondTrap::attack(const std::string &target) {
  std::cout << "DiamondTrap -> ";
  this->ScavTrap::attack(target);
};

void DiamondTrap::whoAmI() {
  std::cout << "I'm " << _name << " and " << ScavTrap::get_name() << '\n';
};
