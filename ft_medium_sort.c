/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 12:37:54 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/30 11:43:55 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	ft_sqrt(t_stack *stack)
{
	double	number;
	double	root;
	int		counter;
	
	number = (double) stack->size;
	if (number == 0)
        return (0);
	root = number;
	counter = 0;
	while(counter < 10)
	{
		root = (number / root + root ) / 2;
		counter++; 
	}
	return (root);
}

void	ft_medium_sort(t_stack *stack_a, t_bench *bench)
{
	t_stack *stack_b;
	int		chunks;
	int		min;
	int		max;
	int		filled;
	
	min = 0;
	filled = 0;
	chunks = (int) ft_sqrt(stack_a);
	max = chunks - 1;
	stack_b = ft_newstack();
	while (filled < chunks)
	{
		if (stack_a->head->norm_index >= min && stack_a->head->norm_index <= max)
		{
			ft_push_dlst(stack_a, stack_b, bench, "a");
			filled++;
		}
		else
		{
			ft_rotate_dlst(stack_a, 'a', bench);
		}
	}
	(void) bench;
}

/*
int main(void)
{
    t_stack *stack;
    int n;

    stack = ft_newstack();
	n = 500;
    if (!stack)
		return (1);
	stack->size = n;
    printf("sqrt(%d) = %.2f\n", stack->size, ft_sqrt(stack));
    free(stack);
    return (0);
}*/
