/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:44:43 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/24 13:23:37 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_simple_sort(t_stack *stack_a, char **flags, t_bench *bench)
{
	t_stack *stack_b;
	int	tmp;
	int	min;

	min = 0;
	stack_b = ft_newstack();
	while (stack_a->size)
	{
		if (min == stack_a->head->norm_index)
			ft_push_stack(stack_a, stack_b, bench, 'a');
		if (min == stack_a->head->next->norm_index)
			ft_rotate_dlst(stack_a, 'a', bench);
		if (min == stack_a->tail->norm_index)
			ft_reverse_rotate_dlst(stack_a, 'a', bench);
		else
			ft_rotate_dlst(stack_a, 'a', bench);
		min ++;
	}
	while (stack_b->size)
		ft_push_stack(stack_b, stack_a, bench, 'b');
}
