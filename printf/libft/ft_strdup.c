/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:30:46 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 10:35:42 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strcp;

	strcp = malloc(ft_strlen(s) + 1);
	if (!strcp)
		return (NULL);
	ft_strlcpy(strcp, s, ft_strlen(s) + 1);
	return (strcp);
}
/*#include <stdio.h>

int	main(void)
{
	char	*original = "Hello 42";
	char	*copy;

	copy = ft_strdup(original);
	if (!copy)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("Original: %s\n", original);
	printf("Copy    : %s\n", copy);

	// Modify copy to prove it's independent
	copy[0] = 'h';

	printf("\nAfter modification:\n");
	printf("Original: %s\n", original);
	printf("Copy    : %s\n", copy);

	free(copy);
	return (0);
}*/
