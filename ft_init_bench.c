/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_bench.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:57:16 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/23 15:20:40 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_malloc_bench(t_bench *bench)
{
	bench->strategy = NULL;
	bench->disorder = malloc(sizeof(bench->disorder));
	bench->sa = malloc(sizeof(bench->sa));
	bench->sb = malloc(sizeof(bench->sb));
	bench->ss = malloc(sizeof(bench->ss));
	bench->ra = malloc(sizeof(bench->ra));
	bench->rb = malloc(sizeof(bench->rb));
	bench->rr = malloc(sizeof(bench->rr));
	bench->rra = malloc(sizeof(bench->rra));
	bench->rrb = malloc(sizeof(bench->rrb));
	bench->rrr = malloc(sizeof(bench->rrr));
}
void	ft_init_bench(t_bench *bench)
{
	ft_malloc_bench(bench);
	bench->strategy = NULL;
	bench->disorder = 0;
	bench->sa = 0;
	bench->sb = 0;
	bench->ss = 0;
	bench->ra = 0;
	bench->rb = 0;
	bench->rr = 0;
	bench->rra = 0;
	bench->rrb = 0;
	bench->rrr = 0;
}
