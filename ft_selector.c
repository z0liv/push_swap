/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:41:28 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/30 09:13:49 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* static void	ft_print_params(long *array, int *counter,
		char *flag, float *disorder)
{
	int	i;

	i = 0;
	if (ft_strlen(flag))
		ft_printf("estrategia seleccionada = %s\n", flag + 2);
	while (i < *counter)
	{
		ft_printf("numeros = [%d] ", array[i]);
		i++;
	}
	printf("\ndisorder:  [%f]\n", *disorder);
} */

/* static void	ft_print_list(t_stack *stack, int *array_len)
{
	int			counter;
	t_d_list	*lst_tmp;

	counter = 0;
	lst_tmp = stack->head;
	while (counter < *array_len)
	{
		printf("content: %d \n", (lst_tmp)->content);
		printf("norm_index: %d \n", (lst_tmp)->norm_index);
		(lst_tmp) = (lst_tmp)->next;
		counter ++;
	}
} */

static char	*ft_algorithm(t_bench *bench, char *str)
{
	if ((*(bench)->disorder < 0.2 && (!str || *str == '\0'))
		|| !ft_strncmp(str, "--simple", 8))
		return (" 0 (n^2)");
	else if ((((!str || *str == '\0') && *(bench)->disorder >= 0.2)
			&& *(bench)->disorder < 0.5) || !ft_strncmp(str, "--medium", 8))
		return (" 0 (sqrtn)");
	else if ((*(bench)->disorder >= 0.5 && (!str || *str == '\0'))
		|| !ft_strncmp(str, "--complex", 9))
		return (" 0 (n log n)");
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
		return (ft_strjoin("Adaptative", str2));
}

void	ft_handle_disorder(long *array, int *counter,
	char **flags, t_bench *bench)
{
	t_stack	*stack_a;

	stack_a = ft_arr_to_lst(array, counter, flags, bench);
	if (!ft_find_str("", flags[1]) || ft_find_str("--adaptative", flags[1]))
	{
		bench->strategy = ft_strategy_setter(flags[1], bench);
		if (*bench->disorder == 0.0)
			ft_printf("\n");
		else if (*bench->disorder < 0.2)
			ft_simple_sort(stack_a, bench);
		else if (*bench->disorder >= 0.2 && *bench->disorder < 0.5)
			ft_medium_sort(stack_a, bench);
		else if (*bench->disorder >= 0.5)
			ft_complex_sort(stack_a, bench);
	}
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
