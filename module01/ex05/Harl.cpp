#include "Harl.hpp"
using std::cout;
using std::string;

typedef int_least8_t Index;
typedef void (Harl::*Fn)(void);

void Harl::debug(void) {
  cout << "I love having extra bacon for my "
          "7XL-double-cheese-triple-pickle-specialketchup burger. I "
          "really do!\n";
}

void Harl::info(void) {
  cout << "I cannot believe adding extra bacon costs more money. You "
          "didn’t put enough bacon in my burger! If you did, I wouldn’t "
          "be asking for more!\n";
}

void Harl::warning(void) {
  cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years whereas you started working here since last month\n";
}

void Harl::error(void) {
  cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
  Fn complaints[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (Index i = 0; i < 4; i++) {
    if (levels[i] == level) {
      (this->*complaints[i])();
      return;
    }
  }
  cout << "English, mf! Do you speak it?!\n";
}
