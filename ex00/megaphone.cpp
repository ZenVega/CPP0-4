/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:36:27 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/03 13:49:10 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	char buzzing[] = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (argc == 1)
	{
		std::cout << buzzing << std::endl;
		return 0;
	}
	while (argv[i])
	{
		while (argv[i][j])
			std::cout << (char)std::toupper(argv[i][j++]);
		i++;
		j = 0;
	}
	std::cout << std::endl;
	return 0;
}
