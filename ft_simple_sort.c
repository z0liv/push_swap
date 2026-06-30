/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:44:43 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/30 21:06:26 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_simple_sort(t_stack *stack_a, t_bench *bench)
{
	t_stack	*stack_b;
	int		min;

	min = 0;
	stack_b = ft_newstack();
	while (stack_a->size)
	{
		if (min == stack_a->head->norm_index)
		{
			ft_push_dlst(stack_a, stack_b, bench, "b");
			min ++;
		}
		else if (ft_find_node(stack_a, min, (stack_a->size / 2)))
			ft_rotate_dlst(stack_a, 'a', bench);
		else
			ft_rrotate_dlst(stack_a, 'a', bench);
	}
	while (stack_b->size)
		ft_push_dlst(stack_b, stack_a, bench, "a");
	ft_dlstclear(stack_b, &stack_b->size);
}
