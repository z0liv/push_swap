/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:14:08 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/15 13:17:03 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_concat_params(char **args)
{
	char	*tmp_param;
	char	*result;
	char	*tmp_result;
	int		i;

	i = 1;
	result = ft_strdup("");
	while (args[i])
	{
		tmp_param = args[i];
		tmp_result = ft_strjoin(result, tmp_param);
		if (result)
			free(result);
		result = tmp_result;
		tmp_param = args[i];
		tmp_result = ft_strjoin(result, " ");
		if (result)
			free(result);
		result = tmp_result;
		i++;
	}
	if (!ft_is_valid_input(result))
		exit (ft_printf("Error \n"));
	return (tmp_result);
}
