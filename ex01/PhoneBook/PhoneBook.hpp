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
#include <cstdlib>
#include <cstring>
#include <string>

class PhoneBook
{
private:
	Contact contacts[MAX_CONTACTS];
	int		num_contacts;
	int		last_index;

public:
	PhoneBook();

	void add();
	void search();
};

#endif
