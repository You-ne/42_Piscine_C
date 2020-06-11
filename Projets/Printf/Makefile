# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 21:03:36 by yotillar          #+#    #+#              #
#    Updated: 2020/06/10 20:43:38 by yotillar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = ./inc/ft_printf.h
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS_PF =	./src/ft_printf.c \
		./src/ft_init.c \
		./src/ft_check.c \
		./src/ft_handlers.c \
		./src/ft_buff.c \
		./src/ft_display_num.c \
		./src/ft_display_char.c \
		./src/ft_display.c \
		./src/ft_specials.c \
		./src/ft_conv_x.c \
		./src/ft_conv_u.c \
		./src/ft_conv_c.c \
		./src/ft_conv_p.c \
		./src/ft_conv_s.c \
		./src/ft_conv_c.c \
		./src/ft_conv_d.c \
		./src/pf_ft_isdigit.c \
		./src/pf_ft_itoa_base1.c \
		./src/pf_ft_itoa_base2.c \
		./src/pf_ft_min_max.c \
		./src/pf_ft_strdup.c \
		./src/pf_ft_strlen.c \
		./src/pf_ft_substr.c \
		./src/pf_ft_atoi.c \

BONUS_SRCS = $(SRCS)

OBJS = $(SRCS_PF:.c=.o)

BONUS_OBJ = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	ar -rcs libftprintf.a $(OBJS)

bonus:	$(BONUS_SRCS) $(INCLUDE)
	ar -rcs $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJ) || echo .o\ not\ found

fclean: clean
	$(RM) $(NAME) || echo file\ not\ found

re: fclean all

rebonus : fclean bonus

main: 
	gcc $(CFLAGS) main.c libftprintf.a
