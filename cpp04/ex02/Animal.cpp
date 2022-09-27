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

void Animal::operator=(const Animal &rh) {
  type = rh.type;
  cout << "Animal copy assignment operator\n";
};

string Animal::getType() const { return type; }
