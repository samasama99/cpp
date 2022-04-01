#include "Zombie.hpp"

int main(void) {
  // self destructive ?
  Zombie foo;
  Zombie *array = foo.zombieHorde(10, "Ouss");
  for (size_t i = 0; i < 10; i++) {
    array[i].announce();
  }
  delete[] array;
}
