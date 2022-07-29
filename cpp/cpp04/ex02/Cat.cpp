#include "Cat.hpp"
#include "Animal.hpp"

using std::cout;

Cat::Cat() : Animal("Cat") {
  cout << "Cat default constructor\n";
  brain = new Brain;
};

Cat::Cat(const Cat &src) {
  this->type = src.type;
  this->brain = new Brain(*src.brain);
};

Cat &Cat::operator=(const Cat &src) {
  if (this == &src)
    return *this;
  if (brain)
    delete brain;
  this->type = src.type;
  this->brain = new Brain(*src.brain);
  return *this;
};

Cat::~Cat() {
  cout << "Cat destructor\n";
  delete brain;
};

void Cat::makeSound() const { cout << "MEOW MOW MROW MRRR\n"; };
