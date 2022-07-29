#include "Zombie.hpp"

int main() {
  Zombie foo("Main");
  Zombie *array = foo.zombieHorde(10, "Ouss");
  for (size_t i = 0; i < 10; i++) {
    array[i].announce();
  }
  delete[] array;
  system("leaks Zombie");
}
