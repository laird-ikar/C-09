# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 10:51:22 by bguyot            #+#    #+#              #
#    Updated: 2021/11/28 18:21:25 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJ_DEL = ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o ./srcs/ft_strlen.o ./srcs/ft_swap.o
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: libft.a

libft.a:
	gcc -Wall -Wextra -Werror -I ./includes -c ${SRC}
	mv $(OBJ) ./srcs/
	ar rcs libft.a ${OBJ_DEL}

clean:
	rm -f $(OBJ_DEL)

fclean: clean
	rm -f libft.a

re: fclean all
