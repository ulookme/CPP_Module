# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 20:04:55 by chajjar           #+#    #+#              #
#    Updated: 2023/01/14 20:13:35 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BUREAUCRAT

SRCS = main.cpp Bureaucrat.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)
$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)

fclean: clean 
		rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re