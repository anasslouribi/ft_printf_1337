# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 13:02:53 by alouribi          #+#    #+#              #
#    Updated: 2024/01/04 13:37:14 by alouribi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

FLAGS = -Wall -Wextra -Werror

SRCF = ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_putunsign.c

OBJ = $(SRCF:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $@ $^

%.o: %.c ft_printf.h
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re