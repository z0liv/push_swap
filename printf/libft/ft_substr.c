/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:36:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 10:47:07 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*#include <stdio.h>

int	main(void)
{
	char	*str = "Hello 42 World";
	char	*sub1;
	char	*sub2;
	char	*sub3;

	sub1 = ft_substr(str, 0, 5);
	sub2 = ft_substr(str, 6, 2);
	sub3 = ft_substr(str, 10, 100);

	printf("Original: %s\n", str);
	printf("Sub1     : %s\n", sub1);
	printf("Sub2     : %s\n", sub2);
	printf("Sub3     : %s\n", sub3);

	free(sub1);
	free(sub2);
	free(sub3);

	return (0);
}*/