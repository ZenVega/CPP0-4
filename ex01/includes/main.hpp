/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:22 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/12 14:21:36 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <array>
# include <cctype>
# include <iomanip>
# include <iostream>
# include <string>
# include "CONSTANTS.h"

# define NUM_PROMPTS 6

std::string get_user_input(prompt_code	prompt);

#endif
