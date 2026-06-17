/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:10:23 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/17 12:54:37 by omarquez         ###   ########.fr       */
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
	int				index;
	int				norm_index;
	struct s_d_list	*next;
	struct s_d_list	*prev;
}	t_d_list;

void		ft_dlstadd_back(t_d_list **lst, t_d_list *new);
t_d_list	*ft_dlstnew(int content, int index, int norm_index);
t_d_list	*ft_dlstlast(t_d_list *lst);
void		ft_dlstclear(t_d_list **lst, int *array_len);

int			ft_is_valid_input(char *input);
int			ft_is_duplicate(long *array, int array_len);
int			ft_is_overflow(long *array, int array_len);
int			ft_arr_to_lst(long	*arr, int *counter);
long	*ft_copy_long_arr(long *array, int array_len);
int			ft_find_norm_index(long num, long *sorted_arr, int array_len);
char		*ft_concat_params(char **args);
long int	ft_atol(const char *str);
long		*ft_sort_array(long *array, int array_len);
float		ft_calculate_disorder(int *array, int *counter);
char		*ft_flag_detector(char **str);

#endif
