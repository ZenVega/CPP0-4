/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CONSTANTS.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:21:04 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:33:22 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#define STR_MAX 10
enum prompt_code
{
	FIRST_NAME = 0,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	SECRET,
	COMMAND,
};

enum action_code
{
	EMPTY,
	NO_NUMBER,
	WELCOME,
};

#endif
