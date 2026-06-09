/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:29:13 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 10:19:08 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str2cp;
	unsigned char	*str1cp;
	size_t			counter;

	str2cp = (unsigned char *) s2;
	str1cp = (unsigned char *) s1;
	counter = 0;
	while (counter < n)
	{
		if (str1cp[counter] != str2cp[counter])
			return (str1cp[counter] - str2cp[counter]);
		counter++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Helium";
	char	s3[] = "Hello";

	printf("s1 vs s2: %d\n", ft_memcmp(s1, s2, 5));
	printf("s1 vs s3: %d\n", ft_memcmp(s1, s3, 5));
	printf("s2 vs s1: %d\n", ft_memcmp(s2, s1, 5));

	return (0);
}*/
