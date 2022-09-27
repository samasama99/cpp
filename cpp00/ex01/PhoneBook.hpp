/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:44:08 by orahmoun          #+#    #+#             */
/*   Updated: 2022/03/22 14:47:20 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {
private:
  Contact _contacts[8];
  size_t _index;
  size_t _num_contacts;

private:
  static Contact read_info();
  static string read_number();
  static string read_string();

public:
  PhoneBook();

  void add_contact();

  void search_contact() const;
};

#endif
