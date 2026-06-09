# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: khurtado <khurtado@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/05 09:12:44 by omarquez            #+#    #+#             #
#   Updated: 2026/06/09 10:15:43 by khurtado           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./printf

SRCS = push_swap.c
OBJS = $(SRCS:.c=.o)

PRINTF = printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)

$(PRINTF):
	$(MAKE) -C printf

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) clean -C printf
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C printf
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re