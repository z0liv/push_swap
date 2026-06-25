/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_both.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:45:38 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/25 12:16:56 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_both(t_stack *stack_a, t_stack *stack_b, t_bench *bench)
{
	ft_rotate_dlst(stack_a, 'a', bench);
	ft_rotate_dlst(stack_b, 'b', bench);
	*(bench->rr) += 1;
	*(bench->ra) -= 1;
	*(bench->rb) -= 1;
	return(write(1, "rr\n", 3));
}
