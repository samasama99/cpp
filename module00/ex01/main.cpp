#include "PhoneBook.hpp"
#include <cctype>
#include <iostream>
#include <string>

enum command {
    quit, add, search
};

std::string string_to_upper(std::string str) {
    if (str.empty())
        return str;
    for (size_t i = 0; str[i]; i++) {
        str[i] = (char) toupper(str[i]);
    }
    return str;
}

int get_command() {
    std::string input;
    std::getline(std::cin, input);

    if (input.empty())
        return -1;

    input = string_to_upper(input);

    if (input == "EXIT")
        return quit;
    else if (input == "SEARCH")
        return search;
    else if (input == "ADD")
        return add;

    return -1;
}

bool exec_command(PhoneBook *list, int command) {
    std::cout << "ADD : SEARCH : EXIT" << '\n';
    switch (command) {
        case quit:
            return false;
        case add:
            list->add_contact();
            return true;
        case search:
            list->search_contact();
            return true;
        default:
            return true;
    }
}

int main() {
    PhoneBook phoneBook;

    while (exec_command(&phoneBook, get_command())) {
    }
}
