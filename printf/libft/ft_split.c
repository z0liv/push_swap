/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:33:42 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 11:12:38 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **str, int size)
{
	while (size >= 0)
		free(str[size--]);
	free(str);
}

static int	ft_count_words(const char *str, char c)
{
	int	cntr;
	int	words;

	cntr = 0;
	words = 0;
	while (str[cntr])
	{
		if (str[cntr] != c && (str[cntr + 1] == c || str[cntr + 1] == '\0'))
			words++;
		cntr++;
	}
	return (words);
}

static void	ft_fill_word(char *dest, const char *from, char c)
{
	int	cntr;

	cntr = 0;
	while (from[cntr] && from[cntr] != c)
	{
		dest[cntr] = from[cntr];
		cntr++;
	}
	dest[cntr] = '\0';
}

static int	ft_fill_all(char **str2, const char *str, char c)
{
	int	cntr1;
	int	cntr2;
	int	word;

	cntr1 = 0;
	word = 0;
	while (str[cntr1])
	{
		if (str[cntr1] == c)
			cntr1++;
		else
		{
			cntr2 = 0;
			while (str[cntr1 + cntr2] && str[cntr1 + cntr2] != c)
				cntr2++;
			str2[word] = malloc(sizeof(char) * (cntr2 + 1));
			if (!str2[word])
				return (ft_free_split(str2, word), -1);
			ft_fill_word(str2[word], str + cntr1, c);
			cntr1 += cntr2;
			word++;
		}
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	if (!str)
		return (NULL);
	words = ft_count_words(str, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	res[words] = NULL;
	if (ft_fill_all(res, str, c) == -1)
		return (NULL);
	return (res);
}
/*#include <stdio.h>

int	main(void)
{
	char	**result;
	int		i;
	char	str[] = "Hello this is 42 split test";

	result = ft_split(str, ' ');
	if (!result)
	{
		printf("Allocation failed\n");
		return (1);
	}

	// Print all words
	i = 0;
	while (result[i])
	{
		printf("word[%d] = %s\n", i, result[i]);
		i++;
	}

	// Free memory
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	return (0);
}*/