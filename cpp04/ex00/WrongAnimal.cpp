#include "WrongAnimal.hpp"
using std::cout;

WrongAnimal::WrongAnimal() : type("default") {
  cout << "WrongAnimal default constructor\n";
};

WrongAnimal::WrongAnimal(string type) : type(type) {
  cout << "WrongAnimal 1 parameter constructor\n";
};

WrongAnimal::~WrongAnimal() { cout << "WrongAnimal destructor\n"; };

WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type) {
  cout << "WrongAnimal copy constructor\n";
};

void WrongAnimal::operator=(const WrongAnimal &rh) {
  type = rh.type;
  cout << "WrongAnimal copy assignment operator\n";
};

string WrongAnimal::getType() const { return type; }

void WrongAnimal::makeSound() const { cout << "default sound\n"; }
