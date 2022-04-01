#include <iostream>
#include <string>

class Zombie {
private:
  std::string _name;

public:
  Zombie(void);
  Zombie(std::string name);
  ~Zombie(void);

  void announce(void);

  Zombie *zombieHorde(int N, std::string name);
};
