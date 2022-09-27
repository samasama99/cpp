#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("ice"){};

Cure::~Cure(){};

Cure::Cure(const Cure &src) {
    this->type = src.type; 
};

Cure &Cure::operator=(const Cure &rh) {
    if (this == &rh)
      return *this;
    this->type = rh.type;
    return *this;
};

AMateria *Cure::clone() const { return new Cure; };

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *\n";
};
