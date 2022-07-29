#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
  std::string _name;

public:
  DiamondTrap();
  ~DiamondTrap();
  DiamondTrap(const std::string &name);
  void attack(const std::string &target);
  void whoAmI();
};
