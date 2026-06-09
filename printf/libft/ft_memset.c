/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:30:10 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:35:58 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;

	dest = s;
	while (n != 0)
	{
		*dest = c;
		dest++;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[20] = "Hello World";

	printf("Before: %s\n", str);

	ft_memset(str, '*', 5);

	printf("After: %s\n", str);

	return (0);
}*/