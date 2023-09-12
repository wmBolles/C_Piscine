# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 15:30:34 by wmbolles          #+#    #+#              #
#    Updated: 2023/09/12 15:30:38 by wmbolles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCDIR = srcs

HEADDIR = includes

SRC = $(SRCDIR)/helpers.c \
	  $(SRCDIR)/map.c \
	  $(SRCDIR)/main.c

OBJ = helpers.o \
	  map.o \
	  main.o

all : $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I$(HEADDIR) $(SRC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
