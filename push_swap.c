/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/11 15:10:54 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_to_array(char *str, int *counter)
{
	char	**str2;
	int		*array;
	int		nmbrs;

	nmbrs = 0;
	str2 = ft_split(str, ' ');
	free(str);
	while (str2[*counter])
		*counter += 1;
	array = malloc(sizeof(int) * (*counter));
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
	int		counter;
	int		*array;
	int		i;

	counter = 0;
	if (argc <= 1)
		return (0);
	if (argc > 2)
	{
		result = ft_concat_params(argv);
		ft_printf("is valid?: %d \n", ft_is_valid_input(result));
		array = ft_to_array(result, &counter);
	}
	else
		array = ft_to_array(ft_strdup(argv[1]), &counter);
	i = 0;
	while (i < counter)
	{
		ft_printf("numeros = [%d] ", array[i]);
		i++;
	}
	ft_printf("finalzacion de la ejecuion \n");
	return (free(array), 0);
}
