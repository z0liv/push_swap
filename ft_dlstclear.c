/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:04:30 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/19 11:33:04 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstclear(t_stack *stack, int *array_len)
{
	t_d_list	*lst_tmp;
	t_d_list	*lst;
	int			counter;

	if (!stack)
		return ;
	lst = stack->head;
	lst_tmp = stack->head;
	counter = 0;
	while (counter < *array_len)
	{
		lst_tmp = (*lst_tmp).next;
		free(lst);
		lst = lst_tmp;
		counter ++;
	}
	lst = NULL;
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
	free(stack);
}
