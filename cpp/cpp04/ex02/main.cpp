#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

int main() {
  // Animal x;
  // Animal *y = new Animal;
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  i->makeSound();
  j->makeSound();
  delete j; // should not create a leak
  delete i;

  // more tests
  // const Dog *a = new Dog();
  // const Cat *b = new Cat();
  // a->makeSound();
  // b->makeSound();
  // delete a;
  // delete b;

  // system("leaks Test");
  return 0;
}
