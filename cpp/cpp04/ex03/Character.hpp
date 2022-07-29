#ifndef CHARACTER_H
#define CHARACTER_H
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {
private:
  std::string name;
  AMateria *slots[4];
  int MateriasEquiped;

public:
  Character();
  Character(std::string name);
  Character(const Character &src);
  ~Character();
  Character &operator=(Character const &src);
  std::string const &getName() const;
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);
};
#endif
