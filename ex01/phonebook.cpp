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

	log_action("", WELCOME);
	while (1)
	{
		command = get_user_input(COMMAND, 1);
		if (command.compare("ADD") == 0)
			PB.add();
		else if (command.compare("SEARCH") == 0)
			PB.search();
		else if (command.compare("EXIT") == 0)
			break;
		else if (!command.empty())
			log_action("", CMD_UNKNOWN);
		// command.clear();
	};
}
