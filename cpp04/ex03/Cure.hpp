#ifndef CURE_H
#define CURE_H
#include "AMateria.hpp"

class Cure : public AMateria {
public:
  Cure();
  Cure(const Cure &src);
  Cure &operator=(const Cure &rh);
  ~Cure();
  AMateria *clone() const;
  void use(ICharacter &target);
};
#endif
