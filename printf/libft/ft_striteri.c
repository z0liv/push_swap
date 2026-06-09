/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 22:38:21 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 11:45:00 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	counter;

	if (!s || !f)
		return ;
	counter = 0;
	while (s[counter])
	{
		f(counter, &s[counter]);
		counter++;
	}
}
/*#include <stdio.h>
void	example_func(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
	else if (i % 2 == 1 && *c >= 'A' && *c <= 'Z')
		*c += 32;
}

// Main to test ft_striteri
int	main(void)
{
	char	str[] = "Hello 42 World";

	printf("Before: %s\n", str);

	ft_striteri(str, example_func);

	printf("After : %s\n", str);

	return (0);
}*/