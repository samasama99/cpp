#include "Harl.hpp"
using std::cout;
using std::string;

typedef int_least8_t Index;
typedef void (Harl::*Fn)(void);

void Harl::debug(void) {
  cout << "I love having extra bacon for my "
          "7XL-double-cheese-triple-pickle-specialketchup burger.\nI "
          "really do!\n\n";
}

void Harl::info(void) {
  cout << "I cannot believe adding extra bacon costs more money.\nYou "
          "didn’t put enough bacon in my burger! If you did, I wouldn’t "
          "be asking for more!\n\n";
}

void Harl::warning(void) {
  cout << "I think I deserve to have some extra bacon for free.\nI’ve been "
          "coming for years whereas you started working here since last "
          "month\n\n";
}

void Harl::error(void) {
  cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level) {
  Index lvl = 0;
  Fn complaints[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (lvl = 0; lvl < 4; lvl++) {
    if (levels[lvl] == level)
      break;
  }

  switch (lvl) {
  case 0:
    cout << "[ DEBUG ]\n";
    (this->*complaints[0])();
  case 1:
    cout << "[ INFO ]\n";
    (this->*complaints[1])();
  case 2:
    cout << "[ WARNING ]\n";
    (this->*complaints[2])();
  case 3:
    cout << "[ ERROR ]\n";
    (this->*complaints[3])();
    break;
  default:
    cout << "English, mf! Do you speak it?!\n";
  }
}
