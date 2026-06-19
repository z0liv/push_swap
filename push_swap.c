/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/19 09:58:42 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_print_params(long *array, int *counter, char *flag)
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
	ft_printf("finalzacion de la ejecuion \n");
}

long	*ft_to_array(char *str, int *counter)
{
	char	**str2;
	long	*array;
	int		nmbrs;

	nmbrs = 0;
	str2 = ft_split(str, ' ');
	free(str);
	while (str2[*counter])
		*counter += 1;
	array = malloc(sizeof(long) * (*counter));
	if (!array)
		return (ft_free_split(str2, *counter), NULL);
	while (nmbrs < *counter)
	{
		array[nmbrs] = ft_atol(str2[nmbrs]);
		nmbrs++;
	}
	return (ft_free_split(str2, *counter), array);
}
void ft_establish_flags(char **flags, char **concat)
{
	free(flags[0]);
	free(flags[1]);	
	flags[0] = ft_bench_detector(concat);
	flags[1] = ft_flag_detector(concat);
}

int	main(int argc, char **argv)
{
	long	*array;
	char	*concat;
	int		counter;
	char	**flags;
	
	counter = 0;
	flags = ft_split(". . . . . .", ' ');
	if (argc <= 1)
		return (0);
	else
	{
		concat = ft_concat_params(argv);
		ft_establish_flags(flags, &concat);
		if (!ft_is_valid_input(concat)
			|| !(ft_strncmp(concat,"",ft_strlen(concat))))
			return (ft_free_split(flags, 6),
				free(concat), write(2, "Error\n", 7));
		array = ft_to_array(concat, &counter);
		ft_arr_to_lst(array, &counter, flags);
	}
	ft_print_params(array, &counter, flags[1]);
	return (ft_free_split(flags, 6), free(array), 0);
}
