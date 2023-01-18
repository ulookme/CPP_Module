# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 18:05:14 by chajjar           #+#    #+#              #
#    Updated: 2023/01/18 11:57:07 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ITER

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		rm -f $(NAME)
fclean: clean 
		rm -f $(OBJ)
re: clean all
.PHONY: all clean fclean re 