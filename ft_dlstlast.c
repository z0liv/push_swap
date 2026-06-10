/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:06:08 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/09 13:27:50 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_d_list	*ft_dlstlast(t_d_list *lst)
{
	t_d_list	*lst_cpy;

	if (!lst)
		return (0);
	lst_cpy = lst;
	while (lst_cpy->next)
	{
		lst_cpy = lst_cpy->next;
	}
	return (lst_cpy);
}
