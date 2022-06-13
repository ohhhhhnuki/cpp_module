NAME=phonebook
SRCDIR=.
SOURCES = $(MAIN_SOURCE) $(SUB_SOURCES)
MAIN_SOURCE = main.cpp
SUB_SOURCES  =	PhoneBook.cpp Contact.cpp

OBJS  = $(SOURCES:.cpp=.o)
SUB_OBJS =$(SUB_SOURCES:.cpp=.o)

CC = clang++
CFLAGS		= -std=c++98 -pedantic -Wall -Wextra -Werror

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $*.cpp

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re:fclean all