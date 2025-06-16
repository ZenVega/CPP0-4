/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:21:41 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:17:25 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
  for (int i = 0; i < 8; i++)
    contacts[i] = Contact(i);
  num_contacts = 0;
}

void PhoneBook::add() {
  contacts[num_contacts % 8].create_contact();
  num_contacts++;
};

void PhoneBook::search() {
  for (int i = 0; i < num_contacts; i++)
    contacts[i].print_contact(i);
};
