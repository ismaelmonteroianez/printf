# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/03 15:58:20 by ismonter          #+#    #+#              #
#    Updated: 2026/02/03 20:48:24 by ismonter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCE = \
	ft_printf.c\
	ft_printchar.c\
	ft_printnbr.c\
	ft_printposnbr.c\
	ft_printstr.c\
	ft_printminhex.c\
	ft_printmaxhex.c\
	ft_printpoint.c\
	
OBJS = $(SOURCE:.c=.o)

CFLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all