# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 23:19:28 by chajjar           #+#    #+#              #
#    Updated: 2023/01/13 19:03:44 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serena

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)
clean:
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)
re : fclean all

.PHONY : all clean  fclean re 