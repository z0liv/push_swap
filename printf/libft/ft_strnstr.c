/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:31:58 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 10:21:44 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	letter1;
	size_t	letter2;

	letter1 = 0;
	letter2 = 0;
	if (little[letter2] == '\0')
		return ((char *)big);
	while (big[letter1] != '\0' && letter1 < len)
	{
		while (big[letter1 + letter2] == little[letter2]
			&& big[letter1 + letter2] != '\0'
			&& (letter1 + letter2 < len))
		{
			letter2++;
			if (little[letter2] == '\0')
				return ((char *) big + letter1);
		}
		letter2 = 0;
		letter1++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World from 42 Worlda";
	char	*result;

	result = ft_strnstr(str, "Worlda", 30);

	if (result != NULL)
	{
		printf("Found: %s\n", result);
	}
	else
	{
		printf("Not found\n");
	}

	return (0);
}*/