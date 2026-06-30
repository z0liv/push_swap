/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_dlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:59:41 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/30 22:54:28 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_helper(t_stack *stack_src)
{
	stack_src->head = NULL;
	stack_src->tail = NULL;
}

int	ft_push_dlst(t_stack *stack_src, t_stack *stack_dst, t_bench *bench,
			char *stack_name)
{
	t_d_list	*node;

	node = stack_src->head;
	if (stack_src->size == 1)
	{
		ft_helper(stack_src);
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
		stack_src->head = node->next;
		stack_src->tail = node->prev;
	}
	stack_src->size--;
	node->next = node;
	node->prev = node;
	ft_dlstadd_front(stack_dst, node);
	if (!ft_strncmp(stack_name, "a", 1))
	{
		*(bench)->pa += 1;
		return (write(1, "pa\n", 3));
	}
	*(bench)->pb += 1;
	return (write(1, "pb\n", 3));
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
	int			len2;
	t_stack		*stackb;
	t_bench		*bench;

	len = 4;
	len2 = 2;
	bench = malloc(sizeof(t_bench));
	ft_init_bench(bench);
	stack = ft_newstack();
	stackb = ft_newstack();
	ft_dlstadd_back(stack, ft_dlstnew(42, 0));
	ft_dlstadd_back(stack, ft_dlstnew(84, 1));
	ft_dlstadd_back(stack, ft_dlstnew(126, 2));
	ft_dlstadd_back(stack, ft_dlstnew(122, 3));

	// Test content
	ft_print_list(stack, &len);
	
	printf("\n-----------------------------------------------\n");
	ft_push_dlst(stack,stackb, bench, "a");
	ft_push_dlst(stack,stackb, bench, "a");
	ft_push_dlst(stack,stackb, bench, "a");
	ft_push_dlst(stackb,stack, bench, "b");
	ft_print_list(stackb, &len2);
	len -= 2;
	printf("\n-----------------------------------------------\n");
	ft_print_list(stack, &len);
	ft_print_bench(bench);
	ft_dlstclear(stack, &len);
	return (0);
}*/
