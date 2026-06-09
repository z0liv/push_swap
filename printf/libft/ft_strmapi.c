/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:11:49 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 11:18:48 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strres;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	strres = (char *)malloc(sizeof(char) * (len + 1));
	if (!strres)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strres[i] = f(i, s[i]);
		i++;
	}
	strres[i] = '\0';
	return (strres);
}
/*#include <stdio.h>

// Example function: convert to uppercase for even indexes
char	example_func(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}


int	main(void)
{
	char	*str = "hello 42 world";
	char	*result;

	result = ft_strmapi(str, example_func);
	if (!result)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("Original: %s\n", str);
	printf("Mapped  : %s\n", result);

	free(result);
	return (0);
}*/
