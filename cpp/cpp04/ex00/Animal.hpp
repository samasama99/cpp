#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using std::string;

class Animal {
protected:
  string type;

public:
  Animal();
  Animal(string type);
  ~Animal();
  Animal(const Animal &src);
  Animal &operator=(const Animal &rh);
  virtual void makeSound() const;
  string getType() const;
};

#endif
