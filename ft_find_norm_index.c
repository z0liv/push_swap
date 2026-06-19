/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_norm_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 12:15:23 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/19 09:43:50 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_norm_index(long num, long *sorted_arr, int array_len)
{
	int	counter;

	counter = 0;
	while (counter < array_len)
	{
		if (num == sorted_arr[counter])
			return (counter);
		counter ++;
	}
	return (counter);
}
