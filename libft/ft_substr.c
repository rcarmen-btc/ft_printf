/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:31:27 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:24:47 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	size_t			i;
	size_t			sl;

	if (NULL == s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sl = ft_strlen(s + start);
	if (sl < len)
		len = sl;
	if (!(mem = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (*s != '\0' && len > 0)
	{
		mem[i] = s[i + start];
		i++;
		len--;
	}
	mem[i] = '\0';
	return (mem);
}
