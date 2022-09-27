#ifndef ICE_H
#define ICE_H
#include "AMateria.hpp"

class Ice : public AMateria {
public:
  Ice();
  Ice(const Ice &src);
  Ice &operator=(const Ice &rh);
  ~Ice();
  AMateria *clone() const;
  void use(ICharacter &target);
};
#endif
