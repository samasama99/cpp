#include "PhoneBook.hpp"
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstddef>
#include <ios>
#include <iostream>
#include <string>

enum command { quit, add, search };

std::string string_to_upper(std::string str) {
  size_t i = 0;

  if (str.empty() == true)
    return str;
  while (str[i]) {
    str[i] = toupper(str[i]);
    i++;
  }
  return str;
}

int get_command(void) {
  std::string input;
  std::getline(std::cin, input);

  if (input.empty() == true)
    return -1;

  input = string_to_upper(input);

  if (input.compare("EXIT") == 0)
    return quit;
  else if (input.compare("SEARCH") == 0)
    return search;
  else if (input.compare("ADD") == 0)
    return add;

  return -1;
}

void exec_command(PhoneBook *list, int command) {
  switch (command) {
  case quit:
    exit(0);
    break;
  case add:
    list->add_contact();
    break;
  case search:
    list->search_contact();
    break;
  }
}

int main(void) {
  PhoneBook phoneBook;

  while (true) {
    std::cout << "ADD : SEARCH : EXIT" << '\n';
    exec_command(&phoneBook, get_command());
  }
}
