# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 16:23:04 by chajjar           #+#    #+#              #
#    Updated: 2023/01/17 17:13:22 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identification

SRCS = main.cpp Base.cpp

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