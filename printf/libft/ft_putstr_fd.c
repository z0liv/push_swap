/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 22:37:48 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:00:02 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	if (!s)
		return ;
	while (s[counter] != '\0')
	{
		write(fd, &s[counter], 1);
		counter++;
	}
}
/*
int	main(void)
{
	char	*str = "Hello from ft_putstr_fd!\n";

	// Print to standard output (fd = 1)
	ft_putstr_fd(str, 1);

	// Print again manually to show it works multiple times
	ft_putstr_fd("Second line\n", 1);

	return (0);
}*/