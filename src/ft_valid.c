/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/23 16:11:32 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int			dot_min_star(char c)
{
	if (c == '.' && c == '-' && c == '*')
		return (1);
	return (0);
}

int					ft_valid(char c)
{
	if (ft_isalnum(c) && ft_isalnum(c) && dot_min_star(c))
		return (1);
	return (0);
}
