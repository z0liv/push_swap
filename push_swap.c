/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/08 13:07:42 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
size_t	ft_strlen_without_spaces(const char *s)
{
	size_t	counter;
	size_t	spaces;
	size_t	resta;
	
	counter = 0;
	spaces = 0;
	while (s[counter])
	{
		if(s[counter] == ' ')
			spaces++;
		counter++;
	}
	resta = counter - spaces;
	//printf ("contiene %ld numeros", resta);
	return (counter - spaces);
}

int	ft_to_array(char *str)
{
	int *array;
	

	array = malloc(4 * ft_strlen_without_spaces(str));
	ft_assing_to_array(array);
	return (1);
}

int	main(int argc, char **argv)
{
	

	if (argc > 1)
		printf("%s",argv[1]);
	ft_to_array(argv[1]);
	//write(1, "this is push_swap",17);
	return (0);
}
