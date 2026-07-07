/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_dlst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:24:33 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/07 08:52:55 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rrotate_dlst(t_stack *stack, char stack_name, t_bench *bench)
{
	t_d_list	*stack_last;
	t_d_list	*tmp_node;

	stack_last = stack->tail;
	if (stack->size <= 1)
		return (0);
	tmp_node = stack_last->prev;
	stack->head = stack_last;
	stack->tail = tmp_node;
	if (stack_name == 'a')
	{
		*(bench->rra) += 1;
		return (write(1, "rra\n", 4));
	}
	*(bench->rrb) += 1;
	return (write(1, "rrb\n", 4));
}
