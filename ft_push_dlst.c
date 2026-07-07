/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_dlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:59:41 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/07 08:52:37 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_helper(t_stack *stack_src)
{
	stack_src->head = NULL;
	stack_src->tail = NULL;
}

int	ft_push_dlst(t_stack *stack_src, t_stack *stack_dst, t_bench *bench,
		char *stack_name)
{
	t_d_list	*node;

	if (stack_src->size == 0)
		return (0);
	node = stack_src->head;
	node->prev->next = node->next;
	node->next->prev = node->prev;
	stack_src->size--;
	if (stack_src->size == 0)
		ft_push_helper(stack_src);
	else
	{
		stack_src->head = node->next;
		stack_src->tail = node->prev;
	}
	ft_dlstadd_front(stack_dst, node);
	if (!ft_strncmp(stack_name, "a", 1))
	{
		*(bench)->pa += 1;
		return (write(1, "pa\n", 3));
	}
	*(bench)->pb += 1;
	return (write(1, "pb\n", 3));
}
