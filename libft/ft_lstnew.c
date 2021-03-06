/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:20:37 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/14 18:02:51 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *lst;

	if (!(lst = malloc(sizeof(t_list))))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
