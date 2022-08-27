NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SOURCES = ./is/

OBJECTS = $(SRCS:.c=.o)


all: $(NAME)

.c: 
	gcc $(FLAGS) -c $(<:.c=.o)

$(NAME): $(OBJECTSS)
	ar -rcs $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
