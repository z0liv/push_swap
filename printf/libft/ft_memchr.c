/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:28:55 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 10:18:04 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	character;
	unsigned char	*strcp;
	size_t			counter;

	character = (unsigned char) c;
	strcp = (unsigned char *) s;
	counter = 0;
	while (counter < n)
	{
		if (strcp[counter] == character)
			return ((void *) &strcp[counter]);
		counter++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";
	char	*result;

	result = ft_memchr(str, 'W', 11);

	if (result != NULL)
	{
		printf("Character found: %s\n", result);
	}
	else
	{
		printf("Character not found\n");
	}

	return (0);
}*/