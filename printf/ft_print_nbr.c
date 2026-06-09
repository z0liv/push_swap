/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:50:08 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/20 10:54:06 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_char(int n)
{
	int		counter;
	long	nb;

	nb = n;
	counter = 0;
	if (nb <= 0)
		counter++;
	while (nb != 0)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}

int	ft_print_nbr(int nbr)
{
	ft_putnbr_fd(nbr, 1);
	return (ft_count_char(nbr) - 1);
}
