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

Contact::Contact(string name, string last_name,
                 string nick_name, string darkest_secret,
                 size_t number) : _name(std::move(name)), _last_name(std::move(last_name)),
                                  _nick_name(std::move(nick_name)),
                                  _darkest_secret(std::move(darkest_secret)), _number{number} {}

void print_field(std::string str) {
    size_t i = 0;

    while (i < 9 && str[i]) {
        std::cout << str[i];
        i++;
    }

    if (str.length() > 9)
        std::cout << '.';
}

void Contact::display_contact_brief() const {
    print_field(_name);
    std::cout << " | ";
    print_field(_last_name);
    std::cout << " | ";
    print_field(_nick_name);
    std::cout << "\n";
}

void Contact::display_contact_extended() const {
    std::cout << "Name :" << _name << '\n';
    std::cout << "Last _name :" << _last_name << '\n';
    std::cout << "Nick _name :" << _nick_name << '\n';
    std::cout << "Darkest secret :" << _darkest_secret << '\n';
    std::cout << "Number :" << _number << '\n';
}
