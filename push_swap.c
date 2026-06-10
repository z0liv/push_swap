/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/10 09:20:35 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


char	**ft_to_array(char *str)
{
	char	**str2;
	str2 = ft_split(str, ' ');
	

	return (str2);
}
/*
int	main(int argc, char **argv)
{
	char	**result;
	int		i;

	if (argc > 1)
		printf("%s",argv[1]);
	result = ft_to_array(argv[1]);
	i = 0;
	while (result[i])
	{
		ft_printf("word[%d] = %s\n", i, result[i]);
		i++;
	}
	return (0);
}
*/
