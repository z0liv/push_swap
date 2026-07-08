/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:41:28 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/08 12:19:06 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_adaptive(t_stack *stack_a, t_bench *bench)
{
	if (stack_a->size < 3)
		ft_sort_two(stack_a, bench);
	else if (stack_a->size == 3)
		ft_sort_three(stack_a, bench);
	else if (stack_a->size <= 5)
		ft_sort_small(stack_a, bench);
	else if (*bench->disorder < 0.2)
		ft_simple_sort(stack_a, bench);
	else if (*bench->disorder >= 0.2 && *bench->disorder < 0.5)
		ft_medium_sort(stack_a, bench);
	else if (*bench->disorder >= 0.5)
		ft_complex_sort(stack_a, bench);
}

static char	*ft_algorithm(t_bench *bench, char *str)
{
	if (!ft_strncmp(str, "--adaptive", 10))
	{
		str = "";
	}
	if ((*(bench)->disorder < 0.2 && (*str == '\0'))
		|| !ft_strncmp(str, "--simple", 8))
		return (" / O(n²)");
	else if ((((*str == '\0') && *(bench)->disorder >= 0.2)
			&& *(bench)->disorder < 0.5) || !ft_strncmp(str, "--medium", 8))
		return (" / O(n√n)");
	else if ((*(bench)->disorder >= 0.5 && (*str == '\0'))
		|| !ft_strncmp(str, "--complex", 9))
		return (" / O(n log n)");
	return (NULL);
}

static char	*ft_strategy_setter(char *str, t_bench *bench)
{
	char	*str2;

	str2 = ft_algorithm(bench, str);
	if (ft_strlen(str) != 0)
	{
		str[2] -= 32;
		return (ft_strjoin(str + 2, str2));
	}
	else
		return (ft_strjoin("Adaptive", str2));
}

static void	ft_handle_disorder(long *array, int *counter,
	char **flags, t_bench *bench)
{
	t_stack	*stack_a;

	stack_a = ft_arr_to_lst(array, counter, flags, bench);
	bench->strategy = ft_strategy_setter(flags[1], bench);
	if (*bench->disorder == 0.0)
		ft_free_selector(array, stack_a, flags, bench);
	else if (ft_find_str("--Simple", flags[1]))
		ft_simple_sort(stack_a, bench);
	else if (ft_find_str("--Medium", flags[1]))
		ft_medium_sort(stack_a, bench);
	else if (ft_find_str("--Complex", flags[1]))
		ft_complex_sort(stack_a, bench);
	else
		ft_adaptive(stack_a, bench);
	free(array);
	ft_dlstclear(stack_a, &stack_a->size);
	if (ft_find_str(flags[0], "--bench"))
		ft_print_bench(bench);
}

void	ft_selector(char *concat, int *counter,
				char **flags, t_bench *bench)
{
	long		*array;

	array = ft_to_array(concat, counter);
	*bench->disorder = ft_calculate_disorder(array, counter);
	ft_handle_disorder(array, counter, flags, bench);
}
