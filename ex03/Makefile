NAME=Violence
FLAGS=-Wall -Wextra -Werror
SRCS=main.cpp weapon.cpp HumanA.cpp HumanB.cpp

all: $(NAME)

$(NAME): $(SRCS)
	g++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re