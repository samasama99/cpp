#include "FragTrap.hpp"

int main() {
  ScavTrap m1("robot1");
  FragTrap m2("robot2");

  m1.attack("Robot2");
  m2.takeDamage(20);

  m1.attack("Robot2");
  m2.takeDamage(20);

  m2.attack("Robot1");
  m1.takeDamage(20);

  m2.beRepaired(1);
  m2.beRepaired(1);
  m2.beRepaired(1);
  m1.guardGate();
  m1.guardGate();
  m2.highFivesGuys();
}
