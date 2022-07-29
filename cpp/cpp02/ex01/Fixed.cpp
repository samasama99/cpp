#include "Fixed.hpp"

Fixed::Fixed() : _value(0) { std::cout << "Default constructor called\n"; };

Fixed::Fixed(const Fixed &f) {
  std::cout << "Copy constructor called\n";
  *this = f;
};

Fixed::~Fixed(void) { std::cout << "Destructor called\n"; };

Fixed::Fixed(const int value) : _value(value * (1 << _fractional_bits)) {
  std::cout << "Int constructor called\n";
};

Fixed::Fixed(const float value)
    : _value(roundf(value * (1 << _fractional_bits))) {
  std::cout << "Float constructor called\n";
};

void Fixed::operator=(const Fixed &f) {
  std::cout << "Copy assignment operator called\n";
  this->_value = f.getRawBits();
};

int Fixed::getRawBits(void) const { return _value; };

void Fixed::setRawBits(int const raw) { _value = raw; };

float Fixed::toFloat(void) const {
  return ((float)_value / (1 << _fractional_bits));
};

int Fixed::toInt(void) const {
  return ((int)_value / (1 << _fractional_bits));
};

std::ostream &operator<<(std::ostream &os, const Fixed &f) {
  os << f.toFloat();
  return os;
}
