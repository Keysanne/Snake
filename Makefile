NAME= Snek
COMP= c++
FLAGS= -lcrypt -lncurses -lpthread
INCLUDESDIR = includes/
SRCS= $(shell find srcs/ -name '*.cpp')

all: $(NAME)

$(NAME): $(SRCS)
		$(COMP) -o $(NAME) $(FLAGS) -I $(INCLUDESDIR) $(SRCS)

clean:
		rm -f ${NAME}

re:clean all	

.PHONY: all clean
