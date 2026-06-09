/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:06:42 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:00:32 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*int	main(void)
{
	ft_putendl_fd("Hello 42", 1);
	ft_putendl_fd("This is a new line", 1);
	ft_putendl_fd("libft complete step", 1);

	return (0);
}*/