#include "Character.hpp"
Character::Character() : name(""), MateriasEquiped(0) {
  slots[0] = NULL;
  slots[1] = NULL;
  slots[2] = NULL;
  slots[3] = NULL;
};

Character::Character(std::string name) : name(name), MateriasEquiped(0) {
  slots[0] = NULL;
  slots[1] = NULL;
  slots[2] = NULL;
  slots[3] = NULL;
};

Character::Character(const Character &src)
    : name(src.getName()), MateriasEquiped(src.MateriasEquiped) {
  for (size_t i = 0;i < 4;++i)
    slots[i] = (src.slots[i] != NULL) ? src.slots[i]->clone() : NULL;
};

Character::~Character(){};

Character &Character::operator=(Character const &src) {
  if (this == &src)
    return *this;
  name = src.getName();
  MateriasEquiped = src.MateriasEquiped;
  if (slots[0])
    delete slots[0];
  if (slots[1])
    delete slots[1];
  if (slots[2])
    delete slots[2];
  if (slots[3])
    delete slots[3];
  slots[0] = NULL;
  slots[1] = NULL;
  slots[2] = NULL;
  slots[3] = NULL;
  slots[0] = (src.slots[0] != NULL) ? src.slots[0]->clone() : NULL;
  slots[1] = (src.slots[1] != NULL) ? src.slots[1]->clone() : NULL;
  slots[2] = (src.slots[2] != NULL) ? src.slots[2]->clone() : NULL;
  slots[3] = (src.slots[3] != NULL) ? src.slots[3]->clone() : NULL;
  return *this;
};

std::string const &Character::getName() const { return name; };

void Character::equip(AMateria *m) {
  if (MateriasEquiped >= 4)
    return;
  slots[MateriasEquiped] = m;
  ++MateriasEquiped;
};

void Character::unequip(int idx) {
  if (MateriasEquiped <= 0)
    return;
  if (idx >= MateriasEquiped || idx < 0)
    return;
  for (int i = idx; i < MateriasEquiped; ++i) {
    slots[i] = slots[i + 1];
  }
  --MateriasEquiped;
};

void Character::use(int idx, ICharacter &target) {
  if (idx > MateriasEquiped - 1 || idx < 0)
    return;
  slots[idx]->use(target);
};
