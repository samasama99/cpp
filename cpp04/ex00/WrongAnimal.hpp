#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

#include <iostream>
#include <string>

using std::string;

class WrongAnimal {
protected:
  string type;

public:
  WrongAnimal();
  WrongAnimal(string type);
  ~WrongAnimal();
  WrongAnimal(const WrongAnimal &src);
  void operator=(const WrongAnimal &rh);
  void makeSound() const;
  string getType() const;
};

#endif
