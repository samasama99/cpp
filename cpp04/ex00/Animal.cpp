#include "Animal.hpp"
using std::cout;

Animal::Animal() : type("default") { cout << "Animal default constructor\n"; };

Animal::Animal(string type) : type(type) {
  cout << "Animal 1 parameter constructor\n";
};

Animal::~Animal() { cout << "Animal destructor\n"; };

Animal::Animal(const Animal &src) : type(src.type) {
  cout << "Animal copy constructor\n";
};

Animal &Animal::operator=(const Animal &rh) {
  cout << "Animal copy assignment operator\n";
  if (this == &rh)
    return *this;
  type = rh.type;
  return *this;
};

string Animal::getType() const { return type; }

void Animal::makeSound() const { cout << "default sound\n"; }
