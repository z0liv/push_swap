/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_long_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 12:39:06 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/17 12:41:35 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_copy_long_arr(long *array, int array_len)
{
	long	*array_cpy;
	int		counter;

	array_cpy = malloc(sizeof(long) * array_len);
	counter = 0;
	while(counter < array_len)
	{
		array_cpy[counter] = array[counter];
		counter ++;
	}
	return (array_cpy);
}
