# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 17:58:25 by chajjar           #+#    #+#              #
#    Updated: 2023/01/17 12:11:19 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Scalaire

SRCS = main.cpp Scalaire.cpp

OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean: 
		rm -f $(OBJS)
fclean: clean 
		rm -f $(NAME)
re: clean all
.PHONY: all clean fclean re