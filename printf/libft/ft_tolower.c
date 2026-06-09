/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:32:25 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:48:42 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	char	tests[] = {'B', 'z', 'A', '5', '?', '\0'};
	int		i;

	i = 0;
	while (tests[i] != '\0')
	{
		// Print original and converted character
		printf("ft_tolower('%c') = '%c'\n",
			tests[i], ft_tolower(tests[i]));
		i++;
	}

	return (0);
}*/