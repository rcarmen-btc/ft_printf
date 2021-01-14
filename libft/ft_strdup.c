/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:30:50 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/14 18:03:15 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned char		*mem;
	size_t				i;

	i = ft_strlen(str);
	mem = (unsigned char *)malloc(sizeof(unsigned char) * (i + 1));
	if (NULL == mem)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		mem[i] = str[i];
		i++;
	}
	mem[i] = '\0';
	return ((char *)mem);
}
