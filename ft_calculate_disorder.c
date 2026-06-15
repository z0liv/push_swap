/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_disorder.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:38:17 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/15 12:41:45 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	ft_calculate_disorder(int *array, int *counter)
{
	float	mistakes;
	float	total_pairs;
	int		index;
	int		index2;
	int		tmpcounter;

	index = 0;
	mistakes = 0;
	total_pairs = 0;
	tmpcounter = *counter;
	while (index < tmpcounter)
	{
		index2 = index +1;
		while (index2 < tmpcounter)
		{
			total_pairs += 1;
			if (array[index] > array[index2])
				mistakes += 1;
			index2++;
		}
		index++;
	}
	return (mistakes / total_pairs);
}
