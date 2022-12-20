# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charleshajjar <charleshajjar@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 21:22:38 by charleshajj       #+#    #+#              #
#    Updated: 2022/12/20 15:40:37 by charleshajj      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name: Phonebook

SRCS: Phonebook.cpp Contact.cpp main.cpp
OBJS: ${SRCS:.cpp:.o}

CC: c++
FLAGS: -Wall -Werror -Wextra -std=c++98

all: $(NAME)

.cpp.o: 
		$(CC) $(FLAGS) -c $< -o $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:  @$(RM) @$(OBJS)

fclean: clean
		@$(RM) @$(NAME)

re : fclean all
.PHONY: all clean fclean re

