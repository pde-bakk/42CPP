# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Peer <pde-bakk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 17:28:30 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/10/02 13:20:09 by peerdb        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = mutated-abomination.out

ifeq ($(shell uname), Linux)
 CXX = g++
else
 CXX = clang++
endif
ifdef REALG
 CXX = ~/.brew/bin/g++-10
endif
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp mutantstack.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)
	
clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

