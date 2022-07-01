NAME = ex03
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean