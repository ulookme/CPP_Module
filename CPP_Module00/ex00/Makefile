# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charleshajjar <charleshajjar@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 18:06:10 by charleshajj       #+#    #+#              #
#    Updated: 2022/12/19 18:37:20 by charleshajj      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: megaphone

SRC: megaphone.cpp
OBJ: ${SRC:.cpp=.o}

CC: c++

FLAGS: -Wall -Wextra -Werror -std = c++98
all: $(NAME)

.cpp.o:
		$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)
$(NAME): $(OBJ)
	$(CC) $(OBJ) *(FLAGS) -o $(NAME)

clean: 
	@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
