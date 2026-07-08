/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_selector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 09:17:06 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/08 09:32:27 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_selector(long *arr, t_stack *stack, char **flags
			, t_bench *bench)
{
	ft_print_bench(bench);
	free(arr);
	ft_dlstclear(stack, &stack->size);
	ft_free_split(flags, 2);
	ft_clean_bench(&bench);
	exit(0);
}
