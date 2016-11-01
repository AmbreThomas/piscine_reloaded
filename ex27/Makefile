# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athomas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 10:43:49 by athomas           #+#    #+#              #
#    Updated: 2016/07/21 10:14:33 by athomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC = main.c affichage.c
OBJ = main.o affichage.o
HEADERS = inclusions.h
NAME = ft_display_file

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) -o $(NAME) $(SRC) $(FLAGS)

*.o : $(SRC) $(HEADERS)
	@$(CC) -c $(SRC) $(FLAGS)

clean :
	@/bin/rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
