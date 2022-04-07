#include <iostream>
#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie();

    ~Zombie();

    void announce();

    Zombie *zombieHorde(int N, std::string name);
};
