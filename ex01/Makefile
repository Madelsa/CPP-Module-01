# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/18 12:38:31 by mabdelsa          #+#    #+#              #
#    Updated: 2024/08/18 14:06:25 by mabdelsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	./main.cpp ./Zombie.cpp ./zombieHorde.cpp \

NAME = ZombieHorde
RM = rm -f
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
	
%.o: %.c
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re