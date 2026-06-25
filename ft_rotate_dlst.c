/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_dlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:03:58 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/25 12:16:47 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_dlst(t_stack *stack, char stack_name, t_bench *bench)
{
	t_d_list	*stack_first;
	t_d_list	*tmp_node;

	stack_first = stack->head;
	if (stack->size <= 1)
		return (0);
	tmp_node = stack_first->next;
	stack->tail = stack_first;
	stack->head = tmp_node;
	if (stack_name == 'a')
	{
		*(bench->ra) += 1;
		return (write(1, "ra\n", 3));
	}
	*(bench->rb) += 1;
	return (write(1, "rb\n", 3));
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
	
	printf("OPERATION: %s \n", ft_rotate_dlst(stack, 'a', bench));
	
	printf("\n------------------------rotate-----------------------\n");
	printf("new prev of head: %d", stack->head->prev->content);
	printf("\n-----------------------------------------------\n");
	ft_print_list(stack, &len);
	printf("\n-----------------------------------------------\n");
	printf("new next of tail: %d", stack->tail->next->content);
	//ft_print_bench(bench);
	ft_clean_bench(&bench);
	
	ft_dlstclear(stack, &len);
	return (0);
} */
