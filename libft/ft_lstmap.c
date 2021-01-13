/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 00:51:57 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:24:25 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmplst;
	t_list *new;

	if (!lst || !f)
		return (NULL);
	if (!(tmplst = ft_lstnew(f(lst->content))))
		return (NULL);
	new = tmplst;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(tmplst = ft_lstnew(f(lst->content))))
			ft_lstclear(&new, del);
		lst = lst->next;
		ft_lstadd_back(&new, tmplst);
	}
	return (new);
}
