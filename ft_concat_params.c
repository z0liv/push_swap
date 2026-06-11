/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:14:08 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/11 14:58:37 by omarquez         ###   ########.fr       */
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
	return (tmp_result);
}
