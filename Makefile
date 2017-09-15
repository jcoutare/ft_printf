#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 11:07:45 by jcoutare          #+#    #+#              #
#    Updated: 2017/09/14 14:52:38 by jcoutare         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_printf

CC = GCC

CFLAGS = -Wall -Wextra

INCLUDES += -I libft.h \

SRC = srcs/fct_conv.c \
	srcs/fct_flags.c \
	srcs/itoa_base.c \
	srcs/larg_prec.c \
	srcs/run.c \
	srcs/run_tools.c \
	srcs/tab.c

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