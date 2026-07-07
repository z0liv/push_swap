/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:10:23 by omarquez          #+#    #+#             */
/*   Updated: 2026/07/07 11:53:16 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./printf/ft_printf.h"

typedef struct s_d_list
{
	int				content;
	int				norm_index;
	struct s_d_list	*next;
	struct s_d_list	*prev;
}	t_d_list;

typedef struct s_stack
{
	int			size;
	t_d_list	*head;
	t_d_list	*tail;
}	t_stack;

typedef struct s_bench
{
	char		*strategy;
	float		*disorder;
	size_t		*sa;
	size_t		*sb;
	size_t		*ss;
	size_t		*pa;
	size_t		*pb;
	size_t		*ra;
	size_t		*rb;
	size_t		*rr;
	size_t		*rra;
	size_t		*rrb;
	size_t		*rrr;

}	t_bench;

void		ft_complex_sort(t_stack *stack_a, t_bench *bench);
void		ft_medium_sort(t_stack *stack_a, t_bench *bench);
void		ft_simple_sort(t_stack *stack_a, t_bench *bench);
int			ft_find_node(t_stack *stack, int n_index, int len);
int			ft_find_node_in_range(t_stack *stack, int *range, int len);

void		ft_dlstadd_back(t_stack *stack, t_d_list *new);
void		ft_dlstclear(t_stack *stack, int *array_len);
void		ft_dlstadd_front(t_stack *stack, t_d_list *new);
t_d_list	*ft_dlstnew(int content, int norm_index);
t_stack		*ft_newstack(void);

int			ft_swap_dlst(t_stack *stack, char stack_name, t_bench *bench);
int			ft_swap_both(t_stack *stack_a, t_stack *stack_b, t_bench *bench);
int			ft_rotate_dlst(t_stack *stack, char stack_name, t_bench *bench);
int			ft_rotate_both(t_stack *stack_a, t_stack *stack_b,
				t_bench *bench);
int			ft_rrotate_dlst(t_stack *stack, char stack_name, t_bench *bench);
int			ft_rrotate_both(t_stack *stack_a, t_stack *stack_b,
				t_bench *bench);
int			ft_push_dlst(t_stack *stack_src, t_stack *stack_dst, t_bench *bench,
				char *stack_name);

void		ft_init_bench(t_bench *bench);
void		ft_print_bench(t_bench *bench);
void		ft_clean_bench(t_bench **bench);

int			ft_is_valid_input(char *input);
int			ft_is_duplicate(long *array, int array_len);
int			ft_is_overflow(long *array, int array_len);

t_stack		*ft_arr_to_lst(long	*arr, int *counter,
				char **flag, t_bench *bench);
long		*ft_copy_long_arr(long *array, int array_len);
int			ft_find_norm_index(long num, long *sorted_arr, int array_len);

char		*ft_concat_params(char **args);
long int	ft_atol(const char *str);
void		ft_ftoa(float n, char *res, int after_point);
long		*ft_sort_array(long *array, int array_len);
float		ft_calculate_disorder(long *array, int *counter);

char		*ft_resize(char **str, int size, char *flag);
int			ft_find_str(char *little, char *big);
char		*ft_flag_detector(char **str);
char		*ft_bench_detector(char **str);

void		ft_selector(char *concat, int *counter,
				char **flags, t_bench *bench);
long		*ft_to_array(char *str, int *counter);

#endif
