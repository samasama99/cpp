#include "PhoneBook.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

enum command { quit, add, search };

std::string string_to_upper(std::string str) {
  if (str.empty())
    return str;
  for (size_t i = 0; str[i]; i++) {
    str[i] = (char)toupper(str[i]);
  }
  return str;
}

int get_command() {
  std::string input;
  while (input.empty()) {
    std::cout << "ADD : SEARCH : EXIT\n>>";
    if (!std::getline(std::cin, input))
      exit(1);
  }

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

  while (exec_command(&phoneBook, get_command()))
    ;
}
