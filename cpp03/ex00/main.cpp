#include "ClapTrap.hpp"

int main() {
  ClapTrap m1("foo");
  ClapTrap m2("bar");

  m1.attack("bar");
  m2.takeDamage(0);

  m1.attack("bar");
  m2.takeDamage(0);

  m2.attack("bar");
  m1.takeDamage(0);

  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
}
