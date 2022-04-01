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
// #include <cstddef>

PhoneBook::PhoneBook() {
  num_of_contacts = 0;
  index = 0;
}

size_t read_number() {
  std::string number_str;
  size_t number;

try_again:
  std::getline(std::cin, number_str);
  try {
    number = stoi(number_str);
  } catch (const std::invalid_argument &e) {
    std::cout << "Pls enter a valid number : ";
    goto try_again;
  } catch (const std::out_of_range &e) {
    std::cout << "Pls enter a valid number : ";
    goto try_again;
  }
  return number;
}

Contact PhoneBook::read_info() {
  Contact contact;

  size_t number;
  std::string name;
  std::string last_name;
  std::string nick_name;
  std::string secret;
  std::cout << "Enter the first name : ";
  std::getline(std::cin, name);
  std::cout << "Enter the last name : ";
  std::getline(std::cin, last_name);
  std::cout << "Enter the nick name : ";
  std::getline(std::cin, nick_name);
  std::cout << "Tell me her/his secret ? : ";
  std::getline(std::cin, secret);
  std::cout << "Enter the phone number : ";
  number = read_number();

  contact.new_contact(name, last_name, nick_name, secret, number);
  return contact;
}

void PhoneBook::add_contact() {
  if (num_of_contacts < 8)
    num_of_contacts++;
  contacts[index] = PhoneBook::read_info();
  std::cout << "New contact added !\n";
  index = (index + 1) % 8;
}

void PhoneBook::search_contact() {
  size_t i;

  for (i = 0; i < num_of_contacts; i++) {
    std::cout << (int)i << " | ";
    contacts[(int)i].display_contact_brief();
  }

  std::string index;
  std::cout << "Enter the desirable index : ";

try_again:
  getline(std::cin, index);
  try {
    i = stoi(index);
  } catch (const std::invalid_argument &e) {
    std::cout << "Pls enter a valid number : ";
    goto try_again;
  } catch (const std::out_of_range &e) {
    std::cout << "Pls enter a valid number : ";
    goto try_again;
  }
  if (i < num_of_contacts) {
    contacts[i].display_contact_extended();
  } else {
    std::cout << "Pls enter a valid index : ";
    goto try_again;
  }
}
