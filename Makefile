SRCS	 = ft_printf.c

OBJS	 = ${SRCS:.c=.o}

NAME	= libftprintf.a

CC      = cc

RM		= rm -f

CFLAGS  = -Wall -Wextra -Werror -c

%.o:		%.c
			${CC} ${CFLAGS} -c $?

${NAME}:	${OBJS}
			ar rcsv $@ $?

all:    	${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:         fclean all

.PHONY: re clean fclean
