#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << this->get_name() << " destructor called\n";
}

ScavTrap::ScavTrap(const std::string &name)
    : ClapTrap(name, 100, 50, 20), _GateKeeperMode(false) {
  std::cout << "ScavTrap " << name << " constructor called\n";
}

void ScavTrap::attack(const std::string &target) {
  std::cout << "ScavTrap -> ";
  this->ClapTrap::attack(target);
}

void ScavTrap::guardGate() {
  _GateKeeperMode = !_GateKeeperMode;
  if (_GateKeeperMode)
    std::cout << "Gate keepper mode is active\n";
  else
    std::cout << "Gate keepper mode is not active\n";
}
