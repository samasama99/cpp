#include "DiamondTrap.hpp"

int main() {
  DiamondTrap m1("robot1");
  m1.attack("Robot2");
  m1.attack("Robot2");
  m1.takeDamage(20);
  m1.guardGate();
  m1.guardGate();
  m1.highFivesGuys();
  m1.whoAmI();
}
