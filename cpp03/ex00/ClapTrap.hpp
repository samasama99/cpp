#include <iostream>
#include <string>

class ClapTrap {
private:
  std::string _name;
  int _hitPoint;
  int _energyPoint;
  int _attackDamage;

public:
  ClapTrap();
  ClapTrap(const std::string &name);
  ~ClapTrap();
  ClapTrap(const ClapTrap &src);
  void operator=(const ClapTrap &rh);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
