# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 23:44:37 by wmbolles          #+#    #+#              #
#    Updated: 2023/09/10 23:44:50 by wmbolles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

IDIR = includes
_INC = bsq.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))

SDIR = srcs
_SRC = *.c
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
OPTS = -o $(NAME) -I$(IDIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
		@gcc $(FLAGS) $(OPTS) $(SRC)

$(OBJ): $(SRC)
		@gcc -c -I$(IDIR) $(SRC)

clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)

re: clean all
