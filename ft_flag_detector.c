/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_detector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:21:24 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/19 10:08:48 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_flag_detector(char **str)
{
	char	*flag;

	if (ft_find_str("--simple ", *str))
		return (flag = (ft_resize(str, ft_strlen("--simple "), "--simple")));
	if (ft_find_str("--medium ", *str))
		return (flag = (ft_resize(str, ft_strlen("--medium "), "--medium")));
	if (ft_find_str("--complex ", *str))
		return (flag = (ft_resize(str, ft_strlen("--complex "), "--complex")));
	if (ft_find_str("--adaptive ", *str))
		return (flag = (ft_resize(str,
					ft_strlen("--adaptive "),
					"--adaptive")));
	return (ft_strdup(""));
}
