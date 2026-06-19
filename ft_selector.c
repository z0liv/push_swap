/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:41:28 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/19 13:45:03 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ordenado()
{
	ft_printf(" el string esta ordenado\n");
}
void ft_simple()
{
	ft_printf("estrategia simple\n");
}
void ft_medium()
{
	ft_printf("estrategia intermedia\n");
}
void ft_complex()
{
	ft_printf("estrategia compleja\n");
}

static void	ft_print_params(long *array, int *counter,
		char *flag, float *disorder)
{
	int	i;

	i = 0;
	if (ft_strlen(flag))
		ft_printf("estrategia seleccionada = %s\n",flag + 2);
	while (i < *counter)
	{
		ft_printf("numeros = [%d] ", array[i]);
		i++;
	}
	printf("\ndisorder:  [%f]\n", *disorder);
	ft_printf("finalzacion de la ejecuion \n");
}

void	ft_selector(char *concat, int *counter, char **flags)
{
	long		*array;
	float		disorder;

	array = ft_to_array(concat, counter);
	disorder = ft_calculate_disorder(array, counter);
	if (disorder == 0.0)
		ft_ordenado();
	else if(disorder < 0.2)
		ft_simple();
	else if(disorder >= 0.2 && disorder < 0.5)
		ft_medium();
	else if(disorder >= 0.5)
		ft_complex();
	ft_arr_to_lst(array, counter, flags);
	ft_print_params(array, counter, flags[1], &disorder);
	free(array);
}
