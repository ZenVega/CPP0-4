/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:53:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:17:30 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "../Contact/Contact.hpp"

class PhoneBook {
private:
  Contact contacts[8];
  int num_contacts;

public:
  PhoneBook();

  void add();

  void search();

  void exit();
};

#endif
