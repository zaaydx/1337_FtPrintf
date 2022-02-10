# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/27 22:33:28 by zchbani           #+#    #+#              #
#    Updated: 2021/11/28 12:14:33 by zchbani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

SRCS = ft_printf.c ft_printcharc.c ft_printchariandd.c\
		ft_printcharp.c ft_printchars.c ft_printcharu.c\
		ft_printcharxandx.c ft_printpercent.c ft_putchar.c\

OBJS	=	$(SRCS:%.c=%.o)

$(NAME): $(OBJS) $(LIB)
	
	@$(CC) $(FLAGS) -c $(SRCS) -I $(HEADER)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
