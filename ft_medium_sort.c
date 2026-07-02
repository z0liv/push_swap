/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 12:37:54 by khurtado          #+#    #+#             */
/*   Updated: 2026/07/02 09:06:00 by omarquez         ###   ########.fr       */
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
	while (counter < 10)
	{
		root = (number / root + root) / 2;
		counter++;
	}
	return (root);
}

static int	ft_fill_b(t_stack *stack_a, t_stack *stack_b,
				t_bench *bench, int *range)
{
	if (!stack_a || !stack_a->head)
		return (0);
	if (stack_a->head->norm_index >= range[0]
		&& stack_a->head->norm_index <= range[1])
	{
		if (stack_a->head->norm_index < (range[0] + range[1]) / 2)
			ft_push_dlst(stack_a, stack_b, bench, "b");
		else
		{
			ft_push_dlst(stack_a, stack_b, bench, "b");
			ft_rotate_dlst(stack_b, 'b', bench);
		}
	}
	else if (ft_find_node(stack_a, range[0], stack_a->size / 2))
		ft_rotate_dlst(stack_a, 'a', bench);
	else
		ft_rrotate_dlst(stack_a, 'a', bench);
	return (1);
}

static void	ft_fill_a(t_stack *stack_a, t_stack *stack_b, t_bench *bench)
{
	int	number;

	number = stack_b->size - 1;
	while (number > -1)
	{
		if (stack_b->head->norm_index == number)
		{
			ft_push_dlst(stack_b, stack_a, bench, "a");
			number--;
		}
		else if (ft_find_node(stack_b, number, stack_b->size / 2))
			ft_rotate_dlst(stack_b, 'b', bench);
		else
			ft_rrotate_dlst(stack_b, 'b', bench);
	}
}

void	ft_medium_sort(t_stack *stack_a, t_bench *bench)
{
	t_stack	*stack_b;
	int		chunks;
	int		range[2];
	int		filled;

	chunks = (int) ft_sqrt(stack_a);
	range[0] = 0;
	range[1] = chunks - 1;
	stack_b = ft_newstack();
	while (stack_a->size)
	{
		filled = 0;
		while (filled < chunks && stack_a->head)
		{
			if (stack_a->head->norm_index >= range[0]
				&& stack_a->head->norm_index <= range[1])
				filled++;
			if (!ft_fill_b(stack_a, stack_b, bench, range))
				break ;
		}
		range[0] += chunks;
		range[1] += chunks;
	}
	ft_fill_a(stack_a, stack_b, bench);
	ft_dlstclear(stack_b, &stack_b->size);
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
