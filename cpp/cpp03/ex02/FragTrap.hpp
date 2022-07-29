#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
  FragTrap();
  ~FragTrap();
  FragTrap(const std::string &name);
  void attack(const std::string &target);
  void highFivesGuys(void);
};
