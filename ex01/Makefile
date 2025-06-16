# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 15:45:04 by uschmidt          #+#    #+#              #
#    Updated: 2025/06/16 15:14:55 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

SRC_FOLDER	= ./
OBJ_FOLDER	= ofiles/

CFILES		:=
vpath %.cpp $(SRC_FOLDER)
CFILES += $(NAME).cpp

vpath %.cpp $(SRC_FOLDER)Contact
CFILES += Contact.cpp

vpath %.cpp $(SRC_FOLDER)PhoneBook
CFILES += PhoneBook.cpp

vpath %.cpp $(SRC_FOLDER)utils
CFILES += utils.cpp

OFILES      = $(addprefix $(OBJ_FOLDER), $(notdir $(CFILES:.cpp=.o)))

CC			= c++

CFLAGS		= -g -Wall -Wextra -Werror -std=c++98

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(SANITIZER) -o $(SRC_FOLDER)$(NAME) $(OFILES)

$(OBJ_FOLDER)%.o: %.cpp $(DEPS)
	mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -f $(OFILES)
	find $(SRC_FOLDER) -name "*.o" -delete

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
