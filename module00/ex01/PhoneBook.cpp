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

PhoneBook::PhoneBook() {
    _num_contacts = 0;
    _index = 0;
}

size_t read_number() {
    std::string number_str;
    size_t number;

    try_again:
    std::getline(std::cin, number_str);
    try {
        number = stoi(number_str);
    } catch (const std::invalid_argument &e) {
        std::cout << "Pls enter a valid _number : ";
        goto try_again;
    } catch (const std::out_of_range &e) {
        std::cout << "Pls enter a valid _number : ";
        goto try_again;
    }
    return number;
}

Contact PhoneBook::read_info() {

    size_t number;
    std::string name;
    std::string last_name;
    std::string nick_name;
    std::string secret;
    std::cout << "Enter the first _name : ";
    std::getline(std::cin, name);
    std::cout << "Enter the last _name : ";
    std::getline(std::cin, last_name);
    std::cout << "Enter the nick _name : ";
    std::getline(std::cin, nick_name);
    std::cout << "Tell me her/his secret ? : ";
    std::getline(std::cin, secret);
    std::cout << "Enter the phone _number : ";
    number = read_number();

    return {name, last_name, nick_name, secret, number};
}

void PhoneBook::add_contact() {
    if (_num_contacts < 8)
        _num_contacts++;
    _contacts[_index] = PhoneBook::read_info();
    std::cout << "New contact added !\n";
    _index = (_index + 1) % 8;
}

void PhoneBook::search_contact() const {
    for (size_t i = 0; i < _num_contacts; i++) {
        std::cout << (int) i << " | ";
        _contacts[(int) i].display_contact_brief();
    }

    std::string input;
    size_t Index;
    std::cout << "enter the desirable input : ";

    try_again:
    getline(std::cin, input);
    try {
        Index = stoi(input);
    } catch (const std::invalid_argument &e) {
        std::cout << "Pls enter a valid _number : ";
        goto try_again;
    } catch (const std::out_of_range &e) {
        std::cout << "Pls enter a valid _number : ";
        goto try_again;
    }
    if (Index < _num_contacts) {
        _contacts[Index].display_contact_extended();
    } else {
        std::cout << "Pls enter a valid input : ";
        goto try_again;
    }
}
