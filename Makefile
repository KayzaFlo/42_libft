# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 13:25:46 by fgeslin           #+#    #+#              #
#    Updated: 2022/10/18 13:42:50 by fgeslin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = ./

SRC = $(wildcard $(SRCDIR)/*.c)

OBJ = $(patsubst %,$(SRCDIR)/%,$(SRC:.c=.o))

INCDIR = ./

INC = $(wildcard $(SRCDIR)/*.h)

CFLAGS += -Wall -Wextra -Werror -I$(INC)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
