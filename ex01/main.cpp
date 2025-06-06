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

#include "main.hpp"

static std::array<std::string, NUM_PROMPTS> init_prompts()
{
	std::array<std::string, NUM_PROMPTS> prompts;

	prompts[FIRST_NAME]	  = "enter first name";
	prompts[LAST_NAME]	  = "enter second name";
	prompts[NICKNAME]	  = "enter nickname";
	prompts[PHONE_NUMBER] = "enter phone number";
	prompts[SECRET]		  = "tell me your deepest secret";

	return (prompts);
}

std::string get_user_input(prompt_code prompt)
{
}

int main()
{
	std::array<std::string, NUM_PROMPTS> prompts = init_prompts();
}
