NAME = libftprintf.a

CC = cc

CFALGS = -Wall -Wextra -Werror

AR = ar r

RM = rm -rf

SRCS = ft_printf.c ft_putnbr.c base_16.c print_scid.c print_u.c print_pointer.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
