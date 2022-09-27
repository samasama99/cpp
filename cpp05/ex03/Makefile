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

TARGET 			=		Bur

CXX 				=		c++

CXXFLAGS 		= 	-Wall -Wextra -Werror -std=c++98 -Wshadow

SRC					=		main.cpp \
								Bureaucrat.cpp \
								Form.cpp \
								Intern.cpp \
								ShrubberyCreationForm.cpp \
								RobotomyRequestForm.cpp \
								PresidentialPardonForm.cpp

HEADER			=		Bureaucrat.hpp \
								Form.hpp \
								Intern.hpp \
								ShrubberyCreationForm.hpp \
								RobotomyRequestForm.hpp \
								ShrubberyCreationForm.hpp

OBJ 				=		$(SRC:%.cpp=%.o)

WOBJ 				=		$(WSRC:%.cpp=%.o)

#	RULES	:

all				: $(TARGET) 

$(TARGET)	:	$(HEADER) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(TARGET)

re	: fclean all
