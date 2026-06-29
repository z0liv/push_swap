/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:41:28 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/26 12:25:33 by omarquez         ###   ########.fr       */
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

void	ft_handle_disorder(long *array, int *counter,
	char **flags, t_bench *bench)
{
	t_stack	*stack_a;

	stack_a = ft_arr_to_lst(array, counter, flags, bench);
	if (!ft_find_str("", flags[1]) || ft_find_str("--adaptative", flags[1]))
	{
		bench->strategy = "Adaptative / O(n√n)";
		if (*bench->disorder == 0.0)
			ft_printf("SORTED");
		else if (*bench->disorder < 0.2)
		{
			ft_simple_sort(stack_a, bench);
			//ft_print_list(stack_a, counter);
		}
		else if (*bench->disorder >= 0.2 && *bench->disorder < 0.5)
			ft_simple_sort(stack_a, bench);
		else if (*bench->disorder >= 0.5)
			ft_simple_sort(stack_a, bench);
	}
	//ft_print_params(array, counter, flags[1], bench->disorder);
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
