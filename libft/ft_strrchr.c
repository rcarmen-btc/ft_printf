/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:31:22 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:24:46 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	th;
	size_t	is;

	is = 0;
	i = 0;
	th = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			is = 1;
			th = i;
		}
		i++;
	}
	if (s[i] == c)
		return ((char*)s + i);
	else if (is)
		return ((char*)s + th);
	else
		return (NULL);
}
