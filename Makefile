NAME= login_screen
COMP= c++
FLAGS= -Wall -Wextra -Werror
INCLUDESDIR = includes/
SRCS= $(shell find srcs/ -name '*.cpp')

all: $(NAME)

$(NAME): $(SRCS)
		$(COMP) -o $(NAME) $(FLAGS) -I $(INCLUDESDIR) $(SRCS)

clean:
		rm -f ${NAME}

re:clean all	

.PHONY: all clean