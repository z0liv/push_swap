/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:10:23 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/09 14:37:35 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "./printf/ft_printf.h"

typedef struct s_d_list
{
	int				*content;
	struct s_d_list	*next;
	struct s_d_list	*prev;
}	t_d_list;

t_d_list	*ft_dlstnew(void *content);
void		ft_dlstadd_back(t_d_list **lst, t_d_list *new);
void		ft_dlstadd_front(t_d_list **lst, t_d_list *new);
void		ft_dlstclear(t_d_list **lst, void (*del)(void*));
void		ft_dlstdelone(t_d_list *lst, void (*del)(void *));
void		ft_dlstiter(t_d_list *lst, void (*f)(void *));
t_d_list	*ft_dlstlast(t_d_list *lst);
t_d_list	*ft_dlstmap(t_d_list *lst, void *(*f)(void *), void (*del)(void *));
int			ft_dlstsize(t_d_list *lst);

#endif
