NAME	=	tp2.exe

CC	=	gcc

RM	=	rm -f

SRCS	=	main.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-I ./TP2_EXE/
CFLAGS	+=	-Wall -Wextra -g3

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re