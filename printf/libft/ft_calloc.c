/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:27:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 10:30:12 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			counter;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = 0;
		return (ptr);
	}
	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	counter = 0;
	while (counter < nmemb * size)
		ptr[counter++] = 0;
	return (ptr);
}
/*#include <stdio.h>

int	main(void)
{
	int		*arr;
	size_t	i;

	// Test 1: normal allocation
	arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("Test 1: normal allocation\n");
	i = 0;
	while (i < 5)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}

	free(arr);

	// Test 2: zero elements
	arr = (int *)ft_calloc(0, sizeof(int));
	printf("\nTest 2: nmemb = 0\n");
	if (arr)
	{
		printf("Pointer is not NULL\n");
		free(arr);
	}
	else
	{
		printf("Pointer is NULL (not compliant with 42 rule)\n");
	}

	// Test 3: zero size
	arr = (int *)ft_calloc(5, 0);
	printf("\nTest 3: size = 0\n");
	if (arr)
	{
		printf("Pointer is not NULL\n");
		free(arr);
	}
	else
	{
		printf("Pointer is NULL\n");
	}

	return (0);
}*/
