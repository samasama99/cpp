#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice"){};

Ice::~Ice(){};


Ice::Ice(const Ice &src) {
    this->type = src.type; 
};

Ice &Ice::operator=(const Ice &rh) {
    if (this == &rh)
      return *this;
    this->type = rh.type;
    return *this;
};

AMateria *Ice::clone() const { return new Ice; };

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
};
