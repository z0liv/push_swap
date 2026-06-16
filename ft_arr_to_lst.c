/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_to_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 10:28:09 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/16 10:14:20 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_helper(long *arr)
{
	free(arr);
	exit(write(2, "Error\n", 7));
}

int	ft_arr_to_lst(long	*arr, int *counter)
{
	if (ft_is_overflow(arr, *counter) || ft_is_duplicate(arr, *counter))
		ft_free_helper(arr);
	return (ft_printf("end of arr_to_lst \n"));
}
