/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 12:00:31 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/17 12:42:36 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_sort_array(long *array, int array_len)
{
	int		temp;
	int		counter1;
	int		counter2;
	long	*sorted_array;

	counter1 = 0;
	sorted_array = ft_copy_long_arr(array, array_len);
	while (counter1 < (array_len - 1))
	{
		counter2 = 0;
		while (counter2 < array_len - 1 - counter1)
		{
			if (sorted_array[counter2] > sorted_array[counter2 + 1])
			{
				temp = sorted_array[counter2];
				sorted_array[counter2] = sorted_array[counter2 + 1];
				sorted_array[counter2 + 1] = temp;
			}
			counter2 ++;
		}
		counter1 ++;
	}
	return (sorted_array);
}
