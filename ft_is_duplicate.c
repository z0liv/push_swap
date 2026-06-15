/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:23:31 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/15 12:31:27 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_duplicate(long *array, int array_len)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	while (counter1 < array_len - 1)
	{
		counter2 = 0;
		while (counter2 < array_len)
		{
			if (counter1 == counter2)
				counter2 ++;
			if (array[counter1] == array[counter2])
				return (1);
			else
				counter2 ++;
		}
		counter1 ++;
	}
	return (0);
}
/* int main () {
	int arr[] = {4, 5, 6, 1};
	int array_len = sizeof(arr) / sizeof(arr[0]);

	ft_printf("%d", ft_is_duplicate(arr, array_len));

    return 0;
}
 */
