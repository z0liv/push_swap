/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_dlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:03:58 by omarquez          #+#    #+#             */
/*   Updated: 2026/07/07 08:52:48 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_dlst(t_stack *stack, char stack_name, t_bench *bench)
{
	t_d_list	*stack_first;
	t_d_list	*tmp_node;

	stack_first = stack->head;
	if (stack->size <= 1)
		return (0);
	tmp_node = stack_first->next;
	stack->tail = stack_first;
	stack->head = tmp_node;
	if (stack_name == 'a')
	{
		*(bench->ra) += 1;
		return (write(1, "ra\n", 3));
	}
	*(bench->rb) += 1;
	return (write(1, "rb\n", 3));
}
