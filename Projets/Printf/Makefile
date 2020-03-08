# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 21:03:36 by yotillar          #+#    #+#              #
#    Updated: 2020/03/08 23:07:28 by yotillar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = /inc/libftprintf.h
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS =  ./src/ft_printf.c \
		./src/ft_init.c \
		./src/ft_check.c \
		./src/ft_handlers.c \
		./src/ft_buff.c \
		./src/ft_display_num.c \
		./src/ft_display_char.c \
		./src/ft_display.c \
		./src/ft_conv_x.c \
		./src/ft_conv_u.c \
		./src/ft_conv_c.c \
		./src/ft_conv_p.c \
		./src/ft_conv_s.c \
		./src/ft_conv_c.c \
		./src/ft_conv_d.c \

BONUS_SRCS = $(SRCS)

LIBFT = make -f ./Libft/Makefile

OBJS = $(SRCS:.c=.o)

BONUS_OBJ = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE) $(LIBFT)
	ar -rcs $(NAME) $(OBJS) 
	ranlib $(NAME)

bonus:	$(BONUS_OBJ) $(INCLUDE)
	ar -rcs $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus : fclean bonus

main: gcc $(CFLAGS) main.c libftprintf.a
