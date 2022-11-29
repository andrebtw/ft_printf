#### SYSTEM ####
.PHONY: ${NAME} all clean fclean re
CC = gcc
AR = ar rc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

#### FILES ####
SRCS = ft_printf.c ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_print_char.c ft_print_string.c ft_strlen.c \
		ft_print_pointer_hex.c ft_putbase_fd.c ft_null_found.c ft_print_pourcentage.c
OBJS = ${SRCS:.c=.o}
HEADER = ft_printf.h

NAME = libftprintf.a

#### RULES ####
.c.o:		{HEADER} Makefile ${HEADER}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} Makefile ${HEADER}
			${AR} ${NAME} ${OBJS}

all:		${NAME} Makefile ${HEADER}

clean:
			${RM} ${OBJS} ${OBJS_BONUS} 

fclean:
			${RM} ${OBJS} ${OBJS_BONUS} ${NAME}

re:	fclean ${NAME}
