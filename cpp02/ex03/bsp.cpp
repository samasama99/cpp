#include "Point.hpp"

Fixed tri_area(Point a, Point b, Point c) {
  return Fixed(Point::abs((a.getX() * (b.getY() - c.getY()) +
                           b.getX() * (c.getY() - a.getY()) +
                           c.getX() * (a.getY() - b.getY())) /
                          Fixed((float)2.0)));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed A = tri_area(a, b, c);
  Fixed A1 = tri_area(point, b, c);
  Fixed A2 = tri_area(point, a, c);
  Fixed A3 = tri_area(point, a, b);
  return (A == (A1 + A2 + A3));
};
