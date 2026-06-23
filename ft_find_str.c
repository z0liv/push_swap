/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 10:02:29 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/19 10:03:52 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_str(char *little, char *big)
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
