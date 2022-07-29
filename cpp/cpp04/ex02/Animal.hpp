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
  virtual ~Animal();
  Animal(const Animal &src);
  void operator=(const Animal &rh);
  virtual void makeSound() const = 0;
  string getType() const;
};

#endif
