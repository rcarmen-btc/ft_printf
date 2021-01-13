/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:30:30 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:24:29 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	*ft_memchr(const void *a, int c, size_t n)
{
	unsigned char *a_ptr;

	a_ptr = (unsigned char *)a;
	while (n-- > 0)
	{
		if (*a_ptr == (unsigned char)c)
			return (a_ptr);
		a_ptr++;
	}
	return (NULL);
}
