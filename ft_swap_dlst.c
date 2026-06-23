/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_dlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:40:28 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/19 13:33:54 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_swap_dlst(t_stack *stack, char stack_name)
{
	int	tmp_content;
	int	tmp_norm_index;

	if (stack->size <= 1)
	return (NULL);	
	tmp_content = stack->head->content;
	tmp_norm_index = stack->head->norm_index;
	stack->head->content = stack->head->next->content;
	stack->head->norm_index = stack->head->next->norm_index;
	stack->head->next->content = tmp_content;
	stack->head->next->norm_index = tmp_norm_index;
	if (stack_name == 'a')
		return ("sa");
	return ("sb");
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
	
	printf("OPERATION: %s \n", ft_swap_dlst(stack, 'b'));
	
	printf("\n------------------------swap-----------------------\n");
	
	printf("new prev of head: %d", stack->head->prev->content);
	printf("\n-----------------------------------------------\n");
	ft_print_list(stack, &len);
	printf("\n-----------------------------------------------\n");
	printf("new next of tail: %d", stack->tail->next->content);

	ft_dlstclear(stack, &len);
	return (0);
} */
