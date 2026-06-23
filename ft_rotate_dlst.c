/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_dlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:03:58 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/23 10:50:25 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *ft_rotate_dlst(t_stack *stack, char stack_name, t_bench *bench)
{
	t_d_list	*stack_first;
	t_d_list	*tmp_node;

	stack_first = stack->head;
	if (stack->size <= 1)
		return (NULL);
	tmp_node = stack_first->next;
	stack->tail = stack_first;
	stack->head = tmp_node; 
	if (stack_name == 'a')
	{
		bench->ra ++;
		return ("ra");
	}
	bench->rb ++;
	return ("rb");
}

/* int	main(void)
{
	t_stack		*stack;
	int			len;

	len = 3;
	stack = ft_newstack();
	ft_dlstadd_back(stack, ft_dlstnew(42, 0));
	ft_dlstadd_back(stack, ft_dlstnew(84, 1));
	ft_dlstadd_back(stack, ft_dlstnew(126, 2));

	// Test content
	ft_print_list(stack, &len);
	
	printf("OPERATION: %s \n", ft_rotate_dlst(stack, 'b'));
	
	printf("\n------------------------rotate-----------------------\n");
	
	printf("new prev of head: %d", stack->head->prev->content);
	printf("\n-----------------------------------------------\n");
	ft_print_list(stack, &len);
	printf("\n-----------------------------------------------\n");
	printf("new next of tail: %d", stack->tail->next->content);

	ft_dlstclear(stack, &len);
	return (0);
} */
