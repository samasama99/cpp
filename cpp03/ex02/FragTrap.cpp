#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  std::cout << "FragTrap default constructor called\n";
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << this->get_name() << " destructor called\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30) {
  std::cout << "FragTrap " << name << " constructor called\n";
}

void FragTrap::attack(const std::string &target) {
  std::cout << "FragTrap -> ";
  this->ClapTrap::attack(target);
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << this->ClapTrap::get_name()
            << " is asking for a high five\n";
};
