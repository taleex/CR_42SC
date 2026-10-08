NAME = libft.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c  ft_isdigit.c ft_isalpha.c  ft_isprint.c ft_isascii.c  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
BONUS =

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

main:
	$(CC) $(CFLAGS) main.c -L. -lft -o test

mainclean:
	$(RM) test
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)