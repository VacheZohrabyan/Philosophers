NAME = philo

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3 -lpthread

HIDDER = inc/philo.h

SOURCE = src/init.c \
		 src/main.c \
		 src/monitor.c \
		 src/route_action.c \
		 src/threads.c \
		 src/utils.c 

COBJS = $(SOURCE:.c=.o)

all: $(NAME)

%.o: %.c $(HIDDER)
	$(CC) $(CFLAGS) -c  $< -o $@

$(NAME): $(COBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(COBJS)

clean:
	rm -rf $(COBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean