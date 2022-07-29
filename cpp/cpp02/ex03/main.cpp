#include "Point.hpp"
#include <iostream>

void is_inside(const Point a, const Point b, const Point c, const Point point) {
  if (bsp(a, b, c, point))
    std::cout << "inside\n";
  else
    std::cout << "not inside\n";
}

int main(void) {
  Point a(0, 0);
  Point b(20, 0);

  Point c(10, 30);
  Point point(10, 15);
  Point point2(500, 500);

  Point point3(10, 5);
  Point point4(-10, 50);

  is_inside(a, b, c, point);
  is_inside(a, b, c, point2);
  is_inside(a, b, c, point3);
  is_inside(a, b, c, point4);
  return 0;
}
