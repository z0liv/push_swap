/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_dlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:59:41 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/24 13:26:11 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_push_dlst(t_stack *stack_a, t_stack *stack_b, t_bench *bench,
			char *stack_name)
{
	t_d_list	*stack_a_first;
	t_d_list	*stack_b_first;
	t_d_list	*tmp_node;

	if (stack_b->size == 0)
		return (NULL);
	stack_a_first = stack_a->head;
	tmp_node = stack_a_first->next;
	stack_b_first = stack_b->head;
}
