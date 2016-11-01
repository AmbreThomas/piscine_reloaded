# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athomas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 08:53:49 by athomas           #+#    #+#              #
#    Updated: 2016/07/18 14:51:14 by athomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werrori
SRC_PATH = srcs
SRC_NAMES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAMES))
OBJ = $(SRC:.c=.o)
HEADERS_PATH = includes
HEADERS = libft.h
NAME = libft.a


.PHONY: all, clean, fclean, re

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ) : $(SRC) $(HEADERS)
	$(CC) -c $(SRC) $(FLAGS) -I $(HEADERS_PATH)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
