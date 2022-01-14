SRCS	=	megaphone.cpp

CPP		= clang++

CFLAGS 	= -Wall -Wextra -Werror

OBJS	= $(SRCS:.cpp=.o)

RM				= rm -f

NAME			= megaphone

all:			$(NAME)

$(NAME):		 $(OBJS)
					$(CPP) $(CFLAGS) $(OBJS)  -o $(NAME)


clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME)

re:				clean all

.PHONY:			all clean fclean re