# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 19:01:22 by chajjar           #+#    #+#              #
#    Updated: 2023/01/10 15:42:40 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence

SRCS = Weapon.cpp main.cpp HumanB.cpp HumanA.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)
re: fclean all 

.PHONY: all clean fclean re
