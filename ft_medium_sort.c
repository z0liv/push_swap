/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 12:37:54 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/30 13:29:05 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_find_node(t_stack *stack, int n_index, int len)
{
	t_d_list	*tmp_node;
	int			counter;

	tmp_node = stack->head;
	counter = 0;
	while (counter < len)
	{
		if (tmp_node->norm_index == n_index)
			return (1);
		tmp_node = tmp_node->next;
		counter++;
	}
	return (0);
}

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
	chunks = (int) ft_sqrt(stack_a);
	max = chunks - 1;
	stack_b = ft_newstack();
	while (stack_a->size)
	{
		filled = 0;
		while (filled < chunks)
		{
			if (stack_a->head->norm_index >= min && stack_a->head->norm_index <= max)
			{
				if(stack_a->head->norm_index < (min + max) / 2)
					ft_push_dlst(stack_a, stack_b, bench, "b");
				else
				{
					ft_push_dlst(stack_a, stack_b, bench, "b");
					ft_rotate_dlst(stack_b, 'b', bench);
				}
				filled++;
			}
			else if (ft_find_node(stack_a, min, (int)(stack_a->size / 2)))
				ft_rotate_dlst(stack_a, 'a', bench);
			else
				ft_rrotate_dlst(stack_a, 'a', bench);
		}
		min += chunks;
		max += chunks;
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
