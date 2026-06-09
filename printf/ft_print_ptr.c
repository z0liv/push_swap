/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:06:32 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/21 10:48:25 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_helper(size_t ptr )
{
	unsigned int	counter;

	counter = 0;
	if ((size_t) ptr >= 16)
	{
		counter += ft_helper((size_t)ptr / 16);
	}
	if ((size_t)ptr % 16 >= 10)
	{
		ft_putchar_fd((size_t)ptr % 16 + 'a' - 10, 1);
		counter++;
	}
	else
	{
		ft_putchar_fd((size_t)ptr % 16 + 48, 1);
		counter++;
	}
	return (counter);
}

int	ft_print_ptr(void *ptr)
{
	unsigned int	counter;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	else
	{
		write (1, "0x", 2);
		counter = 2;
		counter += ft_helper((size_t) ptr);
	}
	return (counter);
}
