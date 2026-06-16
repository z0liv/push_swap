/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmplx_slctr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:21:24 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/16 15:05:44 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_helper(char *str , char *flag)
{
	free(str);
	free(flag);
	exit(write(2, "Error\n", 7));
}

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

char	*ft_cmplx_slctr(char *str)
{
	char	*flag;
	char	*temp;

	if(ft_find_str("--simple ", str))
	{
		temp = ft_strdup(str);
		free(str);
		str = ft_strdup(ft_strnstr(str, (const char *) "--simple ", ft_strlen(str)));
		free(temp);
		flag = ft_strdup("--simple");
		if (!ft_is_valid_input(str))
			ft_free_helper(str, flag);
		return (flag);
	}

	return ("");
}