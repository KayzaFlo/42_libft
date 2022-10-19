# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 13:25:46 by fgeslin           #+#    #+#              #
#    Updated: 2022/10/19 16:13:31 by fgeslin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCDIR := .

SRC = $(filter-out $(wildcard $(SRCDIR)/*_bonus.c), $(wildcard $(SRCDIR)/*.c))
SRC_BONUS = $(wildcard $(SRCDIR)/*.c)

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

INCDIR := .

INC = $(wildcard $(INCDIR)/*.h)

CFLAGS += -Wall -Wextra -Werror -I$(INC)

all: $(NAME)

bonus: $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ_BONUS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
