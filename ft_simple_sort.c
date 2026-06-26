/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:44:43 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/26 12:27:49 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_copy_stack(t_stack *stack, int len)
{
	t_stack	*copy;
	int		tmp;
	int		counter;

	counter = 0;
	copy = malloc(sizeof(t_stack));
	tmp = stack->head->content;
	while (counter < len)
	{
		ft_dlstadd_back(copy, ft_dlstnew(stack->head->content,
				stack->head->norm_index));
		stack->head = stack->head->next;
		counter ++;
	}
	while (stack->head->content != tmp)
		stack->head = stack->head->next;
	return (copy);
}

int	ft_find_node(t_stack *stack, int n_index, int len)
{
	t_stack		*tmp_stack;
	t_d_list	*tmp_node;
	int			counter;

	tmp_stack = ft_copy_stack(stack, len);
	counter = 0;
	while (counter < len)
	{
		if (tmp_stack->head->norm_index == n_index)
			return (ft_dlstclear(tmp_stack, &tmp_stack->size), 1);
		tmp_node = tmp_stack->head;
		tmp_stack->head = tmp_stack->head->next;
		tmp_stack->tail = tmp_node;
		counter ++;
	}
	ft_dlstclear(tmp_stack, &tmp_stack->size);
	return (0);
}

void	ft_simple_sort(t_stack *stack_a, t_bench *bench)
{
	t_stack	*stack_b;
	int		min;

	min = 0;
	stack_b = ft_newstack();
	while (stack_a->size)
	{
		if (min == stack_a->head->norm_index)
		{
			ft_push_dlst(stack_a, stack_b, bench, "a");
			min ++;
		}
		else if (ft_find_node(stack_a, min, (int)(stack_a->size / 2)))
			ft_rotate_dlst(stack_a, 'a', bench);
		else
			ft_rrotate_dlst(stack_a, 'a', bench);
	}
	while (stack_b->size)
		ft_push_dlst(stack_b, stack_a, bench, "b");
	ft_dlstclear(stack_b, &stack_b->size);
}
