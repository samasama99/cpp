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

#include <string>

using std::string;

class Contact {

private:
  string _first_name;
  string _last_name;
  string _nick_name;
  string _darkest_secret;
  string _number;

private:
  static void print_field(std::string str);

public:
  Contact(string name, string last_name, string nick_name,
          string darkest_secret, string number);

  Contact();

  void display_contact_brief() const;

  void display_contact_extended() const;
};

#endif
