/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:28:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:21:34 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	tests[] = {'0', 'Z', '5', '?', 'm', '9', '\0'};
	int		i;

	i = 0;
	while (tests[i] != '\0')
	{
		printf("ft_isascii('%c') = %d\n", tests[i], ft_isalnum(tests[i]));
		i++;
	}

	return (0);
}*/