# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpico-co <gpico-co@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 16:17:09 by hmunoz-g          #+#    #+#              #
#    Updated: 2024/12/03 14:56:41 by gpico-co         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror -g
LIBFTDIR = libft/
OBJ_DIR = obj/
SRC_DIR = srcs/

SRC_1 = src/push_swap.c \

SRC_2 =	src/pushers.c \
		src/is_sorted.c \
		src/reverse_rotators.c \
		src/rotators.c \
		src/sorting.c \
		src/swapers.c \
		src/utils_sorting.c \
		src/utils.c \
		src/validation.c
	
OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

INCLUDE = -L ./libft -lft

%.o: %.c Makefile includes/push_swap.h libft/libft.a
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re
