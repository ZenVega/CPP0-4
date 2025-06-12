/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:21:41 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/10 11:43:07 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
		for (int i = 0; i < 8; i++)
			contacts[i] = Contact(i);
		num_contacts = 0;
}

void	PhoneBook::add()
{
	contacts[0].create_contact();
};
