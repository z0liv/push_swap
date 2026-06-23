/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bench.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:05:30 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/23 12:30:32 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
char	*ft_ftoa(float number)
{

}

void	ft_print_bench(t_bench *bench)
{
	char	*str;
	size_t	total_ops;
	char	*disorder;

	str = "[bench]";
	disorder = ft_ftoa(bench->disorder);
	total_ops = bench->sa + bench->sb + bench->ss + bench->pa + bench->pb
		+ bench->rr + bench->ra + bench->rb + bench->rrr + bench->rra
		+ bench->rrb;
	ft_printf("%s disorder: %s%%\n", str, disorder);
	ft_printf("%s strategy: %s\n", str, bench->strategy);
	ft_printf("%s total_ops: %d\n", str, total_ops);
	ft_printf("%s sa: %d sb: %d ss: %d pa: %d pb: %d\n", str, bench->sa,
		bench->sb, bench->ss, bench->pa, bench->pb);
	ft_printf("%s ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n", str,
		bench->ra, bench->rb, bench->rr, bench->rra, bench->rrb, bench->rrr);
}
