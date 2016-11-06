# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 19:32:09 by aridolfi          #+#    #+#              #
#    Updated: 2016/11/05 19:50:45 by aridolfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ft_display_file.c

OBJT = ft_display_file.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	gcc $(OBJT) -o $(NAME)

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
