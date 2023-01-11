# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 16:17:17 by chajjar           #+#    #+#              #
#    Updated: 2023/01/10 17:29:20 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace

SRC = main.cpp Replace.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean : 
		rm -f $(OBJ)
fclean : clean 
		rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re
