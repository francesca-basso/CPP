# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stribuzi <stribuzi@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 17:25:15 by stribuzi          #+#    #+#              #
#    Updated: 2021/08/18 17:29:30 by stribuzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	phonebook.cpp

CC		= clang++

OBJS	= $(SRCS:.cpp=.o)

RM				= rm -f

NAME			= crappy_phonebook

all:			$(NAME)

$(NAME):		 $(OBJS)
					$(CC) $(OBJS) -o $(NAME)


clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME)

re:				clean all

.PHONY:			all clean fclean re