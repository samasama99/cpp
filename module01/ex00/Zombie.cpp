#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name) : _name(name) { this->announce(); }

Zombie::~Zombie(void) { std::cout << _name << " was destroyed !\n"; }

void Zombie::announce(void) {
  std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
