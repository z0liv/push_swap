/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_to_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 10:28:09 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/15 12:15:54 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_arr_to_lst(long	*arr, int *counter)
{
	if (ft_is_overflow(arr, *counter))
		return (0);
	if (ft_is_duplicate(arr, *counter))
		return (0);
	return (ft_printf("end of arr_to_lst \n"));
}
