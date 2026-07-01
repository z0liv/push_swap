/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 20:54:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/01 20:27:22 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_node(t_stack *stack, int n_index, int len)
{
	t_d_list	*tmp_node;
	int			counter;

	if (!stack || !stack->head || len <= 0)
		return (0);
	tmp_node = stack->head;
	counter = 0;
	while (counter < len)
	{
		if (tmp_node->norm_index == n_index)
			return (1);
		tmp_node = tmp_node->next;
		counter++;
	}
	return (0);
}

int	ft_find_node_in_range(t_stack *stack, int *range, int len)
{
	t_d_list	*tmp_node;
	int			counter1;
	int			counter2;

	if (!stack || !stack->head || len <= 0)
		return (0);
	tmp_node = stack->head;
	counter1 = 0;
	while (counter1 < len)
	{
		counter2 = range[0];
		
		while(counter2 <= range[1])
		{
			if (tmp_node->norm_index == counter2)
					return (1);
			counter2 ++;
		}
		tmp_node = tmp_node->next;
		counter1++;
	}
	return (0);
}
