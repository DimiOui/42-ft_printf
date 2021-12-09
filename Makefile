SRCS	 = ft_printf.c

OBJS	 = ${SRCS:.c=.o}

NAME	= libftprintf.a

CC      = cc

RM		= rm -f

CFLAGS  = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:    	${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:         fclean all
