# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: omarquez <omarquez@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/05 09:12:44 by omarquez            #+#    #+#             #
#   Updated: 2026/06/17 12:39:02 by omarquez           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./printf

SRCS = 	push_swap.c ft_dlstlast.c ft_dlstadd_back.c ft_dlstnew.c ft_atol.c\
		ft_is_valid_input.c ft_is_duplicate.c ft_calculate_disorder.c\
		ft_concat_params.c ft_is_overflow.c ft_arr_to_lst.c	ft_dlstclear.c\
		ft_find_norm_index.c ft_sort_array.c ft_copy_long_arr.c
		
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
