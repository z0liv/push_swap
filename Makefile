# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: omarquez <omarquez@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/05 09:12:44 by omarquez            #+#    #+#             #
#   Updated: 2026/06/11 12:15:20 by omarquez           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./printf

SRCS = 	push_swap.c ft_dlstlast.c ft_dlstsize.c ft_dlstadd_back.c ft_dlstnew.c \
		ft_dlstadd_front.c ft_is_valid_input.c ft_is_duplicate.c ft_is_flag.c  \
		ft_concat_params.c

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
