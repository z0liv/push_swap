/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_bench.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:57:16 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/23 23:58:10 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_malloc_bench(t_bench *bench)
{
	bench->strategy = NULL;
	bench->disorder = malloc(sizeof(float));
	bench->sa = malloc(sizeof(size_t));
	bench->sb = malloc(sizeof(size_t));
	bench->ss = malloc(sizeof(size_t));
	bench->pa = malloc(sizeof(size_t));
	bench->pb = malloc(sizeof(size_t));
	bench->ra = malloc(sizeof(size_t));
	bench->rb = malloc(sizeof(size_t));
	bench->rr = malloc(sizeof(size_t));
	bench->rra = malloc(sizeof(size_t));
	bench->rrb = malloc(sizeof(size_t));
	bench->rrr = malloc(sizeof(size_t));
}
void	ft_init_bench(t_bench *bench)
{
	ft_malloc_bench(bench);
	bench->strategy = NULL;
	*(bench->disorder) = 0.00;
	*(bench->sa) = 0;
	*(bench->sb) = 0;
	*(bench->ss) = 0;
	*(bench->pa) = 0;
	*(bench->pb) = 0;
	*(bench->ra) = 0;
	*(bench->rb) = 0;
	*(bench->rr) = 0;
	*(bench->rra) = 0;
	*(bench->rrb) = 0;
	*(bench->rrr) = 0;
}
