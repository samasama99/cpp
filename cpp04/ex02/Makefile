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

#	VARS	:

TARGET 			=		Test

CXX 				=		c++

CXXFLAGS 		= 	-Wall -Wextra -Werror -std=c++98 -Wshadow

SRC					=		main.cpp \
							Animal.cpp \
							Dog.cpp \
							Cat.cpp \
							Brain.cpp \

HEADER			=		Animal.hpp \
						Dog.hpp \
						Cat.hpp \
						Brain.hpp

OBJ 				=		$(SRC:%.cpp=%.o)

#	RULES	:

all	: $(TARGET) 

$(TARGET)	:	$(HEADER) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

clean :
	@rm -f $(MAIN_OBJ)
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(TARGET)

re	: fclean all
