/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/23 09:29:25 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_establish_flags(char **flags, char **concat)
{
	free(flags[0]);
	free(flags[1]);	
	flags[0] = ft_bench_detector(concat);
	flags[1] = ft_flag_detector(concat);
}

int	main(int argc, char **argv)
{
	char	*concat;
	int		counter;
	char	**flags;
	
	counter = 0;
	flags = ft_split(". .", ' ');
	if (argc <= 1)
		return (0);
	concat = ft_concat_params(argv);
	ft_establish_flags(flags, &concat);
	if (!ft_is_valid_input(concat)
		|| !(ft_strncmp(concat,"",ft_strlen(concat))))
		return (ft_free_split(flags, 2),
			free(concat), write(2, "Error\n", 7));
	ft_selector(concat, &counter, flags);
	return (ft_free_split(flags, 2), 0);
}
