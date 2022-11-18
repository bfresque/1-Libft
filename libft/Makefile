# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 18:14:20 by bfresque          #+#    #+#              #
#    Updated: 2022/11/16 18:16:29 by bfresque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

AR = ar rcs 

RM = rm -f

%.o:%.c 
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all : $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean 
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re 