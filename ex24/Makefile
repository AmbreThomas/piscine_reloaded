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
FLAGS = -Wall -Wextra -Werror
SRC_PATH = srcs
SRC_NAMES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAMES))
HEADERS_PATH = includes
HEADERS_NAMES = libft.h
HEADERS = $(addprefix $(HEADERS_PATH)/, $(HEADERS_NAMES))
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
