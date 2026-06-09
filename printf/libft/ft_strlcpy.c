/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:31:14 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:40:04 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	counter;
	size_t	src_length;

	counter = 0;
	src_length = 0;
	while (src[src_length])
		src_length++;
	if (size > 0)
	{
		while (src[counter] && counter < size - 1)
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (src_length);
}
/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello World";
	char	dest[6];
	size_t	result;

	// Copy up to size - 1 characters
	result = ft_strlcpy(dest, src, sizeof(dest));

	printf("Source      : %s\n", src);
	printf("Destination : %s\n", dest);
	printf("Src length  : %zu\n", result);

	return (0);
}*/