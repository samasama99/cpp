#include "Zombie.hpp"
#include <cstdlib>

int main() {
  // self destructive
  Zombie tmp2("Stack");

  // self destructive
  tmp2.randomChump("Inside Methode");

  // needs to be freed
  Zombie *tmp = tmp2.newZombie("Heap");

  delete tmp;

  system("leaks Zombie");
}
