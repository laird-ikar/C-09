# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 10:51:22 by bguyot            #+#    #+#              #
#    Updated: 2021/11/25 15:17:05 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./src/ft_putchar.c ./src/ft_putstr.c ./src/ft_strcmp.c ./src/ft_strlen.c ./src/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: libft.a

libft.a: 
	gcc -Wall -Wextra -Werror -c $(SRC) -I ./includes
	ar rcs libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
