#ifndef WRONG_CAT_H
#define WRONG_CAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
  WrongCat();
  WrongCat(const WrongCat &src);
  void operator=(const WrongCat &rh);
  ~WrongCat();
  void makeSound() const;
};

#endif
