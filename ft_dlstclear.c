/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:04:30 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/17 09:30:31 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstclear(t_d_list **lst, int *array_len)
{
	t_d_list	*lsttmp;
	int			counter;

	if (!lst)
		return ;
	lsttmp = *lst;
	counter = 0;
	while (counter < *array_len)
	{
		lsttmp = (*lsttmp).next;
		free(*lst);
		*lst = lsttmp;
		counter ++;
	}
	*lst = NULL;
}
