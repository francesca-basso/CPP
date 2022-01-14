SRCS	=	main.cpp

CXX	 	= clang++

OBJS	= $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror

RM				= rm -f

NAME			= iter

all:			$(NAME)

$(NAME):		 $(OBJS)
					$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)


clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME)

re:				clean all

.PHONY:			all clean fclean re