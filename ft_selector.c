/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:41:28 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/25 08:45:26 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorted(void)
{
	ft_printf(" el string esta ordenado\n");
}

void	ft_simple(void)
{
	ft_printf("estrategia simple\n");
}

void	ft_medium(void)
{
	ft_printf("estrategia intermedia\n");
}

void	ft_complex(void)
{
	ft_printf("estrategia compleja\n");
}

static void	ft_print_params(long *array, int *counter,
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
	ft_printf("finalzacion de la ejecuion \n");
}

void	ft_selector(char *concat, int *counter,
				char **flags, t_bench *bench)
{
	long		*array;
	float		disorder;

	array = ft_to_array(concat, counter);
	disorder = ft_calculate_disorder(array, counter);
	/* bench->disorder = disorder; */
	if (disorder == 0.0)
		ft_sorted();
	else if (disorder < 0.2)
		ft_simple();
	else if (disorder >= 0.2 && disorder < 0.5)
		ft_medium();
	else if (disorder >= 0.5)
		ft_complex();
	ft_arr_to_lst(array, counter, flags, bench);
	ft_print_params(array, counter, flags[1], &disorder);
	free(array);
}
