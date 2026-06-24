/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:07:53 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/24 19:41:52 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstadd_back(t_stack *stack, t_d_list *new)
{
	if (!stack || !new)
		return ;
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		new->prev = stack->tail;
		stack->tail->next = new;
		stack->tail = new;
	}
	stack->head->prev = stack->tail;
	stack->tail->next = stack->head;
	stack->size ++;
}
/*static void	ft_print_list(t_stack *stack, int *array_len)
{
	int			counter;
	t_d_list	*lst_tmp;

	counter = 0;
	lst_tmp = stack->head;

	while (counter < *array_len)
	{
		printf(
			"Node %d\n"
			"  addr       : %p\n"
			"  content    : %d\n"
			"  norm_index : %d\n"
			"  prev       : %p\n"
			"  next       : %p\n\n",
			counter,
			(void *)lst_tmp,
			lst_tmp->content,
			lst_tmp->norm_index,
			(void *)lst_tmp->prev,
			(void *)lst_tmp->next
		);

		lst_tmp = lst_tmp->next;
		counter++;
	}
}
int	main(void)
{
	t_stack		*stack;
	int			len;

	len = 4;
	stack = ft_newstack();
	ft_dlstadd_back(stack, ft_dlstnew(42, 0));
	ft_dlstadd_back(stack, ft_dlstnew(84, 1));
	ft_dlstadd_back(stack, ft_dlstnew(126, 2));
	ft_dlstadd_back(stack, ft_dlstnew(122, 3));

	// Test content
	ft_print_list(stack, &len);
	printf("new prev of head: %d", stack->head->prev->content);
	printf("\n-----------------------------------------------\n");

	ft_dlstclear(stack, &len);
	return (0);
}*/
