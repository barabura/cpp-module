# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baura <baura@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 15:48:59 by baura             #+#    #+#              #
#    Updated: 2022/09/24 15:28:42 by baura            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	 = megaphone

SRCS 	 = megaphone.cpp

OBJS 	 = $(SRCS:%.c=%.o)

FLAGS 	 = -Wall -Wextra  -std=c++98
#-Werror
CC 		 = c++
RM 		 = rm -rf

.PHONY 	: all clean fclean re

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
		
%.o 	: 	%.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean 	: 
			$(RM) $(OBJS)

fclean : 	clean
			$(RM) $(NAME)

re: fclean all
