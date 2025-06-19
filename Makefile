NAME = philo

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3 -lpthread

HIDDER = inc/philo.h

DIR_SOURCE_FREE = src/free/ft_free_double.c \
				  src/free/ft_free_fork.c \
				  src/free/ft_free_stract.c \
				  src/free/ft_free_single.c \
				  src/free/ft_free.c

DIR_SOURCE_INITILAIZE = src/initialize/initialize_fork.c \
						src/initialize/initialize_philo.c \
						src/initialize/initialize_program.c \
						src/initialize/initialize.c 

DIR_SOURCE_LIBFT = src/libft/ft_atoi.c 
				
DIR_SOURCE_OTHER = src/other/dream.c \
				   src/other/eat.c \
				   src/other/ft_check_argument.c \
				   src/other/ft_is_digit.c \
				   src/other/ft_print_message.c \
				   src/other/ft_usleep.c \
				   src/other/get_current_time.c \
				   src/other/main.c \
				   src/other/think.c \

SOURCE = $(DIR_SOURCE_FREE) \
		 $(DIR_SOURCE_INITILAIZE) \
		 $(DIR_SOURCE_LIBFT) \
		 $(DIR_SOURCE_OTHER) \

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