/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:32:33 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:00:57 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}
/*int	main(void)
{
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}*/
