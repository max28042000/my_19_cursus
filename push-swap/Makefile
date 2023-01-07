NAME = push_swap

NAMEPROG = push_swap

SRCS = initiate_pile.c \
		chose_algo.c \
		input_checker.c \
		main.c \
		push_swap_actions.c \
		push_swap_algo.c \
		malloc.c \
		utils.c

OBJS = ${SRCS:.c=.o}

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

COMPILE = gcc $(CFLAGS) -o $(NAME)

$(NAME): $(OBJS)
		$(COMPILE) $(OBJS)

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
