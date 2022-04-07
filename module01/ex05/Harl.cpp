#include "Harl.hpp"

using std::cout;
using std::string;

typedef void (*Fn)();

void Harl::debug() {
    cout << "I love having extra bacon for my "
            "7XL-double-cheese-triple-pickle-specialketchup burger. I "
            "really do!\n";
}

void Harl::info() {
    cout << "I cannot believe adding extra bacon costs more money. You "
            "didn’t put enough bacon in my burger! If you did, I wouldn’t "
            "be asking for more!\n";
}

void Harl::warning() {
    cout
            << "I think I deserve to have some extra bacon for free. I’ve been "
               "coming for years whereas you started working here since last month\n";
}

void Harl::error() {
    cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(const std::string &level) {
    Fn complaints[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (size_t i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (*complaints[i])();
            return;
        }
    }
    cout << "English, mf! Do you speak it?!\n";
}
