/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:30:28 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:55:28 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	character;
	int				counter;

	character = (unsigned char) c;
	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == character)
			return ((char *) &s[counter]);
		counter++;
	}
	if (s[counter] == character)
		return ((char *) &s[counter]);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello World";
	char	*result;

	result = ft_strchr(str, 'a');

	if (result != NULL)
	{
		printf("Character found: %s\n", result);
	}
	else
	{
		printf("Character not found\n");
	}

	return (0);
}*/
