# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 17:57:03 by aridolfi          #+#    #+#              #
#    Updated: 2016/11/05 18:06:21 by aridolfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
		srcs/ft_swap.c

OBJT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I includes
	ar rc $(NAME) $(OBJT)
	ranlib $(NAME)

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
