# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnxele <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/04 14:35:02 by vnxele            #+#    #+#              #
#    Updated: 2018/08/28 07:43:23 by vnxele           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

NAME2 = push_swap

SRC = checker.c operations.c operations2.c execute.c extra_ft.c

SRC2 = push_swap.c operations.c operations2.c execute.c extra_ft.c

ifdef ALLOCWRAP
	LDFLAGS += $(HOME)/lib/alloc_wrap.c -ldl
endif

OBJ = $(addprefix $(OBJDIR),$(SRC:.c=.o))
OBJ2 = $(addprefix $(OBJDIR),$(SRC2:.c=.o))

CC = gcc
CFLAGS  = -Wall -Wextra -Werror -O3 -funroll-loops -march=native

LIBFT   = ./libft/libft.a
LIBINC  = -I./libft
LIBLINK = -L./libft -lft

SRCDIR  = ./src/
INCDIR  = ./includes/
OBJDIR  = ./obj/

all: obj libft $(NAME) $(NAME2)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $(LIBINC) -I $(INCDIR) -o $@ -c $<

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) -o $(NAME) $(OBJ) $(LIBLINK)

$(NAME2): $(OBJ2)
	$(CC) $(LDFLAGS) -o $(NAME2) $(OBJ2) $(LIBLINK)

clean:
	rm -rf $(OBJDIR)
	make -C ./libft clean

fclean: clean
	rm -rf $(NAME1)
	rm -rf $(NAME2)
	make -C ./libft fclean

re: fclean all
