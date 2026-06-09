/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:28:08 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:12:31 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	tests[] = {'A', 'z', '5', '?', 'm', 'Z', '\0'};
	int		i;

	i = 0;
	while (tests[i] != '\0')
	{
		printf("ft_isalpha('%c') = %d\n", tests[i], ft_isalpha(tests[i]));
		i++;
	}

	return (0);
}*/