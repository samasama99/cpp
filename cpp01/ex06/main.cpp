#include "Harl.hpp"
#include <iostream>

int main(int ac, char *av[]) {
  if (ac != 2) {
    std::cout << "HARL : realy ?\n";
    return 1;
  }
  Harl harl;
  harl.complain(av[1]);
}
