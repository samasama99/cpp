#include <iostream>
int main(void) {
  int a = 99;
  int b = 88;
  int &ref = a;
  int &ref2 = b;
  int *p = &ref;

  std::cout << a << " " << ref << " " << *p << "\n";
  p = &ref2;
  std::cout << b << " " << ref2 << " " << *p << "\n";
}
