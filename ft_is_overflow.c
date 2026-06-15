/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 10:45:06 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/15 12:58:51 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_overflow(long *array, int array_len)
{
	int			counter;

	counter = 0;
	while (counter < array_len)
	{
		if (array[counter] > 2147483647
			|| array[counter] < -2147483648)
			return (1);
		counter ++;
	}
	return (0);
}
