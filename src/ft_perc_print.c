/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perc_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/18 15:38:00 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void		ft_perc_print(t_specs *stuff)
{
	char	perc;
	int		i;

	i = 0;
	perc = '%';
	if (stuff->flag == minus)
	{
		ft_putchar_fd(perc, 1);
		while (i++ < stuff->width - 1)
			ft_putchar_fd(' ', 1);
	}
}
