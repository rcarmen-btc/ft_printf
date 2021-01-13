/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:00:20 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 02:23:33 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;

	if (!(mem = malloc(nmemb * size)))
		return (NULL);
	return (ft_memset(mem, 0, nmemb * size));
}
