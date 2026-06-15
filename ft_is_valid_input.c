/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:05:15 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/15 10:20:10 by omarquez         ###   ########.fr       */
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
		{
			if ((input[counter] == '-'
					&& (input[counter + 1] && !ft_isdigit(input[counter + 1])))
				|| (input[counter] == '+'
					&& (input[counter + 1] && !ft_isdigit(input[counter + 1]))))
				return (0);
			counter ++;
		}
		else if (!ft_isdigit(input[counter]))
			return (0);
		else
			counter ++;
	}
	return (1);
}
