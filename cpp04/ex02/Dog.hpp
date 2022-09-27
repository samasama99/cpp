#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
  Brain *brain;

public:
  Dog();
  Dog(const Dog &src);
  Dog &operator=(const Dog &src);
  ~Dog();
  void makeSound() const;
};
#endif
