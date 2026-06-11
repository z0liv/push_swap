/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/11 12:18:20 by omarquez         ###   ########.fr       */
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
	while (str2[*counter])
		*counter+= 1;
	array = (int *) malloc(sizeof(int) * (*counter));
	if(!array)
		return (ft_free_split(str2, *counter), NULL);
	
	while (nmbrs < *counter)
	{
		array[nmbrs] = ft_atoi(str2[nmbrs]);
		nmbrs++;
	}
	return (ft_free_split(str2, *counter), array);
}
/* int	ft_array_len(int *array)
{
	int	counter;

	counter = 0;
	while (*array)
	{
		ft_printf("%d",*array);
		array++;
		counter++;
	}
	return (counter);
} */
int	main(int argc, char **argv)
{
	char *result;
	
	if (argc <= 1)
		return (0);
	if (argc > 2)
	{
		result = ft_concat_args(argv);
		free(result);
	}
	return (0);
} 


