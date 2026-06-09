/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:32:12 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:59:21 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *ptr, int charac)
{
	unsigned char	character;
	int				counter;

	character = (unsigned char) charac;
	counter = ft_strlen(ptr);
	while (counter > 0)
	{
		if (ptr[counter] == character)
			return ((char *) &ptr[counter]);
		counter--;
	}
	if (ptr[counter] == character)
		return ((char *) &ptr[counter]);
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";
	char	*result;

	// Search for last occurrence of 'l'
	result = ft_strrchr(str, 'l');

	if (result != NULL)
	{
		// Print the substring starting from last match
		printf("Last occurrence: %s\n", result);
	}
	else
	{
		// Character not found case
		printf("Character not found\n");
	}

	return (0);
}*/