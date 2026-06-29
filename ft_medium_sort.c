/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 12:37:54 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/29 20:13:18 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	ft_sqrt(t_stack *stack)
{
	double	number;
	double	root;
	int		square;
	int		surrounding;
	int		counter;
	
	square = 0;
	surrounding = 0;
	counter = 0;
	number = (double) stack->size;
	while (number > square)
	{
		surrounding++;
		square = (surrounding + 1) *(surrounding + 1);
	}
	root = (double) surrounding;
	while(counter < 10)
	{
		root = (number / root + root ) / 2;
		if (root * root == number)
			return (root);
		counter++; 
	}
	return (root);
}

/* void	ft_medium_sort(t_stack *stack_a, t_bench *bench)
{
	t_stack *stack_b;
	double	chunks;

	chunks = ft_sqrt(stack_a);
	stack_b = ft_newstack();
} */
/*int main(void)
{
	t_stack *stack;

	stack=ft_newstack();
	
	ft_sqrt(stack);
	return (0);
}*/