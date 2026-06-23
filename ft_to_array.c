/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:53:07 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/19 11:53:12 by khurtado         ###   ########.fr       */
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
