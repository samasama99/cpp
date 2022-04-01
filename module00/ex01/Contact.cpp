/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:38:20 by orahmoun          #+#    #+#             */
/*   Updated: 2022/03/22 11:51:47 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

void Contact::new_contact(std::string name, std::string last_name,
                          std::string nick_name, std::string darkest_secret,
                          uint64_t number) {
  if (name.empty() == false)
    this->name = name;
  else
    std::cout << "hello\n";
  this->last_name = last_name;
  this->nick_name = nick_name;
  this->darkest_secret = darkest_secret;
  this->number = number;
}

void print_field(std::string str) {
  size_t i = 0;

  while (i < 9) {
    std::cout << str[i];
    i++;
  }

  if (str.length() > 9)
    std::cout << '.';
}

void Contact::display_contact_brief() {
  print_field(name);
  std::cout << " | ";
  print_field(last_name);
  std::cout << " | ";
  print_field(nick_name);
  std::cout << "\n";
}

void Contact::display_contact_extended() {
  std::cout << "Name :" << name << '\n';
  std::cout << "Last name :" << last_name << '\n';
  std::cout << "Nick name :" << nick_name << '\n';
  std::cout << "Darkest secret :" << darkest_secret << '\n';
  std::cout << "Number :" << number << '\n';
}
