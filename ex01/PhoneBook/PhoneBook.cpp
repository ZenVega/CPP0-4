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
	last_index	 = 0;
}

void PhoneBook::add()
{
	contacts[num_contacts].create_contact();
	num_contacts = (num_contacts + 1) % MAX_CONTACTS;
	last_index++;
	if (last_index > MAX_CONTACTS)
		last_index = MAX_CONTACTS;
};

void PhoneBook::search()
{
	std::string id;
	for (int i = 0; i < last_index; i++)
		contacts[i].print_contact_trunc();

	id = get_user_input(ENTRY, 1);
	while (id == "" || id[1] || !std::isdigit(id[0]) || std::atoi(id.c_str()) > num_contacts)
	{
		log_action("", INVALID_ID);
		id = get_user_input(ENTRY, 1);
	};
	contacts[std::atoi(id.c_str())].print_contact();
}
