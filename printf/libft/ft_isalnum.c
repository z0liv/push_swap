/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:27:51 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 09:18:43 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90)
		|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	tests[] = {'0', 'Z', '5', '?', 'm', '9', '\0'};
	int		i;

	i = 0;
	while (tests[i] != '\0')
	{
		printf("ft_isalnum('%c') = %d\n", tests[i], ft_isalnum(tests[i]));
		i++;
	}

	return (0);
}*/