/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:31:43 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 10:06:09 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while ((counter < n) && (s1[counter] != '\0'
			|| s2[counter] != '\0'))
	{
		if ((unsigned char) s1[counter]
			!= (unsigned char) s2[counter])
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
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
	int		n;

	n = 4;

	printf("Compare s1 vs s2: %d\n", ft_strncmp(s1, s2, n));
	printf("Compare s1 vs s3: %d\n", ft_strncmp(s1, s3, n));
	printf("Compare s2 vs s1: %d\n", ft_strncmp(s2, s1, n));

	return (0);
}*/