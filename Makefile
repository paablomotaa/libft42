NAME = libft.a
CC = clang

CFLAGS = -g -Wall -Wextra -Werror

SOURCES = \

OBJ = $(SRC:.c=.o)

HEADERS = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all