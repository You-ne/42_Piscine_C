# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yotillar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/14 19:29:55 by yotillar          #+#    #+#              #
#    Updated: 2019/09/17 03:48:07 by yotillar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c cuts_to_the_tab.c ft_split.c parser.c utilities.c
OBJS	= main.o cuts_to_the_tab.o ft_split.o parser.o utilities.o
NAME	= rush-02
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

#${OBJS}: ${SRCS}
#	${CC} ${FLAGS} -c ${SRCS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
