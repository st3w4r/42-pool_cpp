# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/23 10:51:56 by ybarbier          #+#    #+#              #
#    Updated: 2015/06/23 10:52:11 by ybarbier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#____________CONFIG____________#

NAME = Identify
PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./

INCLUDES =

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror $(INCLUDES)

LIBS =

#____________FILES____________#

SRC =	main.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp


OBJ = $(addprefix $(PATH_SRC), $(SRC:.cpp=.o))

#____________RULES____________#

.PHONY: clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) $(LIBS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
