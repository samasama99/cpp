#include "Dog.hpp"
#include "Animal.hpp"

using std::cout;

Dog::Dog() : Animal("Dog") {
  cout << "Dog default constructor\n";
  brain = new Brain;
};

Dog::Dog(const Dog &src) {
  this->type = src.type;
  this->brain = new Brain(*src.brain);
};

Dog &Dog::operator=(const Dog &src) {
  if (this == &src)
    return *this;
  if (brain)
    delete brain;
  this->type = src.type;
  this->brain = new Brain(*src.brain);
  return *this;
};

Dog::~Dog() {
  cout << "Dog destructor\n";
  delete brain;
};

void Dog::makeSound() const { cout << "BARK BARK RUFF RUFF\n"; };
