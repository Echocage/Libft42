NAME = libft.a

CC = gcc

CFLAGS = -g -Wall -Werror -Wextra -I. -c

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
	ft_isdigit.c \
	ft_isalpha.c \
	ft_memcpy.c \
	ft_isalnum.c \
	ft_memccpy.c \
	ft_isascii.c \
	ft_itoa.c \
	ft_strcpy.c \
	ft_strdup.c \
	ft_memcmp.c \
	ft_strstr.c \
	ft_strncat.c \
	ft_strcat.c \
	ft_bzero.c	\
	ft_strsub.c \
	ft_isprint.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_strchr.c \
	ft_memchr.c \
	ft_strsplit.c\
	ft_strnew.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_strmap.c
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

