# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbasso <fbasso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 21:12:23 by stribuzi          #+#    #+#              #
#    Updated: 2021/10/08 10:33:58 by fbasso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

CPP		= clang++
CFLAGS  = -Wall -Wextra -Werror

OBJS	= $(SRCS:.cpp=.o)

RM				= rm -f

NAME			= ptr

all:			$(NAME)

$(NAME):		 $(OBJS)
					$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)


clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
					$(RM) $(NAME)

re:				clean all

.PHONY:			all clean fclean re