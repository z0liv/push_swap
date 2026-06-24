/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:26:47 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/24 15:16:30 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstadd_front(t_stack *stack, t_d_list *new)
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
		stack->head = new;
	}
	stack->head->prev = stack->tail;
	stack->tail->next = stack->head;
	stack->size ++;
}

static void	ft_print_list(t_stack *stack, int *array_len)
{
	int			counter;
	t_d_list	*lst_tmp;
	
	counter = 0;
	lst_tmp = stack->head;
	while (counter < *array_len)
	{
		printf("content: %d \n", (lst_tmp)->content);
		//printf("norm_index: %d \n", (lst_tmp)->norm_index);
		(lst_tmp) = (lst_tmp)->next;
		counter ++;
	}
}
int	main(void)
{
	t_stack		*stack;
	int			len;

	len = 3;
	stack = ft_newstack();
	ft_dlstadd_front(stack, ft_dlstnew(42, 0));
	ft_dlstadd_front(stack, ft_dlstnew(84, 1));
	ft_dlstadd_front(stack, ft_dlstnew(126, 2));

	// Test content
	ft_print_list(stack, &len);
	printf("new prev of head: %d", stack->head->prev->content);
	printf("\n-----------------------------------------------\n");

	ft_dlstclear(stack, &len);
	return (0);
} 