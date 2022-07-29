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
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);
