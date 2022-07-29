#include "Fixed.hpp"
#include <iostream>

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max(a, b) << std::endl;
  // std::cout << Fixed::min(a, b) << std::endl;
  // Fixed c(5);
  // std::cout << ++c << '\n';
  // std::cout << c++ << '\n';
  // std::cout << c << '\n';
  // std::cout << --c << '\n';
  // std::cout << c-- << '\n';
  // std::cout << c << '\n';
  // Fixed x(10.5f);
  // Fixed z(10.5f);
  // Fixed y(2);
  // std::cout << x / y << '\n';
  // if (x == y) {
  //   std::cout << "Equal" << '\n';
  // } else {
  //   std::cout << "not Equal" << '\n';
  // }
  // if (x == z) {
  //   std::cout << "Equal" << '\n';
  // } else {
  //   std::cout << "not Equal" << '\n';
  // }
  return 0;
}
