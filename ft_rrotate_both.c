/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:45:01 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/24 12:46:28 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_rrotate_both(t_stack *stack_a, t_stack *stack_b, t_bench *bench)
{
	ft_rrotate_dlst(stack_a, 'a', bench);
	ft_rrotate_dlst(stack_b, 'b', bench);
	*(bench->rrr) += 1;
	*(bench->rra) -= 1;
	*(bench->rrb) -= 1;
	return ("rrr");
}
