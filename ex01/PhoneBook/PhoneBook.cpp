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

PhoneBook::PhoneBook()
{
	for (int i = 0; i < MAX_CONTACTS; i++)
		contacts[i] = Contact(i);
	num_contacts = 0;
	last_index	 = -1;
}

void PhoneBook::add()
{
	contacts[num_contacts].create_contact();
	num_contacts = (num_contacts + 1) % MAX_CONTACTS;
	last_index++;
	if (last_index == MAX_CONTACTS)
		last_index = MAX_CONTACTS - 1;
};

static int print_header(void)
{
	std::string header = "     INDEX | FIRST NAME |  LAST NAME |   NICKNAME";
	std::cout << std::endl;
	std::cout << "\033[1;33m";
	std::cout << header;
	std::cout << "\033[0m" << std::endl;
	return (0);
}

void PhoneBook::search()
{
	// TODO: check for exitsting contacts
	std::string id;
	print_header();
	for (int i = 0; i <= last_index; i++)
		contacts[i].print_contact_trunc();

	id = get_user_input(ENTRY, 1);
	while (id == "" || id[1] || !std::isdigit(id[0]) || std::atoi(id.c_str()) > last_index)
	{
		if (id.compare("EXIT") == 0)
			return;
		log_action("", INVALID_ID);
		id = get_user_input(ENTRY, 1);
	};
	contacts[std::atoi(id.c_str())].print_contact();
}
