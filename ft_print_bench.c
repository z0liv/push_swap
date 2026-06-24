/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bench.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:05:30 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/24 10:42:39 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_str_str_helper(char *s1, char *s2)
{
	ft_putstr_fd(s1, 2);
	ft_putstr_fd(s2, 2);
	ft_putchar_fd('\n', 2);
}

void	ft_str_int_helper(char *s1, size_t s1_n)
{
	ft_putstr_fd(s1, 2);
	ft_putnbr_fd((int) s1_n, 2);
	ft_putchar_fd('\n', 2);
}

void	ft_str_ops_helper(char *s1, size_t s1_n, char *s2, size_t s2_n)
{
	ft_putstr_fd(s1, 2);
	ft_putnbr_fd((int) s1_n, 2);
	ft_putstr_fd(s2, 2);
	ft_putnbr_fd((int) s2_n, 2);
}

void	ft_print_bench(t_bench *bench)
{
	size_t	total_ops;
	char	disorder[6];
	
	ft_ftoa(*bench->disorder, disorder, 2);
	ft_strlcat(disorder, "%", ft_strlen(disorder) + 2);
	total_ops = 0;
	if (bench != NULL)
	{
		total_ops = *bench->sa + *bench->sb + *bench->ss + *bench->pa
		+ *bench->pb + *bench->rr + *bench->ra + *bench->rb + *bench->rrr
		+ *bench->rra + *bench->rrb;
		ft_str_str_helper("[bench] disorder: ", disorder);
		ft_str_str_helper("[bench] strategy: ", bench->strategy);
		ft_str_int_helper("[bench] total_ops: ", total_ops);
		ft_putstr_fd("[bench] ", 2);
		ft_str_ops_helper("sa: ", *bench->sa, " sb: ", *bench->sb);
		ft_str_ops_helper(" ss: ", *bench->ss, " pa: ", *bench->pa);
		ft_str_int_helper(" pb: ", *bench->pb);
		ft_putstr_fd("[bench] ", 2);
		ft_str_ops_helper("ra: ", *bench->ra, " rb: ", *bench->rb);
		ft_str_ops_helper(" rr: ", *bench->rr, " rra: ", *bench->rra);
		ft_str_ops_helper(" rrb: ", *bench->rrb, " rrr: ", *bench->rrr);
		ft_putchar_fd('\n', 2);
	}
}

/* int main(void)
{
	t_bench *bench;

	bench = malloc(sizeof(t_bench));
	ft_init_bench(bench);
	*bench->disorder = 24.93;
	ft_print_bench(bench);
	ft_clean_bench(&bench);
	return (0);
} */
