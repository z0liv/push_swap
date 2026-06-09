/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:32:38 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:46:50 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	char	tests[] = {'a', 'z', 'A', '5', '?', '\0'};
	int		i;

	i = 0;
	while (tests[i] != '\0')
	{
		// Print original and converted character
		printf("ft_toupper('%c') = '%c'\n",
			tests[i], ft_toupper(tests[i]));
		i++;
	}

	return (0);
}*/