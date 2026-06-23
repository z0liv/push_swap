/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bench_detector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 08:51:11 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/23 12:33:16 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_bench_detector(char **str)
{
	char	*flag;

	if (ft_find_str("--bench ", *str))
		return (flag = (ft_resize(str, ft_strlen("--bench "), "--bench")));
	return (ft_strdup(""));
}
