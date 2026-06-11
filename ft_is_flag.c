/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 09:48:35 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/11 09:52:56 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_flag(char *param)
{
	if (ft_strnstr(param, "--simple", ft_strlen(param)))
		return (1);
	else if (ft_strnstr(param, "--medium", ft_strlen(param)))
		return (1);
	else if (ft_strnstr(param, "--complex", ft_strlen(param)))
		return (1);
	else if (ft_strnstr(param, "--adaptive", ft_strlen(param)))
		return (1);
	else
		return (0);
}
