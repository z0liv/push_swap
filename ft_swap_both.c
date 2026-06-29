/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_both.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:52:11 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/26 12:28:17 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap_both(t_stack *stack_a, t_stack *stack_b, t_bench *bench)
{
	ft_swap_dlst(stack_a, 'a', bench);
	ft_swap_dlst(stack_b, 'b', bench);
	*(bench->ss) += 1;
	*(bench->sa) -= 1;
	*(bench->sb) -= 1;
	return (write(1, "ss\n", 3));
}
