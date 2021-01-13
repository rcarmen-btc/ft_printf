/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:31:04 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:24:43 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*mem;
	size_t		len;
	size_t		i;

	i = 0;
	if (NULL == s || NULL == f)
		return (NULL);
	len = ft_strlen(s);
	if (!(mem = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		mem[i] = f(i, s[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
