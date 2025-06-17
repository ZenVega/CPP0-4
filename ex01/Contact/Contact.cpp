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
	while (_first_name.empty())
	{
		_first_name = get_user_input(FIRST_NAME, 0);
		if (_first_name.empty())
			log_action("first name", EMPTY);
	}
	while (_last_name.empty())
	{
		_last_name = get_user_input(LAST_NAME, 0);
		if (_last_name.empty())
			log_action("last name", EMPTY);
	}
	while (_nickname.empty())
	{
		_nickname = get_user_input(NICKNAME, 0);
		if (_nickname.empty())
			log_action("nickname", EMPTY);
	}
	while (_phone_number.empty() || !is_numeric(_phone_number))
	{
		_phone_number = get_user_input(PHONE_NUMBER, 0);
		if (_phone_number.empty())
			log_action("phone number", EMPTY);
		else if (!is_numeric(_phone_number))
			log_action("phone number", NO_NUMBER);
	}
	while (_secret.empty())
	{
		_secret = get_user_input(SECRET, 0);
		if (_secret.empty())
			log_action("secret", EMPTY);
	}
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
