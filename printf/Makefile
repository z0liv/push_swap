NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./libft

SRCS = 	ft_printf.c ft_print_char.c ft_print_str.c ft_print_nbr.c \
		ft_print_unbr.c ft_print_hexl.c ft_print_hexu.c ft_print_ptr.c
LIBFT = libft/libft.a
LIBFT_OBJS_DIR = libft_objs

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	mkdir -p $(LIBFT_OBJS_DIR)
	cd $(LIBFT_OBJS_DIR) && ar x ../$(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT_OBJS_DIR)/*.o
	rm -rf $(LIBFT_OBJS_DIR)

$(LIBFT) :
	$(MAKE) -C libft

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean :
	$(MAKE) clean -C libft
	rm -f $(OBJS)

fclean : clean
	$(MAKE) fclean -C libft
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re