/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/06 16:57:43 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "main.hpp"

static std::array<std::string, NUM_PROMPTS> init_prompts()
{
	std::array<std::string, NUM_PROMPTS> prompts;

	prompts[FIRST_NAME]	  = "enter first name";
	prompts[LAST_NAME]	  = "enter second name";
	prompts[NICKNAME]	  = "enter nickname";
	prompts[PHONE_NUMBER] = "enter phone number";
	prompts[SECRET]		  = "tell me your deepest secret";
	prompts[COMMAND]	  = "enter ADD, SEARCH or EXIT";

	return (prompts);
}

std::string get_user_input(prompt_code	prompt)
{
	
	std::array<std::string, NUM_PROMPTS> prompts;
	
	prompts = init_prompts();
	std::string input;
	std::cout << prompts[prompt] << std::endl;
	std::getline(std::cin, input);
	return input;
}

static void display_entries(void){};

int main()
{
	std::string	command;
	PhoneBook	PB;

	while (1)
	{
		if (command.compare("ADD") == 0)
			PB.add();
		if (command.compare("SEARCH") == 0)
			display_entries();
		if (command.compare("EXIT") == 0)
			break;
	};
}
