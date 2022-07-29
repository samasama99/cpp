#include <iostream>

class Fixed {
private:
  int _value;
  static const int _fractional_bits = 8;

public:
  Fixed(void);

  Fixed(const Fixed &f);

  ~Fixed(void);

  void operator=(const Fixed &f);

  int getRawBits(void) const;

  void setRawBits(int const raw);
};
