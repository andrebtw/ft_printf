#### SYSTEM ####
.PHONY: $(NAME) all clean fclean re
CC = gcc
AR = ar rc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

#### FILES ####
SRCS = ft_printf.c             \
		ft_putnbr_fd.c         \
		ft_putstr_fd.c         \
		ft_putchar_fd.c        \
		ft_print_char.c        \
		ft_print_string.c      \
		ft_strlen.c            \
		ft_print_pointer_hex.c \
		ft_putbase_fd.c        \
		ft_null_found.c        \
		ft_print_pourcentage.c \
		ft_sizeof_nb_base.c    \
		ft_print_decimals.c    \
		ft_print_hex.c

OBJS = $(SRCS:.c=.o)
HEADER = ft_printf.h

NAME = libftprintf.a

#### RULES ####
$(NAME):	$(OBJS) $(HEADER)
			$(AR) $(NAME) $(OBJS)

%.o: %.c	$(HEADER) Makefile
			$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:
			$(RM) $(OBJS) $(NAME)

re:	fclean $(NAME)
