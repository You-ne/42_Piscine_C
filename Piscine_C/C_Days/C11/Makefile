# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yotillar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/17 15:35:31 by yotillar          #+#    #+#              #
#    Updated: 2019/09/19 02:28:17 by yotillar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCDIR	= ./srcs
OBJDIR = ./srcs
INCLUDE	= ./includes
OBJ		= $(SRC:.c=.o)
OBJS	= $(OBJ:%=$(OBJDIR)/%)
NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AC = ar rc
RM = rm -f

all:	$(NAME)

$(NAME): $(OBJ)
		$(AC) $(NAME) $(OBJS)

clean:
	cd $(OBJDIR) && $(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


%.o: $(SRCDIR)/%.c
	 $(CC) -I$(INCLUDE) $(CFLAGS) -o $(OBJDIR)/$@ -c $<

.PHONY: all clean fclean re
