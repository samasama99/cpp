#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource() : MateriasEquiped(0) {
  slots[0] = NULL;
  slots[1] = NULL;
  slots[2] = NULL;
  slots[3] = NULL;
};

MateriaSource::~MateriaSource() {
  delete slots[0];
  delete slots[1];
  delete slots[2];
  delete slots[3];
};


MateriaSource::MateriaSource(const MateriaSource &src) : MateriasEquiped(src.MateriasEquiped) {
  slots[0] = (src.slots[0] != NULL) ? src.slots[0]->clone() : NULL;
  slots[1] = (src.slots[1] != NULL) ? src.slots[1]->clone() : NULL;
  slots[2] = (src.slots[2] != NULL) ? src.slots[2]->clone() : NULL;
  slots[3] = (src.slots[3] != NULL) ? src.slots[3]->clone() : NULL;
};
MateriaSource &MateriaSource::operator=(const MateriaSource &rh) {
  if (this == &rh)
    return *this;
  MateriasEquiped = rh.MateriasEquiped;
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
  slots[0] = (rh.slots[0] != NULL) ? rh.slots[0]->clone() : NULL;
  slots[1] = (rh.slots[1] != NULL) ? rh.slots[1]->clone() : NULL;
  slots[2] = (rh.slots[2] != NULL) ? rh.slots[2]->clone() : NULL;
  slots[3] = (rh.slots[3] != NULL) ? rh.slots[3]->clone() : NULL;
  return *this;
  
};

void MateriaSource::learnMateria(AMateria *am) {
  if (MateriasEquiped > 3)
    return;
  if (am->getType() == "ice")
    slots[MateriasEquiped++] = am;
  else if (am->getType() == "cure")
    slots[MateriasEquiped++] = am;
};

AMateria *MateriaSource::createMateria(std::string const &type) {
  if (type == "ice")
    return slots[MateriasEquiped++] = new Ice();
  else if (type == "cure")
    return slots[MateriasEquiped++] = new Cure();
  else
    return NULL;
};
