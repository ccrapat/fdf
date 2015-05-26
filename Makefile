# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccrapat <ccrapat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/19 18:45:36 by ccrapat           #+#    #+#              #
#    Updated: 2015/01/20 00:55:08 by ccrapat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
CC = gcc
CFLAGS = -I libft/includes -I includes -Wall -Werror -Wextra
LDFLAGS = libft/libft.a
MLXFLAGS = -I /usr/X11/include -L/usr/X11/lib -lX11 -lmlx -lXext
OBJ = $(SRC:.c=.o)
DIRSRC = srcs/
RM = rm -f
SRC =	$(DIRSRC)main.c

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	$(CC) $(LDFLAGS) $(MLXFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

cleanl:
	make fclean -C libft/

.PHONY: re fclean clean all cleanl
