# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Peer <pde-bakk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/08/15 20:20:17 by pde-bakk      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = span.out

ifeq ($(shell uname), Linux)
 CXX = g++
else
 CXX = clang++
endif
ifdef REALG
 CXX = ~/.brew/bin/g++-10
endif

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp span.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)
	
clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

