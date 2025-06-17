/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:09:27 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook/PhoneBook.hpp"
#include "includes/main.hpp"

int main()
{
	std::string command;
	PhoneBook	PB;

	while (1)
	{
		command = get_user_input(COMMAND);
		if (command.compare("ADD") == 0)
			PB.add();
		if (command.compare("SEARCH") == 0)
			PB.search();
		if (command.compare("EXIT") == 0)
			break;
	};
}
