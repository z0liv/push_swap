/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_dlst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:24:33 by khurtado          #+#    #+#             */
/*   Updated: 2026/06/24 12:59:02 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_rrotate_dlst(t_stack *stack, char stack_name, t_bench *bench)
{
	t_d_list	*stack_last;
	t_d_list	*tmp_node;

	stack_last = stack->tail;
	if (stack->size <= 1)
		return (NULL);
	tmp_node = stack_last->prev;
	stack->head = stack_last;
	stack->tail = tmp_node;
	if (stack_name == 'a')
	{
		*(bench->rra) += 1;
		return ("rra");
	}
	*(bench->rrb) += 1;
	return ("rrb");
}
/* static void	ft_print_list(t_stack *stack, int *array_len)
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
	t_bench 	*bench;

	bench = malloc(sizeof(t_bench));
	ft_init_bench(bench);
	//ft_print_bench(bench);
	len = 4;
	stack = ft_newstack();
	ft_dlstadd_back(stack, ft_dlstnew(42, 0));
	ft_dlstadd_back(stack, ft_dlstnew(84, 1));
	ft_dlstadd_back(stack, ft_dlstnew(6, 3));
	ft_dlstadd_back(stack, ft_dlstnew(126, 4));

	// Test content
	ft_print_list(stack, &len);
	
	printf("OPERATION: %s \n", ft_rrotate_dlst(stack, 'a', bench));
	
	printf("\n------------------------rotate-----------------------\n");
	//printf("new prev of head: %d", stack->head->prev->content);
	printf("\n-----------------------------------------------\n");
	ft_print_list(stack, &len);
	printf("\n-----------------------------------------------\n");
	//printf("new next of tail: %d", stack->tail->next->content);
	//ft_print_bench(bench);
	ft_clean_bench(&bench);
	
	ft_dlstclear(stack, &len);
	return (0);
} */