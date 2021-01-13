/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:20:25 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:24:24 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f != NULL)
		while (lst != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
}
