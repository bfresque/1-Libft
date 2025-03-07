# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 10:34:58 by bfresque          #+#    #+#              #
#    Updated: 2022/11/25 11:17:03 by bfresque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    =     ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_split.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strtrim.c \
			ft_itoa.c

OBJS    =    ${SRCS:.c=.o}

BONUS_SRCS    =    ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c 

BONUS_OBJS = ${BONUS_SRCS:.c=.o}

NAME	= libft.a

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:        ${NAME}

$(NAME):    ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	rm -f ${OBJS} ${BONUS_OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

rebonus:	fclean bonus

bonus:	${OBJS} ${BONUS_OBJS}
	ar rc ${NAME} ${OBJS} ${BONUS_OBJS}
	ranlib ${NAME}
	
.PHONY:	all clean fclean re bonus rebonus
