# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 10:40:49 by chajjar           #+#    #+#              #
#    Updated: 2023/01/14 18:05:13 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = JENEVEUXPAS

SRCS = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
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