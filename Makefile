# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 13:44:14 by martjim2          #+#    #+#              #
#    Updated: 2023/09/18 12:08:00 by martjim2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c
OBJETS = $(FILES:.c=.o)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS) : $(FILES)
	gcc $(FLAGS) -c $(FILES)

all : $(NAME)

fclean:
	rm -f *.o $(NAME)