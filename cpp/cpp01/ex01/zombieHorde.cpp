#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name) {
  Zombie *array;

  array = new Zombie[N];
  for (int i = 0; i < N; i++) {
    array[i]._name = name;
  }

  return array;
}
