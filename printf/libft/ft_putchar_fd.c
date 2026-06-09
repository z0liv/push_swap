/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 22:37:20 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/19 09:30:53 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main(void)
{

	ft_putchar_fd('H', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('\n', 1);

	return (0);
}*/