/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 10:04:45 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/19 10:07:22 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_resize(char **str, int size, char *flag)
{
	char	*temp;

	temp = ft_strdup(*str);
	free(*str);
	*str = ft_strdup(temp + size);
	free(temp);
	return (ft_strdup(flag));
}
