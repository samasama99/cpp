#include <cmath>
#include <iostream>

class Fixed {
private:
  int _value;
  static const int _fractional_bits = 8;

public:
  Fixed(void);

  Fixed(const int value);

  Fixed(const float value);

  Fixed(const Fixed &f);

  ~Fixed(void);

  void operator=(const Fixed &f);

  int getRawBits(void) const;

  void setRawBits(int const raw);

  float toFloat(void) const;

  int toInt(void) const;

  Fixed operator+(Fixed const &obj);
  Fixed operator-(Fixed const &obj);
  Fixed operator*(Fixed const &obj);
  Fixed operator/(Fixed const &obj);
  bool operator<(Fixed const &obj);
  bool operator>(Fixed const &obj);
  bool operator>=(Fixed const &obj);
  bool operator<=(Fixed const &obj);
  bool operator==(Fixed const &obj);
  bool operator!=(Fixed const &obj);
  // pre
  Fixed &operator++();
  Fixed &operator--();
  // post
  Fixed operator++(int);
  Fixed operator--(int);

  static Fixed &min(Fixed &l, Fixed &r);
  static const Fixed &min(const Fixed &l, const Fixed &r);

  static Fixed &max(Fixed &l, Fixed &r);
  static const Fixed &max(const Fixed &l, const Fixed &r);
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);
