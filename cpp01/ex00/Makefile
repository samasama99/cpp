# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 10:46:58 by orahmoun          #+#    #+#              #
#    Updated: 2022/03/31 18:01:56 by orahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		VARS	:

TARGET 			=		Zombie

CXX 				=		c++

CXXFLAGS 		= 	-Wall -Wextra -Werror -std=c++98

SRC					=		main.cpp \
								Zombie.cpp \
								newZombie.cpp \
								randomChump.cpp \

HEADER			=		Zombie.hpp

OBJ 				=		$(SRC:%.cpp=%.o)

	# RULES	:

all	: $(TARGET) 

$(TARGET)	:	$(HEADER) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

clean :
	@rm -f $(MAIN_OBJ)
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(TARGET)

re	: fclean all
