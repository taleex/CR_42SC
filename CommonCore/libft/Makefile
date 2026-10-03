NAME = libft.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c  ft_isdigit.c ft_isalpha.c  ft_isprint.c ft_isascii.c  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
BONUS =

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)