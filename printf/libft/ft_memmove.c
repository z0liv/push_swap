/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:02:40 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:34:45 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*cpysrc;
	char		*cpydest;

	if (!dest && !src)
		return (NULL);
	cpydest = (char *) dest;
	cpysrc = (const char *) src;
	if (dest > src)
	{
		while (n--)
			cpydest[n] = cpysrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[20] = "Hello world";

	printf("Before: %s\n", str);

	// copy with overlapping
	ft_memmove(str + 5, str, 5);

	printf("After: %s\n", str);

	return (0);
}*/