# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 13:25:46 by fgeslin           #+#    #+#              #
#    Updated: 2022/10/27 12:57:25 by fgeslin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

SRCDIR		:= .

SRC			= $(filter-out $(wildcard $(SRCDIR)/*_bonus.c), $(wildcard $(SRCDIR)/*.c))
SRC_BONUS	= $(filter $(wildcard $(SRCDIR)/*_bonus.c), $(wildcard $(SRCDIR)/*.c))

OBJ			= $(SRC:.c=.o)
OBJ_BONUS	= $(SRC_BONUS:.c=.o)

INCDIR		:= .

INC			= $(wildcard $(INCDIR)/*.h)

CC			:= gcc

RM			:= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I $(INC) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	${RM} $(OBJ) $(OBJ_BONUS)

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY:		all clean fclean re

