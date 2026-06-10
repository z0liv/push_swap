/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/10 13:24:20 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


char	**ft_to_array(char *str)
{
	char	**str2;
	str2 = ft_split(str, ' ');
	return (str2);
}

int	main(int argc, char **argv)
{
	char	**result;
	int		i;


	if (argc <= 1)
		return ft_printf("no hace nada...");
	result = ft_to_array(argv[1]);
	i = 0;
	if (argc == 2)
	{
		while (result[i])
		{
			ft_printf("word[%d] = %s\n", i, result[i]);
			/* ft_printf("is valid?", ft_is_valid_input(result[i])); */
			i++;
		}
	}
	else
	{
		i = 1;
		while (argv[i])
		{
			ft_printf("param[%d] = %s\n", i, argv[i]);
			i++;
		}

	}
	return (0);
} 
