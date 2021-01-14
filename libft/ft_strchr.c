/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:30:48 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/14 18:03:11 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const void *s, int c)
{
	size_t i;

	i = 0;
	while (((unsigned char *)s)[i] != '\0')
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if (((unsigned char *)s)[i] == (unsigned char)c)
		return (&((char *)s)[i]);
	return (NULL);
}
