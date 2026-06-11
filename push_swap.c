/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:07:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/11 10:43:10 by omarquez         ###   ########.fr       */
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
	char	*tmp_concat;
	char	*tmp_param;
	char	*tmp_result;
	int		i;

	i = 0;
	if (argc <= 1)
		return (0);
	if (argc == 2)
	{
		result = ft_to_array(argv[1]);
		while (result[i])
		{
			ft_printf("word[%d] = %s\n", i, result[i]);
			ft_printf("is valid gg?", ft_is_valid_input(result[i]));
			i++;
		}
	}
	else
	{
		i = 1;
		tmp_result = NULL;
		tmp_concat = " ";
		while (argv[i])
		{
			tmp_param = argv[i];
			tmp_result = ft_strjoin(tmp_concat, tmp_param);
			ft_printf("%s", tmp_result);
			i++;
		}
	}
	return (0);
} 
