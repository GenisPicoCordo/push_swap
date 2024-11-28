NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = src/main.c src/utils.c
INC = includes/

all: $(NAME)

$(NAME):
    $(CC) $(CFLAGS) $(SRC) -I $(INC) -o $(NAME)

clean:
    rm -f $(NAME)
