# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: khurtado <khurtado@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/05 09:12:44 by omarquez            #+#    #+#             #
#   Updated: 2026/06/26 13:46:46 by khurtado           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./printf
OBJS_DIR = objs

SRCS = 	push_swap.c ft_dlstadd_back.c ft_dlstnew.c ft_atol.c\
		ft_is_valid_input.c ft_is_duplicate.c ft_calculate_disorder.c\
		ft_concat_params.c ft_is_overflow.c ft_arr_to_lst.c	ft_dlstclear.c\
		ft_find_norm_index.c ft_sort_array.c ft_copy_long_arr.c \
		ft_find_str.c ft_resize.c ft_flag_detector.c ft_bench_detector.c\
		ft_selector.c ft_to_array.c ft_flag_detector.c ft_swap_dlst.c\
		ft_rotate_dlst.c ft_newstack.c ft_flag_detector.c ft_bench_detector.c\
		ft_init_bench.c ft_rotate_both.c ft_swap_both.c ft_print_bench.c\
		ft_clean_bench.c ft_ftoa.c ft_clean_bench.c ft_rrotate_dlst.c\
		ft_push_dlst.c ft_rrotate_both.c ft_dlstadd_front.c ft_simple_sort.c\
		ft_medium_sort.c
		
OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o)

PRINTF = printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF)
	$(CC) $(CFLAGS) $(PRINTF) -o $@ $^

$(PRINTF):
	$(MAKE) -C printf

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) clean -C printf
	rm -rf $(OBJS_DIR)

fclean: clean
	$(MAKE) fclean -C printf
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
