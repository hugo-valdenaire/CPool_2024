NAME	= cat

CC	= gcc

RM	= rm -f

SRCS	= ./cat.c \
		../my_putchar.c \
		../my_putstr.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
