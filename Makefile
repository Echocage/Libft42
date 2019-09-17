NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

SRC = ft_atoi.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_memset.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_isdigit

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

