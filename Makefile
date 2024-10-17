# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 19:10:34 by ptrapero          #+#    #+#              #
#    Updated: 2024/10/17 22:03:33 by ptrapero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

CC = cc
CFLAGS = -Werror -Wall -Wextra

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

LIBFT_ROUTE = libft
LIBFT = $(LIBFT_ROUTE)/libft.a

RM = rm -f

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_ROUTE)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	make -C $(LIBFT_ROUTE) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_ROUTE) fclean

re: fclean all
