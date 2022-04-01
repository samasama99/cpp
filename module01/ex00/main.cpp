#include "Zombie.hpp"

int main(void) {
  // self destructive ?
  Zombie tmp2("Stack");

  // self destructive ?
  tmp2.randomChump("Inside Methode");

  // needs to be freed ?
  Zombie *tmp = tmp2.newZombie("Heap");

  delete tmp;
}
