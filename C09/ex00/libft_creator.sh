# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 22:35:58 by zelkalai          #+#    #+#              #
#    Updated: 2023/09/07 22:37:51 by zelkalai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -c ft_putchar.c -o ft_putchar.o
gcc -c ft_swap.c -o ft_swap.o
gcc -c ft_putstr.c -o ft_putstr.o
gcc -c ft_strlen.c -o ft_strlen.o
gcc -c ft_strcmp.c -o ft_strcmp.o

ar -rc libft.a  ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
