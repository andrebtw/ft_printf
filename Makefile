#### SYSTEM ####
.PHONY: ${NAME} all clean fclean re
CC = gcc
AR = ar rc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

#### FILES ####
SRCS = ft_printf.c ft_check_errors.c ft_putnbr_fd.c ft_putstr_fd.c
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
