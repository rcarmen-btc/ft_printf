/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:31:18 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:24:45 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t		i;

	i = 0;
	if (ft_strlen(lit) > 0)
	{
		while (big[i] != '\0')
		{
			if (big[i] == lit[0] && i < len)
				if (ft_strncmp(&big[i], &lit[0], ft_strlen(lit)) == 0)
				{
					if (i + ft_strlen(lit) > len)
						return (NULL);
					return ((char *)&big[i]);
				}
			i++;
		}
		return (NULL);
	}
	return ((char *)big);
}
