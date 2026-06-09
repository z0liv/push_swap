/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:29:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:35:30 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*cpysrc;
	char		*cpydest;
	size_t		counter;

	counter = 0;
	if (!src && !dest)
		return (NULL);
	cpydest = (char *) dest;
	cpysrc = (const char *) src;
	while (counter < n)
	{
		cpydest[counter] = cpysrc[counter];
		counter++;
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello World";
	char	dest[20];

	printf("Before memcpy:\n");
	printf("src  = %s\n", src);
	printf("dest = %s\n", dest);

	ft_memcpy(dest, src, ft_strlen(src) + 1);

	printf("\nAfter memcpy:\n");
	printf("src  = %s\n", src);
	printf("dest = %s\n", dest);

	return (0);
}*/