/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_dlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:40:28 by omarquez          #+#    #+#             */
/*   Updated: 2026/07/07 08:53:57 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap_dlst(t_stack *stack, char stack_name, t_bench *bench)
{
	int	tmp_content;
	int	tmp_norm_index;

	if (stack->size <= 1)
		return (0);
	tmp_content = stack->head->content;
	tmp_norm_index = stack->head->norm_index;
	stack->head->content = stack->head->next->content;
	stack->head->norm_index = stack->head->next->norm_index;
	stack->head->next->content = tmp_content;
	stack->head->next->norm_index = tmp_norm_index;
	if (stack_name == 'a')
	{
		*(bench->sa) += 1;
		return (write(1, "sa\n", 3));
	}
	*(bench->sb) += 1;
	return (write(1, "sb\n", 3));
}
