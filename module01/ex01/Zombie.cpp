#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) = default;

Zombie::~Zombie() { std::cout << _name << " was destroyed !\n"; }

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
