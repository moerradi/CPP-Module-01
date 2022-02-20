NAME=Brain
FLAGS=-Wall -Wextra -Werror
SRCS=main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	g++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re