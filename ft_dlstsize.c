/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:05:13 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/09 14:44:27 by omarquez         ###   ########.fr       */
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
	while (lst_cpy)
	{
		lst_cpy = lst_cpy->next;
		counter++;
	}
	return (counter);
}
