NAME = libft.a
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

LIB_PATH = ./
SRCS = *.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS):
	gcc $(FLAGS) -I $(LIB_PATH) -c $(SRCS)


clean:
	$(REMOVE) *.o

fclean: clean
		$(REMOVE) $(NAME)

re: fclean all

.PHONY: re fclean clean all
