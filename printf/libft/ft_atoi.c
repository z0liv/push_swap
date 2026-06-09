/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 09:45:43 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 10:23:32 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cntr;
	int	sign;
	int	result;

	cntr = 0;
	sign = 1;
	result = 0;
	while (str[cntr] == ' ' || (str[cntr] >= 9 && str[cntr] <= 13))
		cntr++;
	if (str[cntr] == '-' || str[cntr] == '+')
	{
		if (str[cntr] == '-')
			sign = -1;
		cntr++;
	}
	while (str[cntr] >= '0' && str[cntr] <= '9')
	{
		result = result * 10 + (str[cntr] - '0');
		cntr++;
	}
	return (result * sign);
}
/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "   -42";
	char	s2[] = "1234abc";
	char	s3[] = "  +567";
	char	s4[] = "0";
	char	s5[] = "  -00123";

	printf("s1 = %d\n", ft_atoi(s1));
	printf("s2 = %d\n", ft_atoi(s2));
	printf("s3 = %d\n", ft_atoi(s3));
	printf("s4 = %d\n", ft_atoi(s4));
	printf("s5 = %d\n", ft_atoi(s5));

	return (0);
}*/