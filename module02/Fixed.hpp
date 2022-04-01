class Fixed {
private:
  int value;
  static const int fractional_bits = 8;

public:
  Fixed(void);
  Fixed(const Fixed &f);
  ~Fixed(void);
  Fixed operator=(const Fixed f);
};
