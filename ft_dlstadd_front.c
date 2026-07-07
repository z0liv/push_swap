/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:26:47 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/07 08:50:53 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstadd_front(t_stack *stack, t_d_list *new)
{
	if (!stack || !new)
		return ;
	if (!stack->head)
	{
		new->next = new;
		new->prev = new;
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		new->next = stack->head;
		new->prev = stack->tail;
		stack->head->prev = new;
		stack->tail->next = new;
		stack->head = new;
	}
	stack->size ++;
}
