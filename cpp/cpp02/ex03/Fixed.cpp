#include "Fixed.hpp"

Fixed::Fixed() : _value(0){};

Fixed::Fixed(const Fixed &f) { *this = f; };

Fixed::~Fixed(void){};

Fixed::Fixed(const int value) : _value(value * (1 << _fractional_bits)){};

Fixed::Fixed(const float value)
    : _value(roundf(value * (1 << _fractional_bits))){};

void Fixed::operator=(const Fixed &f) { this->_value = f.getRawBits(); };

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

Fixed Fixed::operator+(Fixed const &obj) {
  return Fixed(this->toFloat() + obj.toFloat());
};

Fixed Fixed::operator-(Fixed const &obj) {
  return Fixed(this->toFloat() - obj.toFloat());
};

Fixed Fixed::operator*(Fixed const &obj) {
  return Fixed(this->toFloat() * obj.toFloat());
};

Fixed Fixed::operator/(Fixed const &obj) {
  return Fixed(this->toFloat() / obj.toFloat());
};

bool Fixed::operator<(Fixed const &obj) {
  return this->getRawBits() < obj.getRawBits();
};
bool Fixed::operator<=(Fixed const &obj) {
  return this->getRawBits() <= obj.getRawBits();
};
bool Fixed::operator>(Fixed const &obj) {
  return this->getRawBits() > obj.getRawBits();
};
bool Fixed::operator>=(Fixed const &obj) {
  return this->getRawBits() >= obj.getRawBits();
};

bool Fixed::operator==(Fixed const &obj) {
  return this->getRawBits() == obj.getRawBits();
};
bool Fixed::operator!=(Fixed const &obj) {
  return this->getRawBits() != obj.getRawBits();
};

Fixed &Fixed::operator++() {
  // this->_value += 1 << _fractional_bits;
  ++this->_value;
  return *this;
};

Fixed Fixed::operator++(int) {
  Fixed tmp(*this);
  ++this->_value;
  // this->_value += 1 << _fractional_bits;
  return tmp;
};

Fixed &Fixed::operator--() {
  --this->_value;
  // this->_value -= 1 << _fractional_bits;
  return *this;
};

Fixed Fixed::operator--(int) {
  Fixed tmp(*this);
  --this->_value;
  // this->_value -= 1 << _fractional_bits;
  return tmp;
};

Fixed &Fixed::min(Fixed &l, Fixed &r) { return l._value > r._value ? r : l; };

Fixed const &Fixed::min(const Fixed &l, const Fixed &r) {
  return l._value > r._value ? r : l;
};

Fixed &Fixed::max(Fixed &l, Fixed &r) { return l._value < r._value ? r : l; };

Fixed const &Fixed::max(const Fixed &l, const Fixed &r) {
  return l._value < r._value ? r : l;
};
