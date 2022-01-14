# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 10:39:17 by fbasso            #+#    #+#              #
#    Updated: 2021/10/08 11:44:40 by stribuzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			Replace.cpp

CPP		= clang++

CFLAGS = -Wall -Wextra -Werror

OBJS	= $(SRCS:.cpp=.o)

RM				= rm -f

NAME			= replace

all:			$(NAME)

$(NAME):		 $(OBJS)
					$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)


clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
					$(RM) $(NAME) *.replace

re:				clean all

.PHONY:			all clean fclean re