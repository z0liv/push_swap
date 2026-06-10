/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/10 14:46:49 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	*ft_to_array(char *str)
{
	char	**str2;
	int		counter;
	int		*array;

	counter = 0;
	str2 = ft_split(str, ' ');
	while (str2[counter])
		counter++;
	array = (int *) malloc(sizeof(int) * counter);
	if(!array)
		return (ft_free_split(str2, counter), NULL);
	counter = 0;
	while (str2[counter] != NULL)
	{
		array[counter] = ft_atoi(str2[counter]);
		counter++;
	}
	return (ft_free_split(str2, counter), array);
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
	int	*result;
	int		i;
	int temp;

	if (argc > 1)
		printf("%s",argv[1]);
	result = ft_to_array(argv[1]);

	i = 0;
	while (result[i])
	{
		ft_printf("number [%d] ", result[i]);
		i++;
	}
	return (0);
}

