/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:10:23 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/23 09:33:26 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
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

void		ft_dlstadd_back(t_stack *stack, t_d_list *new);
void		ft_dlstclear(t_stack *stack, int *array_len);
t_d_list	*ft_dlstnew(int content, int norm_index);
t_stack		*ft_newstack(void);

char		*ft_swap_dlst(t_stack *stack, char stack_name);
char 		*ft_rotate_dlst(t_stack *stack, char stack_name);

//validations
int			ft_is_valid_input(char *input);
int			ft_is_duplicate(long *array, int array_len);
int			ft_is_overflow(long *array, int array_len);
//list manipulation
int			ft_arr_to_lst(long	*arr, int *counter, char **flag);
long		*ft_copy_long_arr(long *array, int array_len);
int			ft_find_norm_index(long num, long *sorted_arr, int array_len);
//arguments manipulation
char		*ft_concat_params(char **args);
long int	ft_atol(const char *str);
long		*ft_sort_array(long *array, int array_len);
float		ft_calculate_disorder(long *array, int *counter);

char		*ft_resize(char **str, int size, char *flag);
int			ft_find_str(char *little, char *big);
char		*ft_flag_detector(char **str);
char		*ft_bench_detector(char **str);

void		ft_selector(char *concat, int *counter,char **flags);
long		*ft_to_array(char *str, int *counter);

#endif
