#include "Cat.hpp"
#include "Animal.hpp"

using std::cout;

Cat::Cat() : Animal("Cat") { cout << "Cat default constructor\n"; };

Cat::~Cat() { cout << "Cat destructor\n"; };

Cat::Cat(const Cat &src) : Animal(src){};

Cat &Cat::operator=(const Cat &rh) { 
  if (this == &rh)
    return *this;
  this->type = rh.type;
  return *this;
};

void Cat::makeSound() const { cout << "MEOW MOW MROW MRRR"; };
