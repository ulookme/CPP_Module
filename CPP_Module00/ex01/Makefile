# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 18:16:25 by chajjar           #+#    #+#              #
#    Updated: 2023/01/08 19:36:54 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRCS = phonebook.cpp main.cpp contact.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) 
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)
clean : 
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re