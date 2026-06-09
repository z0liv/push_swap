/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:23:26 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:37:17 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;

	dest = s;
	while (n != 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
}
/*#include <stdio.h>

int	main(void)
{
	char	str[20] = "Hello World";
	int		i;

	printf("Before: %s\n", str);

	ft_bzero(str, 5);

	printf("After: ");

	i = 0;
	while (i < 11)
	{
		if (str[i] == '\0')
			printf("\\0 ");
		else
			printf("%c ", str[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/