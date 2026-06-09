/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 16:43:16 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/20 16:44:15 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexu(unsigned int nbr)
{
	unsigned int	counter;

	counter = 0;
	if (nbr >= 16)
	{
		counter += ft_print_hexu(nbr / 16);
	}
	if (nbr % 16 >= 10)
	{
		ft_putchar_fd(nbr % 16 + 'A' - 10, 1);
		counter++;
	}
	else
	{
		ft_putchar_fd(nbr % 16 + 48, 1);
		counter++;
	}
	return (counter);
}
