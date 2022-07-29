#include "Fixed.hpp"
class Point {
private:
  Fixed const _x;
  Fixed const _y;

public:
  Point();

  Point(const float x, const float y);

  Point(const Point &p);

  ~Point(void);

  Point &operator=(const Point &p);

  Fixed getX() const;
  Fixed getY() const;

  static Fixed abs(Fixed x);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
