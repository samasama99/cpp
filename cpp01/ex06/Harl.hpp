#include <iostream>
#include <map>
#include <string>

using std::string;

class Harl {
private:
    static void debug();

    static void info();

    static void warning();

    static void error();

public:
    static void complain(std::string level);
};
