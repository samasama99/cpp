#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
  // subject tests
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter *bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);

  // more tests
  // me->unequip(1);
  // me->use(1, *bob);
  // tmp = src->createMateria("cure");
  // me->equip(tmp);
  // me->use(1, *bob);

  delete bob;
  delete me;
  delete src;
  // end subject tests

  // my tests :
  // IMateriaSource *src = new MateriaSource();
  // src->learnMateria(new Ice());
  // src->learnMateria(new Cure());

  // AMateria *tmp;
  // tmp = src->createMateria("ice");
  // Character him("him");
  // him.equip(tmp);
  // Character notHim(him);
  // tmp = src->createMateria("cure");
  // notHim.equip(tmp);
  // notHim.use(1, him);
  // notHim.use(0, him);
  // Character notMe;
  // notMe = notHim;
  // notMe.use(0, notHim);
  // notMe.use(1, notHim);
  // delete src;
  // end my tests


  // system("leaks Game");
  return 0;
}
