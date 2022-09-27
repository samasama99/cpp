#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog &src);
  Dog &operator=(const Dog &rh);
  ~Dog();
  void makeSound() const;
};

#endif
