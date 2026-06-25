/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_to_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 10:28:09 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/25 09:35:45 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_helper(long *arr,
		long *sorted_arr,
		t_stack *stack,
		t_bench *bench)
{
	free(arr);
	free(stack);
	free(sorted_arr);
	ft_clean_bench(&bench);
	exit(write(2, "Error\n", 7));
}

/* static void	ft_print_list(t_stack *stack, int *array_len)
{
	int			counter;
	t_d_list	*lst_tmp;

	counter = 0;
	lst_tmp = stack->head;
	while (counter < *array_len)
	{
		printf("content: %d \n", (lst_tmp)->content);
		printf("norm_index: %d \n", (lst_tmp)->norm_index);
		(lst_tmp) = (lst_tmp)->next;
		counter ++;
	}
} */

t_stack	*ft_arr_to_lst(long	*arr, int *array_len,
				char **flags, t_bench *bench)
{
	t_stack		*stack;
	long		*sorted_arr;
	int			counter;

	stack = ft_newstack();
	counter = -1;
	sorted_arr = ft_sort_array(arr, *array_len);
	if (ft_is_overflow(arr, *array_len) || ft_is_duplicate(arr, *array_len))
	{
		ft_free_split(flags, 2);
		ft_free_helper(arr, sorted_arr, stack, bench);
	}
	while (++counter < *array_len)
	{
		ft_dlstadd_back(stack,
			ft_dlstnew(arr[counter],
				ft_find_norm_index(arr[counter], sorted_arr, *array_len)));
	}
	free(sorted_arr);
	return (stack);
}
