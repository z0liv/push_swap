/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:49:20 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/18 11:09:21 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_dlstsize(t_d_list *lst)
{
	int			counter;
	t_d_list	*lst_cpy;

	counter = 0;
	lst_cpy = lst;
	if (!lst)
		return (0);
	if (!lst->next)
		return (1);
	while (lst_cpy->index < lst_cpy->next->index)
	{
		lst_cpy = lst_cpy->next;
		counter ++;
	}
	counter ++;
	return (counter);
}
