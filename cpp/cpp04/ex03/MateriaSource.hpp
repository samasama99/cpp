#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include "IMateriaSource.hpp"
#include <string>

class AMateria;

class MateriaSource : public IMateriaSource {
private:
  AMateria *slots[4];
  size_t MateriasEquiped;

public:
  MateriaSource();
  MateriaSource(const MateriaSource &src);
  MateriaSource &operator=(const MateriaSource &rh);
  ~MateriaSource();
  void learnMateria(AMateria *);
  AMateria *createMateria(std::string const &type);
};
#endif
