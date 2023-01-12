# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thorikaw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 14:34:26 by thorikaw          #+#    #+#              #
#    Updated: 2023/01/12 14:39:47 by thorikaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libftprintf.a
CC=	cc
CFLAGS=	-Wall -Wextra -Werror
RM=	rm -rf

SRCS=	ft_printf.c ft_printpercent.c ft_printptr.c \
		ft_prthex.c ft_prtnbr.c ft_prtunsg.c ft_putchar.c ft_putstr.c \
		ft_itoa.c ft_putchar_fd.c ft_strlen.c ft_strchr.c

OBJS=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all
