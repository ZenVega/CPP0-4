/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:56:18 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:33:14 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "../includes/CONSTANTS.h"
#include <iostream>
#include <string>

int			log_action(std::string subject, action_code action);
std::string get_user_input(prompt_code prompt, int nl);
int			is_numeric(std::string number);

#endif
