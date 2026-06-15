/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/15 12:37:35 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	char	*result;
	long	*array;
	int		counter;
	int		i;

	counter = 0;
	if (argc <= 1)
		return (0);
	if (argc > 2)
	{
		result = ft_concat_params(argv);
		if (!ft_is_valid_input(result))
			return (ft_printf("Error \n"));
		array = ft_to_array(result, &counter);
		if (!ft_arr_to_lst(array, &counter))
			return (ft_printf("Error \n"));
	}
	else
	{
		if (!ft_is_valid_input(argv[1]))
			return (ft_printf("Error \n"));
		array = ft_to_array(ft_strdup(argv[1]), &counter);
		if (!ft_arr_to_lst(array, &counter))
			return (ft_printf("Error \n"));
	}
	i = 0;
	while (i < counter)
	{
		ft_printf("numeros = [%d] ", array[i]);
		i++;
	}
	ft_printf("finalzacion de la ejecuion \n");
	return (free(array), 0);
}
