/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:21:32 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:00:52 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "../includes/main.hpp"
#include "../utils/utils.hpp"
#include <string>

#define ENTRY_LEN 10

class Contact
{
private:
	int			_index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _secret;

public:
	Contact();
	Contact(int index);
	int create_contact();
	int print_contact_trunc(int id);
	int print_contact(int id);
};

#endif
