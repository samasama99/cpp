#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() = default;

Zombie::Zombie(const std::string &name) : _name(name) { this->announce(); }

Zombie::~Zombie() { std::cout << _name << " was destroyed !\n"; }

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
