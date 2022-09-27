#ifndef AMATERIA_H
#define AMATERIA_H
#include <string>

class ICharacter;

class AMateria {
protected:
  std::string type;

public:
  AMateria();
  virtual ~AMateria();
  AMateria(std::string const &type);
  AMateria(AMateria const &src);
  AMateria &operator=(AMateria const &src);
  std::string const &getType() const; // Returns the materia type
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};
#endif
