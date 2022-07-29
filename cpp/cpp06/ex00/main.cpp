#include <cctype>
#include <ios>
#include <stdexcept>
#include <string>
#include <iostream>
#include <iomanip>
#include "Cast.hpp"

int main(const int ac, const char *av[]) {
    if (ac != 2) return 1;
    Cast ex(av[1]);
    ex.getStatus();
    ex.resault();
}

