NAME := phonebook

HDRS := Contact.hpp Phonebook.hpp
SRCS := Contact.cpp Phonebook.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)

CC := c++
FLAGS := -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HDRS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
