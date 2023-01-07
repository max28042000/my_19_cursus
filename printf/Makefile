NAME = libftprintf.a
NAMEPROG = a.out

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_printf \
			ft_p \
			ft_c \
			ft_d \
			ft_putchar \
			ft_xx \
			ft_putnbr \
			ft_putstr \
			ft_reco_type \
			ft_s \
			ft_u \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -I./ -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 


re: clean all