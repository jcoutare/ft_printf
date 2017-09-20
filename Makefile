#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 11:07:45 by jcoutare          #+#    #+#              #
#    Updated: 2017/09/20 14:24:55 by jcoutare         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC_PATH = src

SRC_NAME = 	fct_conv.c \
			fct_flags.c \
			fct_modif.c \
			itoa_base.c \
			larg_prec.c \
			make_flags.c \
			run.c \
			run_tools.c \
			tab.c

SRC_LIB_PATH = libft

SRC_LIB_NAME =	ft_putstr.c \
			ft_strcmp.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strstr.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_putnbr.c \
			ft_putchar.c \
			ft_memalloc.c \
			ft_isalnum.c \
			ft_bzero.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isalnum.c \
			ft_memmove.c \
			ft_strlcat.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strjoin.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_memdel.c \
			ft_strnew.c	\
			ft_strdel.c	\
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_itoa.c	\
			ft_lstmap.c \
			ft_lstiter.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstnew.c \
			ft_print_words_tables.c \
			ft_strsplit.c \
			ft_list_clear.c \
			ft_list_size.c \
			ft_list_at.c \
			ft_list_push_back.c \
			ft_list_reverse.c

OBJ_PATH = obj

OBJ_LIB_PATH = obj_lib

CPPFLAGS = -Iinclude

LDFLAGS = -Llibft

LDLIBS = -lft

NAME = libftprintf.a

CC = clang

CFLAGS = -Werror -Wall -Wextra

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ_LIB_NAME = $(SRC_LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

SRC_LIB = $(addprefix $(SRC_LIB_PATH)/,$(SRC_LIB_NAME))
OBJ_LIB = $(addprefix $(OBJ_LIB_PATH)/,$(OBJ_LIB_NAME))


all : $(NAME)

$(NAME): $(OBJ) $(OBJ_LIB)
		ar rcs  $@ $^

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
		@mkdir $(OBJ_PATH) 2> /dev/null || true
		$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

$(OBJ_LIB_PATH)/%.o: $(SRC_LIB_PATH)/%.c
		@mkdir $(OBJ_LIB_PATH) 2> /dev/null || true
		$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<
clean:
		rm -fv $(OBJ)
		@rmdir $(OBJ_PATH) 2> /dev/null || true
		rm -fv $(OBJ_LIB)
		@rmdir $(OBJ_LIB_PATH) 2> /dev/null || true

fclean: clean
		rm -fv $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re