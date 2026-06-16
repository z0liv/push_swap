/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/16 15:02:19 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_print_params(long *array, int *counter)
{
	int i;
	
	i = 0;
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

int	main(int argc, char **argv)
{
	long	*array;
	int		counter;
	char	*flag;
	char	*concat;

	counter = 0;
	flag = ft_strdup("");
	if (argc <= 1)
		return (free(flag), 0);
	if (argc > 2)
	{
		concat = ft_concat_params(argv);
		free(flag);
		flag = ft_cmplx_slctr(concat);
		array = ft_to_array(concat, &counter);
		ft_arr_to_lst(array, &counter, flag);
	}
	else
	{
		if (!ft_is_valid_input(argv[1]))
			return (write(2, "Error\n", 7));
		array = ft_to_array(ft_strdup(argv[1]), &counter);
		flag = ft_cmplx_slctr(argv[1]);
		ft_arr_to_lst(array, &counter, flag);
	}
	ft_print_params(array, &counter);
	ft_printf("%s",flag);
	return (free(flag),free(array), 0);
}
