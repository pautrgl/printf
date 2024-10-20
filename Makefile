# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 19:10:34 by ptrapero          #+#    #+#              #
#    Updated: 2024/10/20 21:12:20 by ptrapero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Werror -Wall -Wextra

SRC = ft_printf.c ft_printothers.c libft/ft_strlen.c libft/ft_putchar_fd.c \
	libft/ft_putstr_fd.c libft/ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h libft/libft.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
