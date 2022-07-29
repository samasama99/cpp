#include "Point.hpp"
#include <iostream>

Point::Point() : _x(0), _y(0){};

Point::Point(const float x, const float y) : _x(x), _y(y){};

Point::Point(const Point &p) : _x(p._x), _y(p._y){};

Point::~Point(void){};

Point &Point::operator=(const Point &p) {
  (void)p;
  return *this;
};

Fixed Point::getX() const { return _x; };
Fixed Point::getY() const { return _y; };

Fixed Point::abs(Fixed x) { return x.getRawBits() >= 0 ? x : Fixed(-1) * x; };
