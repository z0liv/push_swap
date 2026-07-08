/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 09:58:06 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/08 10:21:12 by khurtado         ###   ########.fr       */
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
