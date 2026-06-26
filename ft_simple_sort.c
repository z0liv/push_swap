/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:44:43 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/26 12:36:21 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_node(t_stack *stack, int n_index, int len)
{
	t_d_list *tmp_node;
	int counter;
	
	tmp_node = stack->head;
	counter = 0;
	while (counter < len)
	{
		if (tmp_node->norm_index == n_index)
			return (1);
		tmp_node = tmp_node->next;
		counter++;
	}
	
	return (0);
}

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
			ft_push_dlst(stack_a, stack_b, bench, "a");
			min ++;
		}
		else if (ft_find_node(stack_a, min, (int)(stack_a->size / 2)))
			ft_rotate_dlst(stack_a, 'a', bench);
		else
			ft_rrotate_dlst(stack_a, 'a', bench);
	}
	while (stack_b->size)
		ft_push_dlst(stack_b, stack_a, bench, "b");
	ft_dlstclear(stack_b, &stack_b->size);
}
