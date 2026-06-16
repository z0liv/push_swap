/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:05:15 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/16 14:37:20 by khurtado         ###   ########.fr       */
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
/*  */