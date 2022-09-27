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

Contact::Contact(string name, string last_name, string nick_name,
                 string darkest_secret, string number)
    : _first_name(name), _last_name(last_name), _nick_name(nick_name),
      _darkest_secret(darkest_secret), _number(number) {}

void Contact::print_field(std::string str) {
  size_t i = 0;

  while (i < 9 && str[i]) {
    std::cout << str[i];
    i++;
  }

  if (str.length() > 9)
    std::cout << '.';
}

void Contact::display_contact_brief() const {
  print_field(_first_name);
  std::cout << " | ";
  print_field(_last_name);
  std::cout << " | ";
  print_field(_nick_name);
  std::cout << "\n";
}

void Contact::display_contact_extended() const {
  std::cout << "First name :" << _first_name << '\n';
  std::cout << "Last name :" << _last_name << '\n';
  std::cout << "Nick name :" << _nick_name << '\n';
  std::cout << "Darkest secret :" << _darkest_secret << '\n';
  std::cout << "Number :" << _number << '\n';
}
