NAME = Zombie

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(INC)
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean