CC := c++
FLAGS := -Wall -Werror -Wextra -fsanitize=address -fsanitize=leak -std=c++98

NAME := megaphone
SRCS := megaphone.cpp
OBJS := $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
