/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:29:42 by lrichard          #+#    #+#             */
/*   Updated: 2020/12/04 09:48:41 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list;
	t_list *nlist;
	t_list *nbegin;

	list = lst;
	if (!list)
		return (NULL);
	nlist = ft_lstnew(f(list->content));
	list = list->next;
	nbegin = nlist;
	while (list)
	{
		if (!(nlist->next = ft_lstnew(f(list->content))))
			ft_lstclear(&nbegin, del);
		list = list->next;
		nlist = nlist->next;
	}
	return (nbegin);
}
