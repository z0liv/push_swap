/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bench_detector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 08:51:11 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/18 21:19:59 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_find_str(char *little, char *big)
{
	size_t	letter1;
	size_t	letter2;
	size_t	len;

	letter1 = 0;
	letter2 = 0;
	len = ft_strlen (big);
	if (little[letter2] == '\0')
		return (0);
	while (big[letter1] != '\0' && letter1 < len)
	{
		while (big[letter1 + letter2] == little[letter2]
			&& big[letter1 + letter2] != '\0'
			&& (letter1 + letter2 < len))
		{
			letter2++;
			if (little[letter2] == '\0')
				return (1);
		}
		letter2 = 0;
		letter1++;
	}
	return (0);
}

static char	*ft_helper(char **str, int size, char *flag)
{
	char	*temp;

	temp = ft_strdup(*str);
	free(*str);
	*str = ft_strdup(temp + size);
	free(temp);
	return (ft_strdup(flag));
}

char	*ft_bench_detector(char **str)
{
	char	*flag;
	
	if (ft_find_str("--bench ", *str))
		return (flag = (ft_helper(str, ft_strlen("--bench "), "--bench")));
	return (ft_strdup(""));
}


