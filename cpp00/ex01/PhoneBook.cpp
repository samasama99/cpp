/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:36:33 by orahmoun          #+#    #+#             */
/*   Updated: 2022/03/22 13:44:04 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool is_num(string num) {
  for (int i = 0; num[i]; ++i) {
    if (num[i] < '0' || num[i] > '9')
      return false;
  }
  return true;
}

PhoneBook::PhoneBook() {
  _num_contacts = 0;
  _index = 0;
}

string PhoneBook::read_number() {
  std::string number;

try_again:
  if (!std::getline(std::cin, number))
    exit(1);
  if (is_num(number) == false || number.empty()) {
    std::cout << "Pls enter a valid number : ";
    goto try_again;
  }

  return number;
}

string PhoneBook::read_string() {
  std::string str;

try_again:
  if (!std::getline(std::cin, str))
    exit(1);
  if (str.empty()) {
    std::cout << "Pls enter a valid string : ";
    goto try_again;
  }

  return str;
}

Contact PhoneBook::read_info() {
  std::string number;
  std::string name;
  std::string last_name;
  std::string nick_name;
  std::string secret;

  std::cout << "Enter the first name : ";
  name = read_string();
  std::cout << "Enter the last name : ";
  last_name = read_string();
  std::cout << "Enter the nick name : ";
  nick_name = read_string();
  std::cout << "Enter the phone number : ";
  number = read_number();
  std::cout << "Tell me her/his secret ? : ";
  secret = read_string();
  Contact tmp(name, last_name, nick_name, secret, number);
  return tmp;
}

void PhoneBook::add_contact() {
  if (_num_contacts < 8)
    _num_contacts++;
  _contacts[_index] = PhoneBook::read_info();
  std::cout << "New contact added !\n";
  _index = (_index + 1) % 8;
}

void PhoneBook::search_contact() const {
  if (_num_contacts == 0) {
    std::cout << "no contact available\n";
    return;
  }

  for (size_t i = 0; i < _num_contacts; ++i) {
    std::cout << (int)i << " | ";
    _contacts[(int)i].display_contact_brief();
  }

  std::string input;
  std::cout << "enter the desirable index : ";
try_again:
  input = read_number();
  if (input.empty())
    exit(1);

  size_t in = atoi(input.c_str());
  if (in > _num_contacts - 1) {
    std::cout << "Pls enter a valid input : ";
    goto try_again;
  }
  _contacts[(int)in].display_contact_extended();
}
