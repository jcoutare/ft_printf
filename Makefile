#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 11:07:45 by jcoutare          #+#    #+#              #
#    Updated: 2017/08/16 11:26:13 by jcoutare         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_printf

CC = GCC

CFLAGS = -Wall -Wextra

INCLUDES += -I libft.h \

SRC = srcs/lol.c

OBJ = $(SRC:.c=.o)

LIB = libft

LIBPATH = libft/libft.a	

all : $(NAME)

$(NAME): $(OBJ)
			@make -C $(LIB)
			@gcc $(CFLAGS) -o $(NAME) $(OBJ) $(LIBPATH)

clean:
		@make fclean -C $(LIB)
		@rm -f $(OBJ)
fclean: clean
		@rm -f $(NAME)
re: fclean all