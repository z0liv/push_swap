/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:35:52 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/22 10:39:51 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strtrimstart(char const *s1, char const *set)
{
	unsigned int	cntr;
	unsigned int	cntr2;

	cntr2 = 0;
	cntr = 0;
	while (set[cntr] != '\0')
	{
		if (set[cntr] == s1[cntr2])
		{
			cntr2++;
			cntr = 0;
		}
		else
			cntr++;
	}
	return (cntr2);
}

static int	ft_strtrimend(char const *s1, char const *set)
{
	unsigned int	cntr;
	unsigned int	cntr2;

	cntr2 = ft_strlen(s1) - 1;
	cntr = 0;
	while (set[cntr] != '\0')
	{
		if (set[cntr] == s1[cntr2])
		{
			cntr2--;
			cntr = 0;
		}
		else
			cntr++;
	}
	return (cntr2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*strres;

	if (!s1 || !set)
		return (NULL);
	start = ft_strtrimstart(s1, set);
	if (start >= ft_strlen(s1))
		return (ft_strdup(""));
	end = ft_strtrimend(s1, set);
	strres = malloc(end - start + 2);
	if (!strres)
		return (NULL);
	ft_strlcpy(strres, s1 + start, end - start + 2);
	return (strres);
}
/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "   Hello 42   ";
	char	*set = " ";
	char	*result;

	result = ft_strtrim(s1, set);

	if (!result)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("Original : \"%s\"\n", s1);
	printf("Trimmed  : \"%s\"\n", result);

	free(result);
	return (0);
}*/