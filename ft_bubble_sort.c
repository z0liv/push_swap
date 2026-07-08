/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 09:58:06 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/08 10:42:58 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bubble_sort(t_stack *stack_a, t_bench *bench)
{
	int	counter;
	int	semi_bool;

	semi_bool = 1;
	while (semi_bool)
	{
		counter = 0;
		semi_bool = 0;
		while (counter < stack_a->size - 1)
		{
			if (stack_a->head->norm_index > stack_a->head->next->norm_index)
			{
				ft_swap_dlst(stack_a, 'a', bench);
				semi_bool = 1;
			}
			else
				ft_rotate_dlst(stack_a, 'a', bench);
			counter ++;
		}
		ft_rotate_dlst(stack_a, 'a', bench);
	}
}

void	ft_three_sort(t_stack *stack, t_bench *bench)
{
	int counter;

	counter = 0;
	while (counter < stack->size - 1)
	{
		if (stack->head->norm_index > stack->head->next->norm_index
			&& stack->head->norm_index > stack->tail->norm_index)
			ft_rotate_dlst(stack, 'a', bench);
		if (stack->head->next->norm_index > stack->head->norm_index
			&& stack->head->next->norm_index > stack->tail->norm_index)
			ft_rrotate_dlst(stack, 'a', bench);
		if (stack->head->norm_index > stack->head->next->norm_index)
			ft_swap_dlst(stack, 'a', bench);
		counter ++;
	}
}
