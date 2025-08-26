CC = cc
CFLAGS = -Werror -Wextra -Wall
NAME = libft.a
INCLUDES = libft.h
OBJS = $(SRCS:.c=.o)
SRCS = ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isascii.c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $^

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
