# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 15:45:04 by uschmidt          #+#    #+#              #
#    Updated: 2025/06/04 15:46:50 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FOLDER	= ./

CFILES		= \
			$(SRC_FOLDER)/phonebook.cpp\

OFILES 		= $(CFILES:.cpp=.o)

CC			= c++

CFLAGS		= -g -Wall -Wextra -Werror -std=c++98

NAME		= megaphone

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(SANITIZER) -o $(SRC_FOLDER)$(NAME) $(OFILES)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) $(SANITIZER) -I/usr/include -g -c $< -o $@

clean:
	rm -f $(OFILES)
	find $(SRC_FOLDER) -name "*.o" -delete

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
