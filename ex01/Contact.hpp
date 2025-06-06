/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:21:32 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/05 15:28:47 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#define ENTRY_LEN 10

class Contact
{
private:
	int			_index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	int			_phone_number[ENTRY_LEN * 2];
	std::string _darkest_secret;

	Contact(int index) :
		_index(index){};

public:
	void create_contact(){};
};
#endif
