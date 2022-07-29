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

TARGET 			=		Game

CXX 				=		c++

CXXFLAGS 		= 	-Wall -Wextra -Werror -std=c++98 -Wshadow

SRC					=		main.cpp \
							Cure.cpp \
							Ice.cpp \
							Character.cpp \
							AMateria.cpp \
							MateriaSource.cpp

HEADER			=		Cure.hpp \
						Ice.hpp \
						Character.hpp \
						ICharacter.hpp \
						IMateriaSource.hpp \
						AMateria.hpp \
						MateriaSource.cpp
						

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
