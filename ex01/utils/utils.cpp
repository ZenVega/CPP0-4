/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:56:13 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:35:23 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

static std::string get_prompt(prompt_code prompt)
{
	if (prompt == FIRST_NAME)
		return ("enter first name");
	else if (prompt == LAST_NAME)
		return ("enter second name");
	else if (prompt == NICKNAME)
		return ("enter nickname");
	else if (prompt == PHONE_NUMBER)
		return ("enter phone number");
	else if (prompt == SECRET)
		return ("tell me your deepest secret");
	else if (prompt == COMMAND)
		return ("enter ADD, SEARCH or EXIT");

	return ("error");
}

static std::string get_action(action_code prompt)
{
	if (prompt == EMPTY)
		return (" field cannot be empty");
	else if (prompt == NO_NUMBER)
		return (" has to be only numbers");
	else if (prompt == WELCOME)
		return ("Welcome to your Phonebook!");

	return ("error");
}

std::string get_user_input(prompt_code prompt, int nl)
{
	std::string input;

	std::cout << get_prompt(prompt);
	if (nl)
		std::cout << std::endl;
	else
		std::cout << ": ";
	std::getline(std::cin, input);
	return input;
}

void display_entries(void){};

int log_action(std::string subject, action_code action)
{

	std::cout << "\033[1;31m";
	std::cout << subject << get_action(action);
	std::cout << "\033[0m" << std::endl;
	return (0);
}

int is_numeric(std::string number)
{
	for (int i = 0; number[i]; i++)
	{
		if (number[i] < 48 || number[i] > 57)
			return (0);
	}
	return (1);
}
