/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:06:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:18:24 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_index = -1;
};

Contact::Contact(int index)
{
	_index = index;
};

int Contact::create_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

	// TODO: fields cannot be empty
	// TODO: phonenumber should be number
	while (first_name.empty())
	{
		first_name = get_user_input(FIRST_NAME);
		if (first_name.empty())
			log_action("first name", EMPTY);
	}
	_last_name	  = get_user_input(LAST_NAME);
	_nickname	  = get_user_input(NICKNAME);
	_phone_number = get_user_input(PHONE_NUMBER);
	_secret		  = get_user_input(SECRET);
	return (0);
};

int Contact::print_contact_trunc(int id)
{
	// TODO: truncate to 10 digits
	std::cout << id << " | ";
	std::cout << _first_name << " | ";
	std::cout << _last_name << " | ";
	std::cout << _phone_number << " | ";
	std::cout << _secret << std::endl;
	return (0);
};

int Contact::print_contact(int id)
{
	return (id);
}
