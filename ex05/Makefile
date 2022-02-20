NAME=Karen_2.0
FLAGS=-Wall -Wextra -Werror
SRCS= main.cpp Karen.cpp

all: $(NAME)

$(NAME): $(SRCS)
	g++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re