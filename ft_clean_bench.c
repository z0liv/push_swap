/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_bench.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:41:01 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/23 15:14:57 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clean_bench(t_bench *bench)
{
	free((void *)bench->disorder);
	free((void *)bench->sa);
	free((void *)bench->sb);
	free((void *)bench->ss);
	free((void *)bench->pa);
	free((void *)bench->pb);
	free((void *)bench->ra);
	free((void *)bench->rb);
	free((void *)bench->rr);
	free((void *)bench->rra);
	free((void *)bench->rrb);
	free((void *)bench->rrr);
	free(bench);
	bench = NULL;
}
