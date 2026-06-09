/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:06:38 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/20 15:14:27 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_char(unsigned int n)
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

int	ft_print_unbr(int nbr)
{
	unsigned int	nbrcpy;
	unsigned int	counter;

	nbrcpy = (unsigned) nbr;
	counter = ft_count_char(nbrcpy) - 1;
	if (nbrcpy >= 10)
	{
		ft_putnbr_fd(nbrcpy / 10, 1);
		ft_putchar_fd(nbrcpy % 10 + 48, 1);
	}
	else
		ft_putchar_fd(nbrcpy + 48, 1);
	return (counter);
}
