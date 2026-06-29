/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_bench.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:41:01 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/29 20:32:16 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clean_bench(t_bench **bench)
{
	free((*bench)->disorder);
	free((*bench)->strategy);
	free((*bench)->sa);
	free((*bench)->sb);
	free((*bench)->ss);
	free((*bench)->pa);
	free((*bench)->pb);
	free((*bench)->ra);
	free((*bench)->rb);
	free((*bench)->rr);
	free((*bench)->rra);
	free((*bench)->rrb);
	free((*bench)->rrr);
	free(*bench);
	
	*bench = NULL;
}
