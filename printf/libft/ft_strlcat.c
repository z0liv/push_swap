/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:30:58 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:43:39 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	result;
	size_t	counter;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	counter = 0;
	result = size - lendest - 1;
	if (lendest >= size)
		return (size + lensrc);
	while (src[counter] && result--)
	{
		dest[lendest + counter] = src[counter];
		counter++;
	}
	dest[lendest + counter] = '\0';
	return (lendest + lensrc);
}
/*#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello ";
	char	src[] = "World";
	size_t	result;

    printf("Destination Before : %d\n", ft_strlen(dest));
    
	result = ft_strlcat(dest, src, sizeof(dest));

	printf("Destination : %s\n", dest);
	printf("Return value: %zu\n", result);

	return (0);
}*/
