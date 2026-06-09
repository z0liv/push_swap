/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:57:16 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/21 10:45:57 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	if (str == NULL)
		return (write (1, "(null)", 6) - 1);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str) - 1);
}
