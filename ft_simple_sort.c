/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:44:43 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/25 10:00:43 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_simple_sort(t_stack *stack_a, char **flags, t_bench *bench)
{
	t_stack *stack_b;
	int	min;

	min = 0;
	stack_b = ft_newstack();
	if (ft_find_str("--bench", flags[0]))
		ft_printf("\n-----------BENCH---------\n");
	ft_printf("\n-----------%d---------\n", stack_a->size);
	while (stack_a->size)
	{
		if (min == stack_a->head->norm_index)
		{
			ft_push_dlst(stack_a, stack_b, bench, "a");
			min ++;
		}
		else if (min == stack_a->tail->norm_index)
		ft_rrotate_dlst(stack_a, 'a', bench);
		else
		ft_rotate_dlst(stack_a, 'a', bench);
	}
	while (stack_b->size)
	ft_push_dlst(stack_b, stack_a, bench, "b");
	ft_dlstclear(stack_b, &stack_b->size);
}
