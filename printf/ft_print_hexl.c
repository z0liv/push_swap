/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:54:12 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/21 10:46:59 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexl(unsigned int nbr)
{
	unsigned int	counter;

	counter = 0;
	if (nbr >= 16)
	{
		counter += ft_print_hexl(nbr / 16);
	}
	if (nbr % 16 >= 10)
	{
		ft_putchar_fd(nbr % 16 + 'a' - 10, 1);
		counter++;
	}
	else
	{
		ft_putchar_fd(nbr % 16 + 48, 1);
		counter++;
	}
	return (counter);
}
