#include "WrongCat.hpp"

int main() {
  const WrongAnimal *meta = new WrongAnimal();
  const WrongAnimal *i = new WrongCat();
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  meta->makeSound();
  return 0;
}
