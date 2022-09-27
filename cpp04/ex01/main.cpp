#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>
#include <iostream>

int main() {
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  delete j; // should not create a leak
  delete i;

  // Cat c;
  // Cat b(c);

  // Cat cats[2];
  // Dog dogs[2];

  const Animal *arr[4];
  // arr[0] = new Cat;
  // arr[1] = new Cat;
  // arr[2] = new Dog;
  // arr[3] = new Dog;

  // delete arr[0];
  // delete arr[1];
  // delete arr[2];
  // delete arr[3];

  // system("leaks Test");
  return 0;
}
