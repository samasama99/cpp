# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 10:46:58 by orahmoun          #+#    #+#              #
#    Updated: 2022/03/22 10:47:54 by orahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		VARS	:

CFLAGS 	= 	-Wall -Wextra -Werror -std=c++98

CC	 		=		c++

SRC 		=		megaphone.cpp

OBJ 		=		megaphone.o

#		RULES	:

all	:	$(SRC) $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o megaphone

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJ)
	
fclean : clean
	rm -f megaphone

re : fclean all

