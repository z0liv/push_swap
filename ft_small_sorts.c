/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sorts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 09:58:06 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/08 12:20:27 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small(t_stack *stack_a, t_bench *bench)
{
	t_stack	*stack_b;
	int		range[2];

	stack_b = ft_newstack();
	range[0] = 0;
	range [1] = 1;
	if (stack_a->size < 5)
		range[1] = 0;
	while (stack_a->size > 3)
	{
		if (stack_a->head->norm_index == 0 || stack_a->head->norm_index == 1)
			ft_push_dlst(stack_a, stack_b, bench, "b");
		else if (ft_find_node_in_range(stack_a, range, stack_a->size / 2))
			ft_rotate_dlst(stack_a, 'a', bench);
		else
			ft_rrotate_dlst(stack_a, 'a', bench);
	}
	ft_sort_three(stack_a, bench);
	if (stack_b->size == 1)
		ft_push_dlst(stack_b, stack_a, bench, "a");
	else if (stack_b->head->norm_index == 0)
		ft_swap_dlst(stack_b, 'b', bench);
	while (stack_b->size)
		ft_push_dlst(stack_b, stack_a, bench, "a");
	ft_dlstclear(stack_b, &stack_b->size);
}

void	ft_sort_two(t_stack *stack_a, t_bench *bench)
{
	ft_swap_dlst(stack_a, 'a', bench);
}

void	ft_sort_three(t_stack *stack, t_bench *bench)
{
	int	counter;

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
