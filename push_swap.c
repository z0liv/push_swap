/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/11 10:43:10 by omarquez         ###   ########.fr       */
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
	int	*result;
	int		i;
	int temp;

	if (argc > 1)
		printf("%s",argv[1]);
	temp = 0;
	result = ft_to_array(argv[1], &temp);

	i = 0;
	if (argc <= 1)
		return (0);
	if (argc == 2)
	{
		result = ft_to_array(argv[1]);
		while (result[i])
		{
			ft_printf("word[%d] = %s\n", i, result[i]);
			ft_printf("is valid gg?", ft_is_valid_input(result[i]));
			i++;
		}
	}
	else
	{
		ft_printf("number [%d] ", result[i]);
		i++;
	}
	return (0);
}

