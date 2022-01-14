# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 10:07:59 by fbasso            #+#    #+#              #
#    Updated: 2021/10/22 10:07:59 by fbasso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

CXX		= clang++

CXXFLAGS  = -Wall -Wextra -Werror -Wshadow  -Wno-shadow

OBJS	= $(SRCS:.cpp=.o)

RM				= rm -f

NAME			= diamondtrap

all:			$(NAME)

$(NAME):		 $(OBJS)
					$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)


clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME)

re:				clean all

.PHONY:			all clean fclean re