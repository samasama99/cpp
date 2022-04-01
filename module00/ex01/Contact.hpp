/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:42:42 by orahmoun          #+#    #+#             */
/*   Updated: 2022/03/22 14:41:28 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>

class Contact {

private:
  std::string name;
  std::string last_name;
  std::string nick_name;
  std::string darkest_secret;
  uint64_t number;

public:
  Contact();
  void new_contact(std::string name, std::string last_name,
                   std::string nick_name, std::string darkest_secret,
                   uint64_t number);
  void display_contact_brief();
  void display_contact_extended();
};
#endif
