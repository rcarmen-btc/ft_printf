/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:23:58 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:24:34 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void		ft_putendl_fd(char *s, int fd)
{
	if (NULL == s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
