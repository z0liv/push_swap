/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:55:57 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 11:05:58 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size1;
	unsigned int	size2;
	char			*strres;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	strres = malloc(size1 + size2 + 1);
	if (!strres)
		return (NULL);
	ft_strlcpy(strres, s1, size1 + 1);
	ft_strlcpy(strres + size1, s2, size2 + 1);
	return (strres);
}
/*#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello ";
	char	*s2 = "42";
	char	*result;

	result = ft_strjoin(s1, s2);

	if (!result)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("s1      : %s\n", s1);
	printf("s2      : %s\n", s2);
	printf("s1 joined  : %s\n", result);

	free(result);
	return (0);
}*/