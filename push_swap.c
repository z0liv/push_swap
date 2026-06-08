/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/08 13:23:26 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
size_t	ft_strlen_without_spaces(const char *s)
{
	size_t	counter;
	size_t	signs;
	size_t	negatives;
	size_t	substraction;
	
	counter = 0;
	signs = 0;
	negatives = 0;
	while (s[counter])
	{
		if(s[counter] == ' ')
			signs++;
		if(s[counter] == '-')
			negatives++;
		counter++;
	}
	substraction = counter - signs - negatives;
	//git addprintf ("contiene %ld numeros", substraction);
	return (substraction);
}

int	ft_to_array(char *str)
{
	int *array;
	

	array = malloc(4 * ft_strlen_without_spaces(str));
	//ft_assing_to_array(array);
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
