#	VARIABLES
NAME = libft.a

SOURCES = ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c

OBJC = ${SRCS:%.c=%.o}

FLAGS = -Wall -Wextra -Werror
# 	COLORS
RED = \e[00;32m

FX = \e[00m

PURPLE =\e[00;35m

GREEN = \e[00;31m


all:	${NAME}

${NAME}:	${OBJS}
	
${OBJS}:
	${CC} ${CFLGS} -o $@ -c $<

out:	${OBJS}

fclean:
	rm -rf *.o *.a
clean:
	rm -rf *.o

re:


