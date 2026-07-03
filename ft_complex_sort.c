/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 10:33:57 by omarquez          #+#    #+#             */
/*   Updated: 2026/07/03 08:46:04 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_max_bits(int num)
{
	int	bits;

	bits = 0;
	while (num != 0)
	{
		num = num / 2;
		bits ++;
	}
	return (bits);
}

void	ft_complex_sort(t_stack *stack_a, t_bench *bench)
{
	t_stack	*stack_b;
	int		counter1;
	int		counter2;
	int		max_bits;

	counter1 = 0;
	stack_b = ft_newstack();
	max_bits = ft_max_bits(stack_a->size - 1);
	while (counter1 < max_bits)
	{
		counter2 = stack_a->size;
		while (counter2-- > 0)
		{
			if (((stack_a->head->norm_index >> counter1) & 1) == 1)
				ft_rotate_dlst(stack_a, 'a', bench);
			else
				ft_push_dlst(stack_a, stack_b, bench, "b");
		}
		while (stack_b->size)
			ft_push_dlst(stack_b, stack_a, bench, "a");
		counter1 ++;
	}
	ft_dlstclear(stack_b, &stack_b->size);
}
