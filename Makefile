NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

INC = libft.h

SRC =	ft_strlen.c \
		ft_strncat.c \
		ft_putchar_fd.c \
		ft_strtrim.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_strmapi.c \
		ft_memcpy.c \
		ft_strjoin.c \
		ft_strdel.c \
		ft_strequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_strsub.c \
		ft_bzero.c \
		ft_strnequ.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_strlcat.c \
		ft_strcat.c \
		ft_strncpy.c \
		ft_putchar.c \
		ft_strcmp.c \
		ft_atoi.c \
		ft_memdel.c \
		ft_isascii.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_memchr.c \
		ft_itoa.c \
		ft_putendl_fd.c \
		ft_putendl.c \
		ft_toupper.c \
		ft_isalnum.c \
		ft_memccpy.c \
		ft_putstr.c \
		ft_memalloc.c \
		ft_strncmp.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strsplit.c \
		ft_striter.c \
		ft_strstr.c \
		ft_strclr.c \
		ft_strmap.c \
		ft_isprint.c \
		ft_striteri.c \
		ft_putnbr.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_lstnew \
		ft_lstdelone \
		ft_lstdel \
		ft_lstadd \
		ft_lstiter \
		ft_lstmap

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I libft.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

