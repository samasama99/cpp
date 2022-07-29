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

TARGET 			=		convert

TEST 				=		tests

CXX 				=		c++

CXXFLAGS 		= 	-Wall -Wextra -Werror -std=c++98 -Wshadow

SRC					=		main.cpp \
								Cast.cpp \

TSRC					=		checks.cpp \
									Cast.cpp \

HEADER				= Cast.hpp

OBJ 				=		$(SRC:%.cpp=%.o)

TOBJ 				=		$(TSRC:%.cpp=%.o)

#	RULES	:

all				: $(TARGET) 

debug			: $(TEST) 

$(TARGET)	:	$(HEADER) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

$(TEST)	: $(TOBJ)
	$(CXX) $(CXXFLAGS) $(TOBJ) -o $(TEST)

clean :
	@rm -f $(OBJ)
	@rm -f $(TOBJ)

fclean : clean
	@rm -f $(TARGET)
	@rm -f $(TEST)

re	: fclean all
