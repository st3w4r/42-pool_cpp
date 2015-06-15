# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/15 10:35:59 by ybarbier          #+#    #+#              #
#    Updated: 2015/06/15 10:36:00 by ybarbier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#____________CONFIG____________#

NAME = phonebook
PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./

INCLUDES =

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror $(INCLUDES)

LIBS =

#____________FILES____________#

SRC =	main.cpp \
		Contact.class.cpp \
		PhoneBook.class.cpp


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
