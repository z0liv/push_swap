/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/29 20:06:43 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static void	ft_establish_flags(char **flags, char **concat)
{
	free(flags[0]);
	free(flags[1]);
	flags[0] = ft_bench_detector(concat);
	flags[1] = ft_flag_detector(concat);
}
 
int	main(int argc, char **argv)
{
	int		counter;
	char	*concat;
	char	**flags;
	t_bench	*bench;

	counter = 0;
	if (argc <= 1)
		return (0);
	bench = malloc(sizeof(t_bench));
	ft_init_bench(bench);
	flags = ft_split(". .", ' ');
	concat = ft_concat_params(argv);
	ft_establish_flags(flags, &concat);
	if (!ft_is_valid_input(concat)
		|| !(ft_strncmp(concat, "", ft_strlen(concat))))
		return (ft_free_split(flags, 2),
			free(concat), ft_clean_bench(&bench), write(2, "Error\n", 7));
	ft_selector(concat, &counter, flags, bench);
	return (ft_clean_bench(&bench), ft_free_split(flags, 2), 0);
<<<<<<< HEAD
} */

=======
}
>>>>>>> master
