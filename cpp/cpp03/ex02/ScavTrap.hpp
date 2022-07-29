#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
private:
  bool _GateKeeperMode;

public:
  ScavTrap();
  ~ScavTrap();
  ScavTrap(const std::string &name);
  void attack(const std::string &target);
  void guardGate();
};
