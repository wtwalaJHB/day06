#!/bin/sh
gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c  && ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o && rm *.o

