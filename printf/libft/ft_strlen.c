/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:31:31 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:36:30 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		s++;
		counter++;
	}
	return (counter);
}
/*#include <stdio.h>

int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "42 Urduliz";
	char	*str3 = "";
	char	*str4 = "Programming in C";

	printf("ft_strlen(\"%s\") = %zu\n", str1, ft_strlen(str1));
	printf("ft_strlen(\"%s\") = %zu\n", str2, ft_strlen(str2));
	printf("ft_strlen(\"%s\") = %zu\n", str3, ft_strlen(str3));
	printf("ft_strlen(\"%s\") = %zu\n", str4, ft_strlen(str4));

	return (0);
}*/