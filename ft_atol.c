/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:56:51 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/11 15:08:31 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	ft_atol(const char *str)
{
	int			counter;
	int			sign;
	long int	result;

	counter = 0;
	sign = 1;
	result = 0;
	while (str[counter] == ' ' || (str[counter] >= 9 && str[counter] <= 13))
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign = -1;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		result = result * 10 + (str[counter] - '0');
		counter++;
	}
	return (result * sign);
}
