/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_both.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:45:38 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/23 10:54:48 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_rotate_both(t_stack *stack_a, t_stack *stack_b, t_bench *bench)
{
	ft_rotate_dlst(stack_a, 'a', bench);
	ft_rotate_dlst(stack_b, 'b', bench);
	bench->rr ++;
	bench->ra --;
	bench->rb --;
	return ("rr");
}
