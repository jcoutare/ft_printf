#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 11:07:45 by jcoutare          #+#    #+#              #
#    Updated: 2017/08/17 11:13:34 by jcoutare         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_printf

CC = GCC

CFLAGS = -Wall -Wextra -Werror

INCLUDES += -I libft.h \

SRC = srcs/lol.c

OBJ = $(SRC:.c=.o)

LIB = libft

LIBPATH = libft/libft.a	

all : $(NAME)

$(NAME): $(OBJ)
			@echo "Lib'Compil"
			@make -C $(LIB)
			@echo "Printf'Compil"
			@gcc -o $(NAME) $(OBJ) $(LIBPATH)

clean:
		@echo "Lib'Del"
		@make fclean -C $(LIB)
		@echo "Printf'del"
		@rm -f $(OBJ)
fclean: clean
		@echo ".exe'del"
		@rm -f $(NAME)
re: fclean all