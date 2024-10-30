NAME = mnishell

SRC	= main.c src.c

HEADERS	= ./include/minihell.h

OBJS	= $(SRC:.c=.o)

CC	= cc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror -I./include

all:	$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
		$(CC) $(CFLAGS) $(PFLAGS) -o $(NAME) $(OBJS)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
