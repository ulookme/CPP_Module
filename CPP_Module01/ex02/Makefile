# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 17:44:08 by chajjar           #+#    #+#              #
#    Updated: 2023/01/09 18:08:51 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BONJOUR
SRCS = main.cpp
OBJ = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re