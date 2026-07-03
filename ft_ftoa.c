/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 08:45:30 by omarquez          #+#    #+#             */
/*   Updated: 2026/07/03 12:53:44 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_power(int base, int exponent)
{
	int	sum;
	int	tmp;
	int	counter1;
	int	counter2;

	if (exponent == 0)
		return (1);
	tmp = base;
	counter1 = 1;
	while (counter1 < exponent)
	{
		sum = 0;
		counter2 = 0;
		while (counter2 < base)
		{
			sum += tmp;
			counter2 ++;
		}
		tmp = sum;
		counter1 ++;
	}
	return (tmp);
}

static void	ft_reverse_str(char *str, int len)
{
	int	counter1;
	int	counter2;
	int	tmp;

	counter1 = 0;
	counter2 = len - 1;
	while (counter1 < counter2)
	{
		tmp = str[counter1];
		str[counter1] = str[counter2];
		str[counter2] = tmp;
		counter1 ++;
		counter2 --;
	}
}

static int	ft_int_to_str(int num, char *str, int digits)
{
	int	counter;

	counter = 0;
	while (num)
	{
		str[counter++] = (num % 10) + '0';
		num = num / 10;
	}
	while (counter < digits)
		str[counter++] = '0';
	ft_reverse_str(str, counter);
	str[counter] = '\0';
	return (counter);
}

void	ft_ftoa(float n, char *res, int after_point)
{
	int		number;
	int		num_int;
	float	num_float;

	num_int = (int) n;
	num_float = n - (float) num_int;
	number = ft_int_to_str(num_int, res, 1);
	if (after_point != 0)
	{
		res[number] = '.';
		num_float = num_float * ft_power(10, after_point);
		ft_int_to_str((int) num_float, res + number + 1, after_point);
	}
}
