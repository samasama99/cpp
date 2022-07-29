#include "Fixed.hpp"

Fixed::Fixed() : _value(0) { std::cout << "Default constructor called\n"; };

Fixed::Fixed(const Fixed &f) {
  std::cout << "Copy constructor called\n";
  *this = f;
};

Fixed::~Fixed(void) { std::cout << "Destructor called\n"; };

void Fixed::operator=(const Fixed &f) {
  std::cout << "Copy assignment operator called\n";
  this->_value = f.getRawBits();
};

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return _value;
};

void Fixed::setRawBits(int const raw) { _value = raw; };
