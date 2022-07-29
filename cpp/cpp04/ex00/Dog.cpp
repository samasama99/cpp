#include "Dog.hpp"
#include "Animal.hpp"

using std::cout;

Dog::Dog() : Animal("Dog") { cout << "Dog default constructor\n"; };

Dog::Dog(const Dog &src) : Animal(src) {
 cout << "Dog copy constructor\n"; 
};

Dog &Dog::operator=(const Dog &rh) { 
  if (this == &rh)
    return *this;
  this->type = rh.type;
  return *this;
};

Dog::~Dog() { cout << "Dog destructor\n"; };

void Dog::makeSound() const { cout << "BARK BARK RUFF RUFF\n"; };
