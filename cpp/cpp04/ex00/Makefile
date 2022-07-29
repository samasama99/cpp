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

WTARGET 			=		WrongTest

CXX 				=		c++

CXXFLAGS 		= 	-Wall -Wextra -Werror -std=c++98 -Wshadow

SRC					=		main.cpp \
							Animal.cpp \
							Dog.cpp \
							Cat.cpp \

HEADER			=		Animal.hpp \
						Dog.hpp \
						Cat.hpp

WSRC					=		wrong_main.cpp \
							WrongAnimal.cpp \
							WrongCat.cpp \

WHEADER			=		WrongAnimal.hpp \
						WrongCat.hpp

OBJ 				=		$(SRC:%.cpp=%.o)

WOBJ 				=		$(WSRC:%.cpp=%.o)

#	RULES	:

all	: $(TARGET) 

$(TARGET)	:	$(HEADER) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

wrong : $(WTARGET)

$(WTARGET) : $(WHEADER) $(WSRC) $(WOBJ)
	$(CXX) $(CXXFLAGS) $(WOBJ) -o $(WTARGET)

clean :
	@rm -f $(OBJ)
	@rm -f $(WOBJ)

fclean : clean
	@rm -f $(TARGET) $(WTARGET)

re	: fclean all
