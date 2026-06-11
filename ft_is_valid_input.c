/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:05:15 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/11 15:00:04 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_valid_input(char *input)
{
	int	counter;

	counter = 0;
	while (input[counter])
	{
		if (input[counter] == ' '
			|| input[counter] == '-'
			|| input[counter] == '+')
			counter ++;
		else if (!ft_isdigit(input[counter]))
			return (0);
		else
			counter ++;
	}
	return (1);
}
