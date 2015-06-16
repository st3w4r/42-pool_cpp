# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/15 10:35:59 by ybarbier          #+#    #+#              #
#    Updated: 2015/06/16 23:34:51 by ybarbier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#____________CONFIG____________#

NAME = account
PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./

INCLUDES =

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror $(INCLUDES)

LIBS =

#____________FILES____________#

SRC =	tests.cpp \
		Account.class.cpp


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
