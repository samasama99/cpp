#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

using std::cout;

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  cout << "Cat default constructor\n";
};

WrongCat::~WrongCat() { cout << "WrongCat destructor\n"; };

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src){};

void WrongCat::operator=(const WrongCat &rh) { this->type = rh.type; };

void WrongCat::makeSound() const { cout << "MEOW MOW MROW MRRR"; };
