/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 20:54:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/30 20:54:50 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_node(t_stack *stack, int n_index, int len)
{
	t_d_list	*tmp_node;
	int			counter;

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
