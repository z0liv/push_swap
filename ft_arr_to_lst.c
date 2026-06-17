/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_to_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 10:28:09 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/17 12:54:38 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_helper(long *arr)
{
	free(arr);
	exit(write(2, "Error\n", 7));
}

static void	ft_print_list(t_d_list **lst, int *array_len)
{
	int			counter;
	t_d_list	*lst_tmp;

	counter = 0;
	lst_tmp = (*lst);
	while (counter < *array_len)
	{
		printf("content: %d \n", (lst_tmp)->content);
		printf("norm_index: %d \n", (lst_tmp)->norm_index);
		(lst_tmp) = (lst_tmp)->next;
		counter ++;
	}
}

int	ft_arr_to_lst(long	*arr, int *array_len )
{
	t_d_list	*head;
	long		*sorted_arr;
	int			counter;

	head = NULL;
	counter = 0;
	sorted_arr = ft_sort_array(arr, *array_len);
	if (ft_is_overflow(arr, *array_len) || ft_is_duplicate(arr, *array_len))
		ft_free_helper(arr);
	while (counter < *array_len)
	{
		if (counter == 0)
		{
			head = ft_dlstnew(arr[counter], counter, ft_find_norm_index(arr[counter], sorted_arr, *array_len));
			counter ++;
		}
		else
		{
			ft_dlstadd_back(&head, ft_dlstnew(arr[counter], counter, ft_find_norm_index(arr[counter], sorted_arr, *array_len)));
			counter ++;
		}
	}
	ft_print_list(&head, array_len);
	ft_dlstclear(&head, array_len);
	return (free(sorted_arr), ft_printf("end of arr_to_lst \n"));
}
