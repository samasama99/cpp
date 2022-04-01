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
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <string>

class PhoneBook {
private:
  Contact contacts[8];
  size_t index;
  size_t num_of_contacts;

private:
  Contact read_info();

public:
  PhoneBook();
  void add_contact();
  void search_contact();
};
#endif
